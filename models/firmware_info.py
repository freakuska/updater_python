# models/firmware_info.py
from pathlib import Path
from config import FileSizeConfig

class FirmwareInfo:
    """Информация о файле прошивки"""

    def __init__(self, filepath: str):
        self.filepath = filepath
        self.path = Path(filepath)
        self.file_size = self.path.stat().st_size if self.path.exists() else 0
        self.file_name = self.path.name

    def validate(self) -> tuple[bool, str]:

        if not self.path.exists():
            return False, f"Файл не найден: {self.filepath}"

        if self.path.suffix.lower() != '.bin':
            return False, f"Неверное расширение файла (ожидается .bin)"

        file_size_kb = self.file_size / 1024
        if file_size_kb < FileSizeConfig.MIN_FIRMWARE_SIZE_KB:
            return False, f"Файл слишком маленький ({file_size_kb:.0f} KB < {FileSizeConfig.MIN_FIRMWARE_SIZE_KB} KB)"

        file_size_mb = self.file_size / (1024 * 1024)
        if file_size_mb > FileSizeConfig.MAX_FIRMWARE_SIZE_MB:
            return False, f"Файл слишком большой ({file_size_mb:.0f} MB > {FileSizeConfig.MAX_FIRMWARE_SIZE_MB} MB)"

        return True, "OK"
