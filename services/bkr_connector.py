import socket
import asyncio
import time
import re
from typing import List, Callable, Optional, Tuple
from models.lsr_info import LsrInfo
from models.command import LsrCommands
from config import NetworkConfig, TimeoutConfig, BkrPollingConfig
from utils.logger import setup_logger


logger = setup_logger(__name__)


class BkrConnector:

    def __init__(self, ip: str = None, port: int = None, timeout: float = None):
        self.ip = ip or NetworkConfig.BKR_IP
        self.port = port or NetworkConfig.BKR_PORT
        self.timeout = timeout or TimeoutConfig.UDP_TIMEOUT
        self.socket: Optional[socket.socket] = None
        self.log_callback: Optional[Callable[[str], None]] = None

    def set_log_callback(self, callback: Callable[[str], None]):
        self.log_callback = callback

    def _log(self, message: str):
        logger.info(message)
        if self.log_callback:
            self.log_callback(message)

    async def connect(self) -> bool:
        try:
            self.socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
            self.socket.settimeout(self.timeout)
            self._log(f"🔌 Подключаюсь к БКР на {self.ip}:{self.port}...")
            self.socket.sendto(b"\n", (self.ip, self.port))
            self._log(f"Сокет создан и готов")
            return True
        except Exception as e:
            self._log(f"Ошибка подключения: {str(e)}")
            return False

    async def send_command(self, command: str, wait_response: bool = True) -> Tuple[bool, str]:
        """
        Отправка команды и проверка exit code
        Возвращает (успех: bool, ответ: str)
        """
        try:
            if not self.socket:
                raise Exception("сокет не инициализирован")

            self._log(f"Отправка: {command}")
            self.socket.sendto((command + "\n").encode('utf-8'), (self.ip, self.port))

            if not wait_response:
                return True, ""

            response_lines = []
            start_time = time.time()

            while time.time() - start_time < self.timeout:
                try:
                    data, _ = self.socket.recvfrom(4096)
                    response = data.decode('utf-8', errors='ignore').strip()
                    if response:
                        response_lines.append(response)
                        self._log(f"Ответ: {response}")
                except socket.timeout:
                    break

            full_response = "\n".join(response_lines)

            success = self._check_exit_code(full_response)
            return success, full_response

        except Exception as e:
            self._log(f"Ошибка при отправке команды: {str(e)}")
            return False, ""

    def _check_exit_code(self, response: str) -> bool:
        """Проверка exit code команды БКР"""
        match = re.search(r'\[(\d+)\]', response)

        if match:
            exit_code = int(match.group(1))
            if exit_code == 0:
                return True
            else:
                self._log(f"Команда вернула ошибку: [{exit_code}]")
                return False

        # Если нет явного кода - считаем успехом
        return True

    async def stop_phy(self) -> bool:
        self._log("Остановка системы позиционирования (phy stop)...")
        command = LsrCommands.phy_stop()
        success, response = await self.send_command(command)

        if success:
            await asyncio.sleep(BkrPollingConfig.PRE_POLL_DELAY_SEC)
            self._log(f"Позиционирование остановлено")
        else:
            self._log("Ошибка при остановке позиционирования")

        return success

    async def clear_lsr_poll(self) -> bool:
        self._log("Очистка списока запросов ЛСР...")
        command = LsrCommands.poll_lsr_clear()
        success, response = await self.send_command(command)

        if not success:
            self._log(f"Ошибка при очистке запросов")

        return success

    async def poll_lsr(self) -> bool:
        self._log("Опрос ЛСР (lsr poll)...")
        command = "lsr poll"
        success, response = await self.send_command(command)

        if success:
            estimated_time = BkrPollingConfig.MAX_ITERATIONS * BkrPollingConfig.POLL_INTERVAL_SEC
            self._log(f"⏳ Ожидание завершения опроса (~{estimated_time:.1f} сек)...")
            await asyncio.sleep(3)
        else:
            self._log(f"Ошибка при опросе ЛСР")

        return success

    async def check_bkr_status(self, max_iterations: int = None) -> bool:
        max_iterations = max_iterations or BkrPollingConfig.MAX_ITERATIONS

        for iteration in range(max_iterations):
            if iteration % BkrPollingConfig.LOG_FREQUENCY == 0:
                self._log(f"Проверка статуса БКР (попытка {iteration}/{max_iterations})...")

            command = LsrCommands.get_bkr_status()
            success, response = await self.send_command(command)

            if success:
                self._log("БКР готов (статистика собрана)")
                return True
            else:
                # [1] означает, что опрос ещё идёт
                await asyncio.sleep(BkrPollingConfig.POLL_INTERVAL_SEC)
                continue

        self._log("Timeout: БКР не ответил в установленное время")
        return False

    async def get_lsr_list(self) -> List[LsrInfo]:
        self._log("Получение списка ЛСР (lsr llv)...")
        command = LsrCommands.get_lsr_list()
        success, response = await self.send_command(command)

        if not success:
            self._log(f"Ошибка при получении списка ЛСР")
            return []

        lsr_list = self._parse_lsr_list(response)
        self._log(f"Найдено {len(lsr_list)} ЛСР")

        return lsr_list

    def _parse_lsr_list(self, response: str) -> List[LsrInfo]:

        lsr_list = []

        for line in response.split('\n'):
            line = line.strip()

            if not line or line.startswith('[') or line.startswith('BKR'):
                continue

            if "?" in line:
                try:
                    lsr_id = line.split()[0]
                    self._log(f"ЛСР {lsr_id} недоступен (статус: ?)")
                except:
                    pass
                continue

            try:
                parts = line.split()

                if len(parts) < 5:
                    continue

                lsr_id = parts[0]

                firmware_version = " ".join(parts[1:])

                lsr = LsrInfo(
                    id=lsr_id,
                    #ip_address=ip_address,
                    firmware_version=firmware_version
                )
                lsr_list.append(lsr)
                self._log(f"ЛСР {lsr_id}: FW={firmware_version}")

            except Exception as e:
                self._log(f"Ошибка парсинга строки '{line}': {str(e)}")
                continue

        return lsr_list

    def _is_valid_ip(self, ip: str) -> bool:
        """Проверка валидности IP адреса"""
        try:
            parts = ip.split('.')
            if len(parts) != 4:
                return False
            return all(0 <= int(part) <= 255 for part in parts)
        except (ValueError, AttributeError):
            return False

    async def enable_promiscuous(self) -> bool:
        self._log("Включение promiscuous mode (eth promiscuous 1)...")
        command = LsrCommands.promiscuous_enable()
        success, response = await self.send_command(command)

        if not success:
            self._log(f"Ошибка при включении promiscuous mode")

        return success

    async def disable_promiscuous(self) -> bool:
        self._log("Отключение promiscuous mode (eth promiscuous 0)...")
        command = LsrCommands.promiscuous_disable()
        success, response = await self.send_command(command)

        if not success:
            self._log(f"Ошибка при отключении promiscuous mode")

        return success

    async def start_phy(self) -> bool:
        self._log("▶Запуск системы позиционирования (phy start)...")
        command = LsrCommands.phy_start()
        success, response = await self.send_command(command)

        if not success:
            self._log(f"Ошибка при запуске позиционирования")

        return success

    async def get_lsr_status(self, lsr_id: str) -> dict:
        self._log(f"Получение информации о ЛСР {lsr_id}...")
        command = LsrCommands.get_sys_info(lsr_id)
        success, response = await self.send_command(command)
        return {"raw": response, "success": success}

    async def reset_lsr(self, lsr_id: str) -> bool:
        self._log(f"Перезагрузка ЛСР {lsr_id}...")
        command = LsrCommands.reset_lsr(lsr_id)
        success, response = await self.send_command(command)

        if success:
            await asyncio.sleep(TimeoutConfig.POST_RESET_WAIT)
        else:
            self._log(f"Ошибка при перезагрузке ЛСР")

        return success

    async def set_frequency_plan(self, plan_id: int) -> bool:
        from config import FrequencyConfig

        plan = FrequencyConfig.get_plan(plan_id)

        self._log(f"\nУстановка частотного плана {plan.plan_id}...")
        self._log(f"   {plan.name}")
        self._log(f"   Минимальная версия: {plan.min_fw_version}")

        try:
            command = LsrCommands.set_frequency_plan(plan_id)
            success, response = await self.send_command(command)

            if success:
                self._log(f"Частотный план установлен")
            else:
                self._log(f"Ошибка при установке частотного плана")

            return success

        except Exception as e:
            self._log(f"Ошибка при установке частотного плана: {str(e)}")
            return False

    async def get_frequency_plan(self) -> Optional[int]:
        self._log(f"Получение текущего частотного плана...")

        try:
            command = LsrCommands.get_frequency_plan()
            success, response = await self.send_command(command)

            if not success:
                self._log(f"Ошибка при получении плана")
                return None

            for line in response.split('\n'):
                line = line.strip()
                if line.isdigit():
                    plan_id = int(line)
                    self._log(f"Текущий план: {plan_id}")
                    return plan_id

            self._log(f"Не удалось определить текущий план")
            return None

        except Exception as e:
            self._log(f"Ошибка при получении плана: {str(e)}")
            return None

    async def connect_and_get_lsr_list(self, frequency_plan: Optional[int] = None) -> List[LsrInfo]:
        from config import FrequencyConfig

        if not await self.connect():
            return []

        try:
            if frequency_plan is not None:
                if not await self.set_frequency_plan(frequency_plan):
                    self._log("Не удалось установить частотный план, продолжаю...")
                await asyncio.sleep(2)

            await self.stop_phy()
            await self.clear_lsr_poll()
            await self.poll_lsr()

            # ожидание готовности БКР
            for i in range(10):
                if await self.check_bkr_status():
                    break
                await asyncio.sleep(1)

            # получение списка
            lsr_list = await self.get_lsr_list()

            # возвращение в режим работы
            await self.start_phy()

            return lsr_list

        except Exception as e:
            self._log(f"Ошибка при получении списка ЛСР: {str(e)}")
            return []


    def disconnect(self):
        if self.socket:
            self.socket.close()
            self._log("Отключился от БКР")
