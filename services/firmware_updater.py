import asyncio
import logging
from typing import Callable, Optional

from models.lsr_info import LsrInfo
from services.udp_service import UpdService
from services.bkr_connector import BkrConnector
from services.lsr_executor import LsrExecutor
from services.tftp_service import TftpService

logger = logging.getLogger(__name__)

class FirmwareUpdaterService:

    def __init__(self, bkr_ip: str, bkr_port: str):

        self.bkr_ip = bkr_ip
        self.bkr_port = bkr_port

        self.log_callback: Optional[Callable] = None

        self.udp_service = None

        self.lsr_executor = None

        self.tftp_service = TftpService()

    def set_log_callback(self, callback: Callable):
        #установка функции для логирования
        self.log_callback = callback

    def _log(self, message: str):
        logger.info(message)
        if self.log_callback:
            self.log_callback(message)

    async def update_lsr_async(self, lsr: LsrInfo, firmware_path: str) -> bool:

        try:
            self._log(f"═══════════════════════════════════════════════════════")
            self._log(f"🚀 НАЧАЛО ОБНОВЛЕНИЯ ЛСР {lsr.id}")
            self._log(f"═══════════════════════════════════════════════════════")

            self.udp_service = UpdService(self.bkr_ip, self.bkr_port)
            self.udp_service.connect()
            self.lsr_executor = LsrExecutor(self.udp_service)

            self._log("📋 ЭТАП 2: ПРОВЕРКА И ПОДГОТОВКА ЛСР")
            if not await self._prepare_lsr(lsr.id):
                self._log("❌ Ошибка при подготовке ЛСР")
                return False

            self._log("📋 ЭТАП 3: ВКЛЮЧЕНИЕ PROMISCUOUS MODE")
            if not await self._enable_promiscuous_mode():
                self._log("⚠️ Предупреждение: не удалось включить promiscuous mode")

            self._log("📋 ЭТАП 4: ЗАГРУЗКА ПРОШИВКИ (TFTP)")
            if not await self._upload_firmware(lsr.ip_address, firmware_path):
                self._log("❌ Ошибка при загрузке прошивки")

                self._log("📋 ЭТАП 5A: ПОПЫТКА ВОССТАНОВЛЕНИЯ")
                await self._recover_from_error(lsr.id)

                return False
            self._log("📋 ЭТАП 6: ФИНАЛЬНОЕ ВОССТАНОВЛЕНИЕ")
            await self._finalize_update(lsr.id)

            # УСПЕХ!
            self._log(f"✅✅✅ ЛСР {lsr.id} УСПЕШНО ОБНОВЛЕНО! ✅✅✅")
            self._log(f"═══════════════════════════════════════════════════════")

            return True

        except Exception as e:
            self._log(f"❌ КРИТИЧЕСКАЯ ОШИБКА: {e}")
            return False

        finally:

            if self.udp_service:
                self.udp_service.disconnect()

    async def _enable_promiscuous_mode(self) -> bool:

        try:
            self._log("📡 Включение promiscuous mode...")
            self.udp_service.send_command("eth promiscuous 1")
            self._log("✅ Promiscuous mode включен")
            return True

        except Exception as e:
            self._log(f"❌ Ошибка: {e}")
            return False

    async def _upload_firmware(self, lsr_ip: str, firmware_path: str) -> bool:
        return await self.tftp_service.upload_firmware(lsr_ip, firmware_path)

    async def _recover_from_error(self, lsr_id: str) -> bool:

        try:
            self._log(f"🔧 Попытка восстановления ЛСР {lsr_id}...")

            self._log("🗑️  Стирание Flash памяти...")
            self.lsr_executor.erase_flash(lsr_id)
            await asyncio.sleep(5)

            self.log("📝 Получение размера Flash...")
            self.lsr_executor.get_flash_size(lsr_id)
            await asyncio.sleep(2)

            self._log("📊 Проверка системной информации...")
            sys_info = self.lsr_executor.get_system_info(lsr_id)
            self._log(f"ℹ️  Информация: {sys_info}")

            self._log("✅ Восстановление завершено")
            return True

        except Exception as e:
            self._log(f"❌ Ошибка восстановления: {e}")
            return False


    async def _finalize_update(self, lsr_id: str) -> bool:
        """ЭТАП 6: Финальное восстановление"""
        try:
            self._log("🔐 Восстановление исходного состояния...")

            self._log("⚙️  Восстановление watchdog...")
            self.lsr_executor.restore_iwdg(lsr_id)
            await asyncio.sleep(1)

            self._log(f"🔄 Финальная перезагрузка ЛСР {lsr_id}...")
            self.lsr_executor.reset(lsr_id)
            await asyncio.sleep(3)

            self._log("📡 Отключение promiscuous mode...")
            self.udp_service.send_command("eth promiscuous 0")

            self._log("✅ Система восстановлена")
            return True

        except Exception as e:
            self._log(f"❌ Ошибка финализации: {e}")
            return False
