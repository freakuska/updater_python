import asyncio
import subprocess
import os
import re
import zlib
from datetime import datetime
from typing import Callable, Optional
from pathlib import Path
from models.lsr_info import LsrInfo
from models.command import LsrCommands
from config import (
    TimeoutConfig,
    TftpConfig,
    StatusMarkers,
    FirmwareVersionConfig,
    FlashConfig
)
from utils.logger import setup_logger
from services.bkr_connector import BkrConnector
from models.firmware_info import FirmwareInfo


logger = setup_logger(__name__)


class FirmwareUpdaterService:



    def __init__(self, bkr_ip: str = None, bkr_port: int = None):


        self.bkr_connector = BkrConnector(bkr_ip, bkr_port)
        self.log_callback: Optional[Callable[[str], None]] = None


    def set_log_callback(self, callback: Callable[[str], None]):


        self.log_callback = callback
        self.bkr_connector.set_log_callback(callback)


    def _log(self, message: str):


        logger.info(message)
        if self.log_callback:
            self.log_callback(message)


    async def connect_to_bkr(self) -> bool:


        return await self.bkr_connector.connect()


    async def prepare_lsr_for_update(self, lsr_id: str):


        self._log(f"\n{'='*60}")
        self._log(f"Подготовка ЛСР {lsr_id}")
        self._log(f"{'='*60}")


        try:
            # Шаг 1: Установить watchdog
            self._log(f"\n Установка watchdog timeout на 3600 сек...")
            command = LsrCommands.set_watchdog_timeout(lsr_id, timeout=3600)
            success, response = await self.bkr_connector.send_command(command)
            if not success:
                self._log(" Не удалось установить watchdog")
                return False, None


            await asyncio.sleep(1)


            # Шаг 2: Перезагрузить ЛСР
            self._log(f"\nПерезагрузка ЛСР {lsr_id}...")
            command = LsrCommands.reset_lsr(lsr_id)
            success, response = await self.bkr_connector.send_command(command)
            if not success:
                self._log(" Не удалось перезагрузить ЛСР")
                return False, None


            await asyncio.sleep(TimeoutConfig.POST_RESET_WAIT)


            # Шаг 3: Получить IP адрес ЛСР
            self._log(f"\nПолучение IP адреса ЛСР {lsr_id}...")
            command = LsrCommands.get_lsr_ip(lsr_id)
            success, response = await self.bkr_connector.send_command(command)
            if not success:
                self._log(" БКР не вернул IP адрес ЛСР")
                return False, None


            lsr_ip = self._parse_lsr_ip(response)
            if not lsr_ip:
                self._log(" Не удалось распарсить IP адрес ЛСР")
                return False, None


            self._log(f" IP адрес ЛСР: {lsr_ip}")


            # Шаг 4: Проверить WWDG статус
            self._log(f"\n Проверка WWDG статус...")
            command = LsrCommands.check_watchdog_status(lsr_id)
            success, response = await self.bkr_connector.send_command(command)
            if not success:
                self._log(" Не удалось получить статус WWDG")
                return False, None


            wwdg_enabled = self._parse_wwdg_status(response)


            if wwdg_enabled:
                self._log(f" WWDG включен, выполняется сброс...")
                command = LsrCommands.disable_watchdog(lsr_id)
                success, response = await self.bkr_connector.send_command(command)
                await asyncio.sleep(1)


            self._log(f" ЛСР готов к обновлению")
            return True, lsr_ip


        except Exception as e:
            self._log(f" Ошибка: {str(e)}")
            return False, None


    def _parse_lsr_ip(self, response: str) -> Optional[str]:


        for line in response.split('\n'):
            line = line.strip()
            if not line:
                continue


            parts = line.split()
            for part in parts:


                if self._is_valid_ip(part):
                    return part


        return None


    def _is_valid_ip(self, ip: str) -> bool:


        parts = ip.split('.')
        if len(parts) != 4:
            return False
        try:
            return all(0 <= int(part) <= 255 for part in parts)
        except:
            return False


    def _parse_wwdg_status(self, response: str) -> bool:


        return "1" in response


    def _validate_firmware_type(self, firmware_path: str, device_type: str = "lsr4") -> bool:
        filename = os.path.basename(firmware_path)


        if device_type not in filename.lower():
            self._log(f" Ошибка: прошивка {filename} не для {device_type}")
            self._log(f"   Файл должен содержать '{device_type}' в названии")
            return False


        self._log(f" Прошивка {filename} соответствует {device_type}")
        return True


    def _extract_firmware_date(self, firmware_version_str: str) -> Optional[datetime]:
        try:
            date_obj = datetime.strptime(firmware_version_str, "%b %d %Y %H:%M:%S")
            return date_obj
        except Exception as e:
            self._log(f" Не удалось распарсить дату: {firmware_version_str}")
            return None


    def _validate_firmware_date(self, firmware_path: str, current_lsr_version: str) -> bool:
        file_name = os.path.basename(firmware_path)


        match = re.search(r'(\d{8})', file_name)
        if not match:
            self._log(f" Не найдена дата в имени файла: {file_name}")
            return False


        firmware_date_str = match.group(1)
        try:
            firmware_date = datetime.strptime(firmware_date_str, "%Y%m%d")
        except:
            self._log(f" Неверный формат даты в файле: {firmware_date_str}")
            return False


        current_date = self._extract_firmware_date(current_lsr_version)
        if not current_date:
            self._log(f" Не удалось определить текущую версию ЛСР")
            return False




    async def upload_firmware_via_tftp(self, lsr_ip: str, firmware_path: str) -> bool:


        self._log(f"\n{'='*60}")
        self._log(f"Передача прошивки")
        self._log(f"{'='*60}")


        try:
            if not os.path.exists(TftpConfig.SCRIPT_PATH):
                self._log(f" Скрипт не найден: {TftpConfig.SCRIPT_PATH}")
                return False


            if not os.path.exists(firmware_path):
                self._log(f" Файл прошивки не найден: {firmware_path}")
                return False


            firmware_size = os.path.getsize(firmware_path) / 1024  # в KB
            self._log(f" Размер прошивки: {firmware_size:.1f} KB")


            max_size = FlashConfig.max_firmware_size_kb()
            if firmware_size > max_size:
                self._log(f" Размер прошивки превышает максимально допустимый ({max_size} KB)")
                return False


            crc_hex = self._calc_crc32_hex(firmware_path)
            tftp_name = f"{crc_hex}.bin"
            self._log(f"🔢 CRC32 прошивки: {crc_hex}, имя файла для TFTP: {tftp_name}")


            self._log(f"\n Включение promiscuous mode...")
            await self.bkr_connector.enable_promiscuous()
            await asyncio.sleep(1)


            self._log(f"\n Запуск скрипта: {TftpConfig.SCRIPT_PATH} {lsr_ip} {firmware_path}")


            try:
                result = subprocess.run(
                    [TftpConfig.SCRIPT_PATH, lsr_ip, firmware_path, tftp_name],
                    capture_output=True,
                    text=True,
                    timeout=TimeoutConfig.TFTP_TIMEOUT,
                )


                stdout = (result.stdout or "").strip()
                stderr = (result.stderr or "").strip()


                self._log(f" Stdout: {stdout}")
                if result.stderr:
                    self._log(f" Stderr: {stderr}")


                if result.returncode != 0:
                    self._log(" Скрипт/TFTP завершился с ошибкой, прошивка НЕ передана")
                    return False


                self._log("✅ Прошивка передана")
                return True


            except subprocess.TimeoutExpired:
                self._log(f" Timeout при передаче прошивки (>{TimeoutConfig.TFTP_TIMEOUT} сек)")
                return False


        except Exception as e:
            self._log(f" Ошибка: {str(e)}")
            return False


    def _calc_crc32_hex(self, path: str) -> str:
        crc = 0
        with open(path, "rb") as f:
            for chunk in iter(lambda: f.read(4096), b""):
                crc = zlib.crc32(chunk, crc)
        return f"{crc & 0xFFFFFFFF:08X}"


    async def verify_firmware_transfer(self, lsr_ip: str) -> bool:


        self._log(f"\n{'='*60}")
        self._log(f"Проверка передачи")
        self._log(f"{'='*60}")


        self._log(f" Фаза проверки пропущена")
        return True



    async def finalize_update(self, lsr_id: str) -> bool:


        self._log(f"\n{'='*60}")
        self._log(f" Возврат в исходное состояние")
        self._log(f"{'='*60}")


        try:
            # Шаг 1: Сбросить watchdog
            self._log(f"\n Сброс watchdog timeout...")
            command = LsrCommands.reset_watchdog_timeout(lsr_id)
            success, response = await self.bkr_connector.send_command(command)


            await asyncio.sleep(1)


            # Шаг 2: Перезагрузить ЛСР
            self._log(f"\n Перезагрузка ЛСР {lsr_id}...")
            command = LsrCommands.reset_lsr(lsr_id)
            success, response = await self.bkr_connector.send_command(command)


            await asyncio.sleep(TimeoutConfig.POST_RESET_WAIT)




            self._log(f"\n Запуск позиционирования...")
            await self.bkr_connector.start_phy()


            self._log(f" Система возвращена в исходное состояние)")
            return True


        except Exception as e:
            self._log(f" ОШИБКА В ФАЗЕ 4: {str(e)}")
            return False


    async def update_lsr_async(self, lsr: LsrInfo, firmware_path: str) -> bool:


        self._log(f"\n\n")
        self._log(f"╔{'═'*58}╗")
        self._log(f"║ Начало обновления прошивки {lsr.id:>39}║")
        self._log(f"║ Текущая версия: {lsr.firmware_version:>41}║")
        self._log(f"║ IP адрес: {lsr.ip_address:>48}║")
        self._log(f"║ Файл: {Path(firmware_path).name:>50}║")
        self._log(f"╚{'═'*58}╝\n")


        try:


            if not self._validate_firmware_type(firmware_path, "lsr4"):
                self._log(" Обновление отменено (неверный тип прошивки)")
                return False


            if not await self.connect_to_bkr():
                self._log(" Не удалось подключиться к БКР")
                return False


            success, lsr_ip = await self.prepare_lsr_for_update(lsr.id)
            if not success or not lsr_ip:
                self._log(" Обновление отменено (ошибка подготовки)")
                return False


            if not await self.upload_firmware_via_tftp(lsr_ip, firmware_path):
                self._log(f" Обновление отменено (ошибка передачи)")
                return False


            await self.verify_firmware_transfer(lsr_ip)


            if not await self.finalize_update(lsr.id):
                self._log(f" Ошибка при возврате в исходное состояние")
                return False


            self._log(f"\n\n")
            self._log(f"╔{'═'*58}╗")
            self._log(f"║ ЛСР {lsr.id} обновлен                           ║")
            self._log(f"╚{'═'*58}╝\n")


            return True


        except Exception as e:
            self._log(f"\n КРИТИЧЕСКАЯ ОШИБКА: {str(e)}")
            import traceback
            self._log(f"обратная связь: {traceback.format_exc()}")
            return False


        finally:
            self.bkr_connector.disconnect()



    async def check_firmware_version(self, lsr: LsrInfo) -> bool:


        self._log(f" Проверка версии прошивки ЛСР {lsr.id}...")
        self._log(f"   Текущая версия: {lsr.firmware_version}")
        self._log(f"   Минимальная поддерживаемая: {FirmwareVersionConfig.MIN_VERSION_DATE}")


        if lsr.firmware_version < FirmwareVersionConfig.MIN_VERSION_DATE:
            self._log(f"⚠️ Прошивка устаревшая, требуется обновление")
            return True
        else:
            #self._log(f"✅ Прошивка современная")
            self._log(f"Прошивка современная")
            return False

