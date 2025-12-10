import logging
from services.udp_service import UpdService

logger = logging.getLogger(__name__)

class LsrExecutor:
    """Класс для выполнения команд конкретного ЛСР"""

    def __init__(self, udp_service: UpdService):
        self.udp = udp_service

    def get_ip(self, lsr_id: str) -> str:
        """получение ip-адреса ЛСР"""
        command = f"exe {lsr_id} phy ipaddr"

        return self.udp.send_command(command)

    def check_wwdg(self, lsr_id: str) -> str:

        command = f"exe {lsr_id} wwdg"

        return self.udp.send_command(command)

    def restore_wwdg(self, lsr_id: str) -> str:
        command = f"exe {lsr_id} eeprom wwdg"

        return self.udp.send_command(command)

    def reset(self, lsr_id: str) -> str:
        command = f"exe {lsr_id} reset"

        return self.udp.send_command(command)

    def erase_flash(self, lsr_id: str) -> str:
        command = f"exe {lsr_id} flash fsz1"

        return self.udp.send_command(command)

    def get_system_info(self, lsr_id: str) -> str:
        command = f"exe {lsr_id} sys info"

        return self.udp.send_command(command)

    def restore_iwdg(self, lsr_id: str) -> str:

        command = f"exe {lsr_id} eeprom iwdg rst 0"
        # Формируем: "exe 2561 eeprom iwdg rst 0"

        return self.udp.send_command(command)
