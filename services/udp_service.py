import socket
import logging
from typing import Optional

#получение объекта для логирования
logger = logging.getLogger(__name__)

class UpdService:
    """UDP сервис для подключения к БКР"""

    def __init__(self, host: str, port: int, timeout: int = 5):
        self.host = host
        self.port = port
        self.timeout = timeout
        self.socket = None

    def connect(self):
        """Подключение к БКР через UDP"""
        try:
            #создание UDP сокета
            self.socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

            #установка таймаута
            self.socket.settimeout(self.timeout)

            logger.info(f"✅ UDP сокет создан для {self.host}:{self.port}")

        except Exception as e:
            logger.error(f"❌ Ошибка при создании UDP сокета: {e}")
            raise

    def send_command(self, command: str) -> str:

        if not self.socket:
            raise RuntimeError("Сокет не инициализирован")

        try:
            data = (command + "\n").encode('utf-8')

            #отправка команды на БКР
            self.socket.sendto(data, (self.host, self.port))

            logger.debug(f"📤 Отправлена команда: {command}")

            #ожидание ответа от БКР
            response, _ = self.socket.recvfrom(4096)

            #декодирование байтов обратно в текст
            result = response.decode('utf-8', errors='ignore')

            logger.debug(f"📥 Получен ответ: {result[:100]}...")

            return result

        except socket.timeout:
            logger.error(f"❌ Ошибка при отправке команды: {command}")
            return "TIMEOUT"

        except Exception as e:
            logger.error(f"❌ Ошибка при отправке команды: {e}")
            return f"ERROR: {e}"

    def disconnect(self):
        """Закрыть соединение"""
        if self.socket:
            self.socket.close()
            logger.info("📴 UDP сокет закрыт")