import logging
from services.udp_service import UpdService


logger = logging.getLogger(__name__)


class LsrExecutor:
    """Класс для выполнения команд конкретного ЛСР"""


    def __init__(self, udp_service: UpdService):
        self.udp = udp_service


    def get_ip(self, lsr_id: str) -> str:
        """получение ip-адреса ЛСР"""
        command = f"exe {lsr_id} phy ipaddr"


        return self.udp.send_command(command)


    def check_wwdg(self, lsr_id: str) -> str:


        command = f"exe {lsr_id} wwdg"


        return self.udp.send_command(command)


    def restore_wwdg(self, lsr_id: str) -> str:
        command = f"exe {lsr_id} eeprom wwdg"


        return self.udp.send_command(command)


    def reset(self, lsr_id: str) -> str:
        command = f"exe {lsr_id} reset"


        return self.udp.send_command(command)


    def erase_flash(self, lsr_id: str) -> str:
        command = f"exe {lsr_id} flash fsz1"


        return self.udp.send_command(command)


    def get_system_info(self, lsr_id: str) -> str:
        command = f"exe {lsr_id} sys info"


        return self.udp.send_command(command)


    def restore_iwdg(self, lsr_id: str) -> str:


        command = f"exe {lsr_id} eeprom iwdg rst 0"
        # Формируем: "exe 2561 eeprom iwdg rst 0"


        return self.udp.send_command(command)


    def reset_eeprom(self, lsr_id: str) -> str:
        command = f"exe {lsr_id} eeprom iwdg rst 3600"
        return self.udp.send_command(command)


    def reset_iwdg(self, lsr_id: str) -> str:
        command = f"exe {lsr_id} iwdg"
        return self.udp.send_command(command)
