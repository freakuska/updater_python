import os

class BkrPollingConfig:
    """константы для опроса ЛСР через БКР"""
    MAX_ITERATIONS = 480 #максимальное количество попыток опроса БКР

    POLL_INTERVAL_SEC = 0.25 #интервал между проверками статуса опроса

    LOG_FREQUENCY = 20 #логирование процесса каждые N итераций

    COMPLETION_MARKER = "[0] 0" #маркер завершения опроса

    POLLING_MARKER = "[0] 4" #опрос еще идет

    PRE_POLL_DELAY_SEC = 5 #пауза ДО начала опроса (после phy stop)

class TimeoutConfig:
    """все таймауты"""

    TFTP_TIMEOUT = 120 #максимальное время передачи прошивки через TFTP (в секундах)

    UDP_TIMEOUT = 5 #максимальное время ответа БКР на UDP команду

    BKR_COMMAND_TIMEOUT = 10 #максимальное время ответа на команды БКР

    SYSTEM_COMMAND_TIMEOUT = 30 #максимальное время для системных команд на ЛСР

    POST_RESET_WAIT = 5 #пауза после отправки reset ЛСР


class FlashConfig:
    """параметры Flash памяти в ЛСР"""

    TOTAL_SIZE_KB = 512 * 1024 #общий размер flash памяти в ЛСР

    MIN_FREE_PERCENT = 50 #минимум свободной памяти после загрузки прошивки

    @classmethod
    def max_firmware_size_kb(cls) -> int: #максимальный размер файла прошивки
        return (cls.TOTAL_SIZE_KB * cls.MIN_FREE_PERCENT) // 100

class TftpConfig:
    """параметры TFTP"""

    SCRIPT_DIR = "scripts" #папка для скриптов

    SCRIPT_NAME = "upgrade.bat"

    SCRIPT_PATH = os.path.join(SCRIPT_DIR, SCRIPT_NAME)

    TIMEOUT = 120

class FirmwareVersionConfig:
    """параметры версий прошивки"""

    MIN_VERSION_DATE = "2022-12-02" #минимальная поддерживаемая версия прошивки

    OLD_FIRMWARE_THRESHOLD = "2024-01-01" #дата раздела между "старой" и "новой" прошивкой

class LoggerConfig:
    """параметры логирования"""

    LOG_DIR = "logs" #папка для сохранения файлов логов

    LOG_LEVEL = "INFO"

    DATE_FORMAT = "%Y-%m-%d %H:%M:%S" #формат времени в логах

class NetworkConfig:
    """параметры сетевого взаимодействия"""

    BKR_PORT = 3456 #UDP порт БКР

    BKR_IP = "10.0.1.88" #IP-адрес БКР

    LSR_IP_SUBNET = "10.1.0.0/24" #подсеть где находится ЛСР

class FileSizeConfig:
    """ограничения размеров файлов"""

    MIN_FIRMWARE_SIZE_KB = 100 #минимальный размер файла прошивки (в килобайтах)

    MAX_FIRMWARE_SIZE_MB = 500 #максимальный размер файла прошивки

class StatusMarkers:
    """маркеры статусов и ответов БКР"""

    #успех
    SUCCESS = "[0] 0" #маркер успешной операции/завершения операции

    IN_PROGRESS = "[0] 1"

    POLLING = "[0] 4" #опрос еще идет

    # ОШИБКИ
    ERROR_MARKER = "ERROR" #маркер ошибки в ответе

    TIMEOUT_MARKER = "TIMEOUT" #маркер таймаута

    UNKNOWN_STATUS = "?" #неизвестный статус ЛСР (в ответе lsr llv)


class FrequencyPlan:

    def __init__(self, plan_id: int, name: str, downlink_hz: int, uplink_hz: int, min_fw_version: str):
        self.plan_id = plan_id
        self.name = name
        self.downlink_hz = downlink_hz
        self.uplink_hz = uplink_hz
        self.min_fw_version = min_fw_version

    def __str__(self):
        return f"План {self.plan_id}: {self.name} ({self.downlink_hz/1e6:.1f} - {self.uplink_hz/1e6:.1f} MHz)"


class FrequencyConfig:

    PLANS = {
        1: FrequencyPlan(
            plan_id=1,
            name="BAND_1 (154.2-174.8 MHz)",
            downlink_hz=154200000,
            uplink_hz=174800000,
            min_fw_version="Oct 23 2022 17:12:38"
        ),
        4: FrequencyPlan(
            plan_id=4,
            name="BAND_4 (155.3-173.7 MHz)",
            downlink_hz=155300000,
            uplink_hz=173700000,
            min_fw_version="Oct 23 2022 17:12:38"
        ),
        8: FrequencyPlan(
            plan_id=8,
            name="BAND_8 (158.2-173.7 MHz) [2025]",
            downlink_hz=158200000,
            uplink_hz=173700000,
            min_fw_version="Jul 9 2025 16:30:07"
        )
    }

    # частотный план по умолчанию
    DEFAULT_PLAN = 1

    @classmethod
    def get_plan(cls, plan_id: int) -> FrequencyPlan:
        """Получить частотный план по ID"""
        if plan_id not in cls.PLANS:
            return cls.PLANS[cls.DEFAULT_PLAN]
        return cls.PLANS[plan_id]

    @classmethod
    def get_all_plans(cls) -> dict:
        """Получить все доступные планы"""
        return cls.PLANS

    @classmethod
    def plan_names(cls) -> dict:
        """Получить словарь {ID: имя} для UI"""
        return {plan_id: plan.name for plan_id, plan in cls.PLANS.items()}

