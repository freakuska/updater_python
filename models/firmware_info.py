from dataclasses import dataclass
from datetime import datetime
import os
import hashlib

@dataclass
class FirmwareInfo:
    """Модель данных о файле прошивки"""
    file_path: str
    file_name: str = ""
    file_size: int = 0
    versions: str = ""
    created_date: datetime = None
    modified_date: datetime = None
    md5_hash: str = ""
    is_valid: bool = False

    def __post_init__(self):
        """Инициализация после создания объекта"""
        if self.file_path:
            self.file_name = os.path.basename(self.file_path)
            self.version = self._extract_version_from_filename()

            try:
                # Проверяем существует ли файл
                if os.path.exists(self.file_path):
                    stat = os.stat(self.file_path)

                    self.file_size = stat.st_size

                    self.created_date = datetime.fromtimestamp(stat.st_ctime)

                    self.modified_date = datetime.fromtimestamp(stat.st_mtime)

                    self.is_valid = self.file_size > 0

                    self.md5_hash = self._calculate_md5()
            except Exception as e:
                print(f"❌ Ошибка при загрузке информации о файле: {e}")
                self.is_valid = False

    def _extract_version_from_filename(self) -> str:
        """Парсинг версии из имени файла"""
        try:
            name = os.path.splitext(self.file_name)[0]
            parts = name.split('-')

            if len(parts) >= 2 and len(parts[1]) >= 8:
                date_str = parts[1][:8]
                return f"{date_str[0:4]} - {date_str[4:6]} - {date_str[6:8]}"
        except:
            pass
        return ""

    def _calculate_md5(self) -> str:
        """Вычисление MD5 хеша файла"""
        md5 = hashlib.md5()

        try:
            with open(self.file_path, 'rb') as f:

                for chunk in iter(lambda: f.read(4096), b''):
                    md5.update(chunk)
            return md5.hexdigest()
        except:
            return ""

    def get_size_in_mb(self) -> float:
        """Получить размер в мегабайтах"""
        return self.file_size / (1024 * 1024)

    def __str__(self):
        """Текстовое представление"""
        return f"{self.file_name} ({self.get_size_in_mb():.2f} MB) - Version: {self.version}"

    def validate(self) -> tuple:
        """Проверить что файл прошивки валидный"""
        if not self.is_valid:
            return False, "Файл не существует или пуст"

        if self.file_size < 1024:
            return False, "Файл слишком маленький (<1 KB)"

        if self.file_size > 1024 * 1024 * 10:
            return False, "Файл слишком большой (>10 MB)"

        if not self.md5_hash:
            return False, "Не удалось вычислить MD5"

        return True, "OK"
