import re
import asyncio
import logging
from typing import List, Callable, Optional

from services.udp_service import UpdService
from models.lsr_info import LsrInfo

logger = logging.getLogger(__name__)

class BkrConnector:
    def __init__(self, host: str, port: int):
        #создание UDP сервиса
        self.udp_service = UpdService(host, port)

        #логирование в UI
        self.log_callback: Optional[Callable] = None

    def set_log_callback(self, callback: Callable):
        self.log_callback = callback

    def _log(self, message: str):
        """Внутреннее логирование"""
        logger.info(message)
        if self.log_callback:
            self.log_callback(message)

    async def connect_and_get_lsr_list(self) -> List[LsrInfo]:
        """Подключение к БКР и получение списка ЛСР"""
        try:
            self._log("📡 Подключение к БКР...")
            self.udp_service.connect()
            self._log("✅ Подключено к БКР")

            #первый этап - остановка опроса
            self._log("🛑 Остановка опроса (phy stop)...")
            self.udp_service.send_command("phy stop")

            await asyncio.sleep(5)

            self._log("✅ Опрос остановлен")

            #этап второй - очистка запросов
            self._log("🗑️  Очистка запросов (lsr poll clear)...")
            self.udp_service.send_command("lsr poll clear")
            await asyncio.sleep(1)
            self._log("✅ Запросы очищены")

            #этап третий - сбор статистики
            self._log("📊 Сбор статистики (lsr poll)...")
            self.udp_service.send_command("lsr poll")

            #ожидание завершения (максимальное время ожидания - 2 минуты)
            for i in range(480):
                bkr_status = self.udp_service.send_command("bkr")

                if "[0] 0" in bkr_status:
                    self._log("✅ Сбор статистики завершен")
                    break

                #вывод процесса каждые 20 итераций
                if i % 20 == 0 and i > 0:
                    seconds = i // 4
                    self._log(f"⏳ Сбор статистики... ({seconds} сек)")

                await asyncio.sleep(0.25)

            #четвертый этап - получение списка ЛСР
            self._log("📋 Получение списка ЛСР и версий прошивок...")
            llv_response = self.udp_service.send_command("lsr llv")

            #пятый этап - парсинг ответа
            lsr_list = self._parse_lsr_llv_response(llv_response)

            self._log(f"✅ Загружено ЛСР: {len(lsr_list)}")
            for lsr in lsr_list:
                self._log(f"  └─ {lsr.id} ({lsr.ip_address}) v{lsr.firmware_version}")

                return lsr_list

        except Exception as e:
            self._log(f"❌ Ошибка при подключении: {e}")
            return []

    def _parse_lsr_llv_response(self, response: str) -> List[LsrInfo]:
        lsr_list = []

        if "ERROR" in response or "TIMEOUT" in response:
            self._log("⚠️ Ошибка при получении списка ЛСР")
            return lsr_list

        lines = response.split('\n')

        for line in lines:
            if line.strip():

                lsr = self._parse_lsr_line(line)
                if lsr:
                    lsr_list.append(lsr)

        return lsr_list


    def _parse_lsr_line(self, line: str) -> Optional[LsrInfo]:
        """
        Парсинг одной строки с информацией о ЛСР

        line: одна строка ответа (например "ID: 2561, IP: 10.0.1.101, v1.0.0")
        return: объект LsrInfo или None если не получилось
        """
        try:

            id_match = re.search(r'(?:ID[:\s]+)?(\d{4})', line, re.IGNORECASE)

            ip_match = re.search(r'(\d+\.\d+\.\d+\.\d+)', line)

            version_match = re.search(r'v(\d+\.\d+\.\d+)', line)

            if id_match and ip_match:
                lsr = LsrInfo(
                    id=id_match.group(1),

                    ip_address=ip_match.group(1),
                    firmware_version=version_match.group(1) if version_match else "Unknown",
                    status="✅ Готов",
                    is_selected=False
                )
                return lsr
        except Exception as e:
            self._log(f"⚠️ Ошибка при парсинге строки: {line}. {e}")

        return None

    def disconnect(self):
        """Отключиться от БКР"""
        try:
            self.udp_service.disconnect()
            self._log("📴 Подключение закрыто")
        except Exception as e:
            self._log(f"⚠️ Ошибка при закрытии подключения: {e}")
