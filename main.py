#!/usr/bin/env python3


import logging
import asyncio
import sys

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

async def main():

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
            return

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
                    return
            except ValueError:
                print("❌ Введи число или 'all'!")
                return

        print("\n📦 ВЫБОР ФАЙЛА ПРОШИВКИ:")
        firmware_path = input("Введи путь к файлу прошивки: ").strip()


        print(f"\n⚠️  ВНИМАНИЕ!")
        print(f"Будет обновлено {len(selected_lsrs)} ЛСР")
        print("Процесс может занять несколько минут...")
        print("\nПродолжить? (yes/no)")

        confirm = input("> ").strip().lower()

        if confirm not in ("yes", "y"):
            print("❌ Отменено пользователем")
            return

        updater = FirmwareUpdaterService(bkr_ip, bkr_port)

        def on_update_log(message):
            print(f"[УП]  {message}")

        updater.set_log_callback(on_update_log)

        success_count = 0
        fail_count = 0

        for i, lsr in enumerate(selected_lsrs, 1):
            print(f"\n{'═' * 60}")
            print(f"[{i}/{len(selected_lsrs)}] Обновление {lsr.id}...")
            print(f"{'═' * 60}\n")

            success = await updater.update_lsr_async(lsr, firmware_path)

            if success:
                success_count += 1
            else:
                fail_count += 1

            if i < len(selected_lsrs):
                await asyncio.sleep(2)

        print(f"\n{'═' * 60}")
        print("📊 ИТОГИ ОБНОВЛЕНИЯ")
        print(f"{'═' * 60}")
        print(f"✅ Успешно:       {success_count}")
        print(f"❌ Ошибок:        {fail_count}")
        print(f"📋 Всего:         {len(selected_lsrs)}")
        print(f"{'═' * 60}\n")

        if fail_count == 0:
            print("🎉 ВСЕ ЛСР УСПЕШНО ОБНОВЛЕНЫ!")
        else:
            print("⚠️  ЧАСТЬ ЛСР НЕ ОБНОВЛЕНЫ - ПРОВЕРЬ ЛОГИ")

    except KeyboardInterrupt:
        # ↑ Пользователь нажал Ctrl+C
        print("\n❌ Программа прервана пользователем")

    except Exception as e:
        print(f"\n❌ КРИТИЧЕСКАЯ ОШИБКА: {e}")
        logger.exception("Полная информация об ошибке:")


if __name__ == "__main__":

    try:
        asyncio.run(main())

    except KeyboardInterrupt:
        print("\n\nПрограмма завершена.")
    except Exception as e:
        print(f"Ошибка: {e}")
        sys.exit(1)
