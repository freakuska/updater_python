import asyncio
import logging
from typing import Callable, Optional
from pathlib import Path

from models.lsr_info import LsrInfo
from services.udp_service import UpdService
from services.lsr_executor import LsrExecutor
from services.tftp_service import TftpService

logger = logging.getLogger(__name__)


class FirmwareUpdaterService:
    """Сервис для обновления прошивки ЛСР"""

    def __init__(self, bkr_ip: str, bkr_port: int):
        self.bkr_ip = bkr_ip
        self.bkr_port = bkr_port

        self.log_callback: Optional[Callable] = None

        self.udp_service: Optional[UpdService] = None
        self.lsr_executor: Optional[LsrExecutor] = None
        self.tftp_service = TftpService()

    def set_log_callback(self, callback: Callable):
        """Установка функции для логирования"""
        self.log_callback = callback

    def _log(self, message: str):
        """Логирование сообщения"""
        logger.info(message)
        if self.log_callback:
            self.log_callback(message)

    async def update_lsr_async(self, lsr: LsrInfo, firmware_path: str) -> bool:
        """Полное обновление ЛСР по документации"""

        try:
            self._log(f"═══════════════════════════════════════════════════════")
            self._log(f"🚀 НАЧАЛО ОБНОВЛЕНИЯ ЛСР {lsr.id}")
            self._log(f"═══════════════════════════════════════════════════════")

            # Проверка файла
            if not Path(firmware_path).exists():
                self._log(f"❌ Файл не найден: {firmware_path}")
                return False

            # Подключение к БКР
            self.udp_service = UpdService(self.bkr_ip, self.bkr_port)
            if not self.udp_service.connect():
                self._log("❌ Не удалось подключиться к БКР")
                return False

            self.lsr_executor = LsrExecutor(self.udp_service)

            # ===== ЭТАП 1: ИНИЦИАЛИЗАЦИЯ СИСТЕМЫ =====
            self._log("📋 ЭТАП 1: ОСТАНОВКА ОПРОСА И ИНИЦИАЛИЗАЦИЯ")
            if not await self._initialize_system():
                return False

            # ===== ЭТАП 2: ПРОВЕРКА WATCHDOG =====
            self._log("📋 ЭТАП 2: ПРОВЕРКА И ОТКЛЮЧЕНИЕ WATCHDOG")
            if not await self._check_and_disable_watchdog(lsr.id):
                self._log("⚠️ Предупреждение: проблема с watchdog")

            # ===== ЭТАП 3: ВКЛЮЧЕНИЕ PROMISCUOUS =====
            self._log("📋 ЭТАП 3: ВКЛЮЧЕНИЕ PROMISCUOUS MODE")
            await self._enable_promiscuous_mode()

            # ===== ЭТАП 4: ЗАГРУЗКА ПРОШИВКИ =====
            self._log("📋 ЭТАП 4: ЗАГРУЗКА ПРОШИВКИ (TFTP)")
            if not await self._upload_firmware(lsr.ip_address, firmware_path):
                self._log("❌ Ошибка при загрузке прошивки")

                # Попытка восстановления
                self._log("📋 ЭТАП 4A: ВОССТАНОВЛЕНИЕ ПОСЛЕ ОШИБКИ")
                await self._recover_from_error(lsr.id)
                return False

            # ===== ЭТАП 5: ФИНАЛИЗАЦИЯ =====
            self._log("📋 ЭТАП 5: ФИНАЛИЗАЦИЯ И ВОССТАНОВЛЕНИЕ")
            await self._finalize_update(lsr.id)

            # УСПЕХ!
            self._log(f"✅✅✅ ЛСР {lsr.id} УСПЕШНО ОБНОВЛЕНО! ✅✅✅")
            self._log(f"═══════════════════════════════════════════════════════")

            return True

        except Exception as e:
            self._log(f"❌ КРИТИЧЕСКАЯ ОШИБКА: {e}")
            logger.exception("Полная информация об ошибке:")
            return False

        finally:
            if self.udp_service:
                self.udp_service.disconnect()

    async def _initialize_system(self) -> bool:
        try:
            self._log("🛑 Остановка физического опроса...")
            self.udp_service.send_command("phy stop")
            await asyncio.sleep(5)  # ← КРИТИЧНО! 5 СЕКУНД!

            self._log("📋 Очистка списка запросов...")
            self.udp_service.send_command("lsr poll clear")
            await asyncio.sleep(1)

            self._log("🔄 Начало нового опроса...")
            self.udp_service.send_command("lsr poll")
            await asyncio.sleep(2)

            self._log("✅ Система инициализирована")
            return True

        except Exception as e:
            self._log(f"❌ Ошибка инициализации: {e}")
            return False

    async def _check_and_disable_watchdog(self, lsr_id: str) -> bool:
        try:
            self._log(f"⏱️ Проверка Watchdog для {lsr_id}...")

            # Проверить статус watchdog
            result = self.udp_service.send_command(f"exe {lsr_id} wwdg")

            if "1" in result:
                self._log(f"⚠️ Watchdog ВКЛЮЧЕН - отключаю...")
                self.udp_service.send_command(f"exe {lsr_id} eeprom wwdg 0")
                await asyncio.sleep(1)
                self.udp_service.send_command(f"exe {lsr_id} reset")
                await asyncio.sleep(2)
                self._log("✅ Watchdog отключен")
            else:
                self._log("✅ Watchdog уже отключен")

            return True

        except Exception as e:
            self._log(f"❌ Ошибка проверки watchdog: {e}")
            return False

    async def _enable_promiscuous_mode(self) -> bool:
        try:
            self._log("📡 Включение promiscuous mode...")
            self.udp_service.send_command("eth promiscuous 1")
            await asyncio.sleep(1)
            self._log("✅ Promiscuous mode включен")
            return True

        except Exception as e:
            self._log(f"❌ Ошибка: {e}")
            return False

    async def _upload_firmware(self, lsr_ip: str, firmware_path: str) -> bool:
        try:
            self._log(f"📤 Загрузка прошивки на {lsr_ip}...")
            success = await self.tftp_service.upload_firmware(lsr_ip, firmware_path)

            if success:
                self._log("✅ Прошивка загружена успешно")
                await asyncio.sleep(2)

            return success

        except Exception as e:
            self._log(f"❌ Ошибка загрузки: {e}")
            return False

    async def _recover_from_error(self, lsr_id: str) -> bool:
        try:
            self._log(f"🔧 Восстановление ЛСР {lsr_id}...")

            self._log("🗑️ Стирание Flash памяти...")
            self.udp_service.send_command(f"exe {lsr_id} flash erase1")
            await asyncio.sleep(5)

            self._log("📝 Проверка размера Flash...")
            size = self.udp_service.send_command(f"exe {lsr_id} flash fsz1")
            self._log(f"ℹ️ Размер Flash: {size}")

            self._log("✅ Восстановление завершено")
            return True

        except Exception as e:
            self._log(f"❌ Ошибка восстановления: {e}")
            return False

    async def _finalize_update(self, lsr_id: str) -> bool:
        try:
            self._log("🔐 Восстановление исходного состояния...")

            self._log("⚙️ Восстановление EEPROM таймеров...")
            self.udp_service.send_command(f"exe {lsr_id} eeprom iwdg rst 0")
            await asyncio.sleep(1)

            self._log("🔄 Перезагрузка ЛСР...")
            self.udp_service.send_command(f"exe {lsr_id} reset")
            await asyncio.sleep(3)

            self._log("📡 Отключение promiscuous mode...")
            self.udp_service.send_command("eth promiscuous 0")
            await asyncio.sleep(1)

            self._log("▶️ Запуск физического опроса...")
            self.udp_service.send_command("phy start")
            await asyncio.sleep(2)

            self._log("✅ Система полностью восстановлена")
            return True

        except Exception as e:
            self._log(f"❌ Ошибка финализации: {e}")
            return False