def ensure_directories_exist():
    """
    cоздаёт необходимые папки если их нет. вызывается в main.py перед запуском программы
    """
    if not os.path.exists(LoggerConfig.LOG_DIR):
        os.makedirs(LoggerConfig.LOG_DIR)
        print(f"✅ Создана папка логов: {LoggerConfig.LOG_DIR}/")

def validate_config():
    """проверка корректности конфигурации"""

    errors = []

    #проверка таймаутов
    if BkrPollingConfig.POLL_INTERVAL_SEC <= 0:
        errors.append("Интервал между проверками статуса опроса должен быть > 0")

    if BkrPollingConfig.MAX_ITERATIONS <= 0:
        errors.append("Максимальное количество попыток опроса БКР должно быть > 0")

    if TimeoutConfig.TFTP_TIMEOUT <= 0:
        errors.append("Максимальное время передачи прошивки через TFTP должно быть > 0")

    #проверка Flash памяти
    if FlashConfig.MIN_FREE_PERCENT < 10 or FlashConfig.MIN_FREE_PERCENT > 90:
        errors.append("Минимальная свободная память после загрузки прошивки должна быть между 10 и 90")

    if FlashConfig.TOTAL_SIZE_KB <= 0:
        errors.append("Общий размер flash памяти в ЛСР должен быть > 0")

    #проверка файлов
    if not os.path.exists(TftpConfig.SCRIPT_PATH):
        errors.append(f"Скрипт {TftpConfig.SCRIPT_PATH} не найден")

    #Вывод результатов
    if errors:
        print("Ошибки конфигурации:")
        for error in errors:
            print(f"{error}")
        return False
    else:
        print("Конфигурация валидна")
        return True


#дебаг информация
if __name__ == "__main__":
    """вывод информации о конфигурации для отладки"""

    print("Конфигурация \n")

    print("Опрос БКР:")
    print(f"  Mаксимальное количество попыток опроса БКР:      {BkrPollingConfig.MAX_ITERATIONS}")
    print(f"  Интервал между проверками статуса опроса:        {BkrPollingConfig.POLL_INTERVAL_SEC}")
    print(f"  Логирование процесса каждые N итераций:          {BkrPollingConfig.LOG_FREQUENCY}")
    print(f"  Максимальное время:                              {BkrPollingConfig.MAX_ITERATIONS * BkrPollingConfig.POLL_INTERVAL_SEC:.1f} сек")

    print("\n  Таймауты:")
    print(f"  Максимальное время передачи прошивки через TFTP: {TimeoutConfig.TFTP_TIMEOUT} сек")
    print(f"  Максимальное время ответа БКР:                   {TimeoutConfig.UDP_TIMEOUT} сек")
    print(f"  Максимальное время ответа на команды БКР:        {TimeoutConfig.BKR_COMMAND_TIMEOUT} сек")
    print(f"  Максимальное время для системных команд на ЛСР:  {TimeoutConfig.SYSTEM_COMMAND_TIMEOUT} сек")
    print(f"  Пауза после отправки reset ЛСР:                  {TimeoutConfig.POST_RESET_WAIT} сек")

    print("\n  Flash память:")
    print(f"  Общий размер flash памяти в ЛСР:                 {FlashConfig.TOTAL_SIZE_KB / 1024:.0f} MB")
    print(f"  Миниму свободной памяти после загрузки прошивки: {FlashConfig.MIN_FREE_PERCENT}%")
    print(f"  Максимальный размер файла прошивки:              {FlashConfig.max_firmware_size_kb():.0f} KB")

    print("\n Логирование:")
    print(f"  Папка для сохранения файлов логов:               {LoggerConfig.LOG_DIR}/")
    print(f"  Уровень логирования:                             {LoggerConfig.LOG_LEVEL}")
    print(f"  Формат времени в логах:                          {LoggerConfig.DATE_FORMAT}")

    print("\n Сетевые параметры:")
    print(f"  UDP порт БКР:                                    {NetworkConfig.BKR_PORT}")
    print(f"  IP-адрес БКР:                                    {NetworkConfig.BKR_IP}")
    print(f"  Подсеть, в которой находится ЛСР:                {NetworkConfig.LSR_IP_SUBNET}")

    print("\n Готово к использованию!\n")
