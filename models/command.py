class LsrCommands:

    """Все команды для работы с ЛСР"""

    @staticmethod
    def phy_stop() -> str:
        return "phy stop"

    @staticmethod
    def phy_start() -> str:
        return "phy start"

    @staticmethod
    def poll_lsr_clear() -> str:
        return "lsr poll clear"

    @staticmethod
    def get_lsr_list() -> str:
        return "lsr llv"

    @staticmethod
    def get_bkr_status() -> str:
        return "bkr"

    @staticmethod
    def promiscuous_enable() -> str:
        return "eth promiscuous 1"

    @staticmethod
    def promiscuous_disable() -> str:
        return "eth promiscuous 0"

    @staticmethod
    def get_lsr_ip(lsr_id: str) -> str:
        return f"exe {lsr_id} phy ipaddr"

    @staticmethod
    def get_sys_info(lsr_id: str) -> str:
        return f"exe {lsr_id} sys info"

    @staticmethod
    def disable_watchdog(lsr_id: str) -> str:
        return f"exe {lsr_id} wwdg"

    @staticmethod
    def check_watchdog_status(lsr_id: str) -> str:
        return f"exe {lsr_id} eeprom wwdg"

    @staticmethod
    def get_flash_size(lsr_id: str) -> str:
        return f"exe {lsr_id} flash fsz1"

    @staticmethod
    def erase_flash(lsr_id: str) -> str:
        return f"exe {lsr_id} flash erase1"

    @staticmethod
    def reset_lsr(lsr_id: str) -> str:
        return f"exe {lsr_id} reset"

    @staticmethod
    def set_watchdog_timeout(lsr_id: str, timeout: int = 3600) -> str:
        return f"exe {lsr_id} eeprom iwdg rst {timeout}"

    @staticmethod
    def reset_watchdog_timeout(lsr_id: str) -> str:
        return f"exe {lsr_id} eeprom iwdg rst 0"

    @staticmethod
    def global_reset() -> str:
        return "exe 0xFFFF reset"
