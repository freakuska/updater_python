import subprocess
import asyncio
import logging
import os
from typing import Optional

logger = logging.getLogger(__name__)

class TftpService:
    """для загрузки прошивки"""

    def __init__(self, upgrade_script_path: str = "~/scripts/upgrade.sh"):
        self.upgrade_script_path = os.path.expanduser(upgrade_script_path)

    async def upload_firmware(self, lsr_ip: str, firmware_path: str) -> bool:
        """загрузка прошивки через tftp"""

        try:

            logger.info(f"📤 Начало передачи прошивки для {lsr_ip}...")
            logger.info(f"📦 Файл: {firmware_path}")

            #проверка существования файла
            if not os.path.exists(firmware_path):
                logger.error(f"❌ Файл не найден: {firmware_path}")
                return False

            #команда для запуска скрипта
            command = f"bash {self.upgrade_script_path} {lsr_ip} {firmware_path}"

            process = await asyncio.create_subprocess_shell(
                command,

                stdout=asyncio.subprocess.PIPE,

                stderr=asyncio.subprocess.PIPE
            )

            try:
                stdout, stderr = await asyncio.wait_for(
                    process.communicate(),

                    timeout=120
                )

                output = stdout.decode('utf-8', errors='ignore')

                errors = stderr.decode('utf-8', errors='ignore')

                if output:
                    logger.info(f"📋 Вывод скрипта: {output}")
                if errors:
                    logger.warning(f"⚠️  Ошибки скрипта: {errors}")

                if process.returncode == 0:
                    logger.info("✅ Скрипт завершился успешно")
                    logger.info("✅ Прошивка успешно загружена")

                    await asyncio.sleep(3)
                    return True
                else:
                    logger.error(f"❌ Скрипт завершился с кодом: {process.returncode}")

                    return False
            except asyncio.TimeoutError:

                logger.error("❌ TIMEOUT: Скрипт выполняется более 2 минут")
                process.kill

                return False

        except Exception as e:
            logger.error(f"❌ Ошибка TFTP: {e}")

            return False
