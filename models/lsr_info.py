from dataclasses import dataclass

@dataclass
class LsrInfo:
    """Модель данных об одном ЛСР"""
    id: str = ""
    ip_address: str = ""
    firmware_version: str = ""
    status: str = "Неизвестно"
    is_selected: bool = False

    def __str__(self):
        return f"ЛСР {self.id}, ({self.ip_address}): {self.firmware_version} - {self.status}"

    def to_dict(self):
        """Преобразовать в словарь"""
        return {
            'id': self.id,
            'ip': self.ip_address,
            'version': self.firmware_version,
            'status': self.status,
            'selected': self.is_selected
        }
