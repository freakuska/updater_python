"""модели для отслеживания статуса обновления прошивки"""

from dataclasses import dataclass, field
from datetime import datetime
from enum import Enum
from typing import Optional

class FirmwareUpdateStage(Enum):
    """этапы обновления прошивки ЛСР"""

    STARTING = 0
    PREPARING = 1
    CHECKING = 2
    PROMISCUOUS_MODE = 3
    TRANSFERRING_FILE = 4
    RECOVERY = 5
    FINALIZING = 6
    COMPLETED = 7

    def __str__(self) -> str:
        """Красивый вывод названия этапа"""
        names = {
            FirmwareUpdateStage.STARTING: "Запуск",
            FirmwareUpdateStage.PREPARING: "Подготовка",
            FirmwareUpdateStage.CHECKING: "Проверка",
            FirmwareUpdateStage.PROMISCUOUS_MODE: "Promiscuous режим",
            FirmwareUpdateStage.TRANSFERRING_FILE: "Передача файла",
            FirmwareUpdateStage.RECOVERY: "Восстановление",
            FirmwareUpdateStage.FINALIZING: "Завершение",
            FirmwareUpdateStage.COMPLETED: "Завершено",
        }
        return names.get(self, self.name)

@dataclass
class FirmwareUpdateStatus:
    """статус обновления прошивки ЛСР"""

    lsr_id: int
    stage: FirmwareUpdateStage = FirmwareUpdateStage.STARTING
    is_success: bool = False
    error_message: Optional[str] = None

    #время выполнения
    start_time: Optional[datetime] = None
    end_time: Optional[datetime] = None
    duration: Optional[float] = None

    progress: float = 0.0 #0-100%

    #доп информация
    bkr_ip: str = ""
    bkr_port: int = 0
    lsr_ip: str = ""
    firmware_path: str = ""

    def get_progress_percent(self) -> int:
        """прогресс в процентах"""
        return int(self.progress)

    def get_duration_seconds(self) -> float:
        """длительность в секундах"""
        if self.duration:
            return self.duration
        if self.start_time and self.end_time:
            delta = self.end_time - self.start_time
            return delta.total_seconds()
        return 0.0

    def __str__(self) -> str:
        """строковое представление статуса"""
        return (
            f"ЛСР {self.lsr_id} | "
            f"Этап: {self.stage} | "
            f"Прогресс: {self.get_progress_percent()}% | "
            f"Успех: {self.is_success}"
        )

@dataclass
class FirmwareUpdateResult:
    """реультат обновления прошивки"""
    is_success: bool
    stage: FirmwareUpdateStage
    error_message: Optional[str] = None
    start_time: Optional[datetime] = None
    end_time: Optional[datetime] = None
    duration: Optional[float] = None
    stage_details: dict = field(default_factory=dict)

    def get_summary(self) -> str:
        """Получить сводку результата"""
        if self.is_success:
            return f"Успешно обновлено за {self.duration:.1f}s"
        else:
            return f"Ошибка на этапе {self.stage}: {self.error_message}"
