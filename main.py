import logging
import asyncio
import sys
import argparse
from pathlib import Path

from services.udp_service import UpdService
from services.bkr_connector import BkrConnector
from services.firmware_updater import FirmwareUpdaterService
from models.lsr_info import LsrInfo

logging.basicConfig(
    level=logging.INFO,
    format='[%(asctime)s] %(levelname)s - %(message)s',
    handlers=[
        logging.FileHandler('lsr_updater.log'),
        logging.StreamHandler(sys.stdout)
    ]
)

logger = logging.getLogger(__name__)


async def main_interactive():
    print("=" * 60)
    print("🚀 ЛСР FIRMWARE UPDATER")
    print("=" * 60)

    bkr_ip = "10.0.1.89"
    bkr_port = 3456

    try:
        print("\n📡 ПОДКЛЮЧЕНИЕ К БКР...")
        print(f"IP: {bkr_ip}, Port: {bkr_port}\n")

        connector = BkrConnector(bkr_ip, bkr_port)

        def on_log_message(message):
            print(f"[БКР] {message}")

        connector.set_log_callback(on_log_message)

        lsr_list = await connector.connect_and_get_lsr_list()

        if not lsr_list:
            print("❌ Не удалось получить список ЛСР")
            return False

        print("\n📋 СПИСОК НАЙДЕННЫХ ЛСР:\n")
        for i, lsr in enumerate(lsr_list, 1):
            print(f"{i}. {lsr}")

        print("\n🔍 ВЫБОР ЛСР ДЛЯ ОБНОВЛЕНИЯ:")
        print("Введи номер ЛСР (или 'all' для всех):")

        user_input = input("> ").strip()

        selected_lsrs = []

        if user_input.lower() == "all":
            selected_lsrs = lsr_list
        else:
            try:
                index = int(user_input) - 1

                if 0 <= index < len(lsr_list):
                    selected_lsrs = [lsr_list[index]]
                else:
                    print("❌ Неправильный номер!")
                    return False
            except ValueError:
                print("❌ Введи число или 'all'!")
                return False

        print("\n📦 ВЫБОР ФАЙЛА ПРОШИВКИ:")
        firmware_path = input("Введи путь к файлу прошивки: ").strip()

        if not Path(firmware_path).exists():
            print(f"❌ Файл не найден: {firmware_path}")
            return False

        print(f"\n⚠️  ВНИМАНИЕ!")
        print(f"Будет обновлено {len(selected_lsrs)} ЛСР")
        print("Процесс может занять несколько минут...")
        print("\nПродолжить? (yes/no)")

        confirm = input("> ").strip().lower()

        if confirm not in ("yes", "y"):
            print("❌ Отменено пользователем")
            return False

        return await perform_update(selected_lsrs, firmware_path, bkr_ip, bkr_port)

    except KeyboardInterrupt:
        print("\n❌ Программа прервана пользователем")
        return False

    except Exception as e:
        print(f"\n❌ КРИТИЧЕСКАЯ ОШИБКА: {e}")
        logger.exception("Полная информация об ошибке:")
        return False


async def main_cli(args):
    print("=" * 60)
    print("🚀 ЛСР FIRMWARE UPDATER (CLI MODE)")
    print("=" * 60)

    if not Path(args.firmware).exists():
        print(f"❌ Ошибка: Файл не найден: {args.firmware}")
        return False

    bkr_ip = args.bkr_ip
    bkr_port = int(args.bkr_port)
    lsr_ip = args.lsr_ip

    print(f"\n📡 БКР: {bkr_ip}:{bkr_port}")
    print(f"📌 ЛСР: {lsr_ip}")
    print(f"📦 Прошивка: {args.firmware}\n")

    try:
        lsr = LsrInfo(
            id=args.lsr_id or f"LSR_{lsr_ip.split('.')[-1]}",
            ip_address=lsr_ip,
            firmware_version="unknown"
        )

        selected_lsrs = [lsr]
        return await perform_update(selected_lsrs, args.firmware, bkr_ip, bkr_port)

    except Exception as e:
        print(f"\n❌ КРИТИЧЕСКАЯ ОШИБКА: {e}")
        logger.exception("Полная информация об ошибке:")
        return False


async def perform_update(lsr_list, firmware_path, bkr_ip, bkr_port):
    updater = FirmwareUpdaterService(bkr_ip, bkr_port)

    def on_update_log(message):
        print(f"[УП] {message}")

    updater.set_log_callback(on_update_log)

    success_count = 0
    fail_count = 0

    for i, lsr in enumerate(lsr_list, 1):
        print(f"\n{'═' * 60}")
        print(f"[{i}/{len(lsr_list)}] Обновление {lsr.id}...")
        print(f"{'═' * 60}\n")

        success = await updater.update_lsr_async(lsr, firmware_path)

        if success:
            success_count += 1
        else:
            fail_count += 1

        if i < len(lsr_list):
            await asyncio.sleep(2)

    print(f"\n{'═' * 60}")
    print("📊 ИТОГИ ОБНОВЛЕНИЯ")
    print(f"{'═' * 60}")
    print(f"✅ Успешно:       {success_count}")
    print(f"❌ Ошибок:        {fail_count}")
    print(f"📋 Всего:         {len(lsr_list)}")
    print(f"{'═' * 60}\n")

    if fail_count == 0:
        print("🎉 ВСЕ ЛСР УСПЕШНО ОБНОВЛЕНЫ!")
        return True
    else:
        print("⚠️  ЧАСТЬ ЛСР НЕ ОБНОВЛЕНЫ - ПРОВЕРЬ ЛОГИ")
        return False


def parse_arguments():
    parser = argparse.ArgumentParser(
        description="LSR Firmware Updater - интерактивное и CLI управление",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Примеры использования:

  1. Интерактивный режим:
     python main.py

  2. CLI режим (для скриптов):
     python main.py --lsr-ip 10.1.10.1 --firmware firmware/lsr.bin

  3. С дополнительными параметрами:
     python main.py --lsr-ip 10.1.10.1 --firmware firmware/lsr.bin \\
                    --bkr-ip 10.0.1.89 --bkr-port 3456 --lsr-id LSR_001
        """
    )

    parser.add_argument(
        "--lsr-ip",
        help="IP адрес ЛСР (включит CLI режим)"
    )
    parser.add_argument(
        "--firmware",
        help="Путь к файлу прошивки"
    )
    parser.add_argument(
        "--bkr-ip",
        default="10.0.1.89",
        help="IP адрес БКР (по умолчанию 10.0.1.89)"
    )
    parser.add_argument(
        "--bkr-port",
        default="3456",
        help="Порт БКР (по умолчанию 3456)"
    )
    parser.add_argument(
        "--lsr-id",
        help="ID ЛСР (опционально)"
    )

    return parser.parse_args()


async def main():
    args = parse_arguments()

    if args.lsr_ip and args.firmware:
        success = await main_cli(args)
    else:
        success = await main_interactive()

    sys.exit(0 if success else 1)


if __name__ == "__main__":
    try:
        asyncio.run(main())
    except KeyboardInterrupt:
        print("\n\nПрограмма завершена.")
        sys.exit(1)
    except Exception as e:
        print(f"Ошибка: {e}")
        sys.exit(1)
