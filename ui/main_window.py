
import tkinter as tk
from tkinter import ttk, filedialog, messagebox
import asyncio
import threading
from pathlib import Path

from services.bkr_connector import BkrConnector
from services.firmware_updater import FirmwareUpdaterService
from models.firmware_info import FirmwareInfo


class MainWindow:
    def __init__(self, root):
        self.root = root
        self.root.title("LSR Firmware Updater 🚀")
        self.root.geometry("900x700")
        self.root.resizable(True, True)

        self.bkr_ip = tk.StringVar(value="10.0.1.89")
        self.bkr_port = tk.StringVar(value="3456")
        self.firmware_path = tk.StringVar(value="")
        self.selected_lsr = None
        self.lsr_list = []

        self._create_widgets()

    def _create_widgets(self):

        # === ВЕРХНЯЯ ПАНЕЛЬ: Подключение ===
        frame_connect = ttk.LabelFrame(self.root, text="📡 Подключение к БКР", padding=10)
        frame_connect.pack(fill="x", padx=10, pady=5)

        ttk.Label(frame_connect, text="IP БКР:").grid(row=0, column=0, sticky="w")
        ttk.Entry(frame_connect, textvariable=self.bkr_ip, width=15).grid(row=0, column=1, sticky="ew", padx=5)

        ttk.Label(frame_connect, text="Порт:").grid(row=0, column=2, sticky="w")
        ttk.Entry(frame_connect, textvariable=self.bkr_port, width=10).grid(row=0, column=3, sticky="ew", padx=5)

        ttk.Button(frame_connect, text="🔗 Подключиться", command=self._connect_bkr).grid(row=0, column=4, padx=5)

        frame_connect.columnconfigure(1, weight=1)

        frame_lsr = ttk.LabelFrame(self.root, text="📋 Список ЛСР", padding=10)
        frame_lsr.pack(fill="both", expand=True, padx=10, pady=5)

        # Scrollbar
        scrollbar = ttk.Scrollbar(frame_lsr)
        scrollbar.pack(side="right", fill="y")

        # Listbox
        self.lsr_listbox = tk.Listbox(frame_lsr, yscrollcommand=scrollbar.set, height=10)
        self.lsr_listbox.pack(fill="both", expand=True)
        scrollbar.config(command=self.lsr_listbox.yview)

        # === НИЖНЯЯ ПАНЕЛЬ: Загрузка прошивки ===
        frame_firmware = ttk.LabelFrame(self.root, text="📦 Выбор прошивки", padding=10)
        frame_firmware.pack(fill="x", padx=10, pady=5)

        ttk.Label(frame_firmware, text="Файл:").pack(side="left")
        ttk.Entry(frame_firmware, textvariable=self.firmware_path, state="readonly", width=50).pack(side="left", padx=5, fill="x", expand=True)
        ttk.Button(frame_firmware, text="📂 Выбрать", command=self._select_firmware).pack(side="left", padx=5)

        # === КНОПКА ОБНОВЛЕНИЯ ===
        ttk.Button(self.root, text="🚀 НАЧАТЬ ОБНОВЛЕНИЕ", command=self._start_update).pack(padx=10, pady=10, fill="x")

        # === ЛОГИ ===
        frame_logs = ttk.LabelFrame(self.root, text="📝 Логи", padding=10)
        frame_logs.pack(fill="both", expand=True, padx=10, pady=5)

        scrollbar_logs = ttk.Scrollbar(frame_logs)
        scrollbar_logs.pack(side="right", fill="y")

        self.log_text = tk.Text(frame_logs, height=10, yscrollcommand=scrollbar_logs.set)
        self.log_text.pack(fill="both", expand=True)
        scrollbar_logs.config(command=self.log_text.yview)

        self._log("✅ Приложение запущено!")

    def _log(self, message):
        """Добавить сообщение в логи"""
        self.log_text.insert("end", message + "\n")
        self.log_text.see("end")
        self.root.update()

    def _connect_bkr(self):
        """Подключиться к БКР"""
        self._log("🔗 Подключаюсь к БКР...")

        def connect_thread():
            try:
                ip = self.bkr_ip.get()
                port = int(self.bkr_port.get())

                connector = BkrConnector(ip, port)
                self.lsr_list = asyncio.run(connector.connect_and_get_lsr_list())

                # Обновить список
                self.lsr_listbox.delete(0, "end")
                for i, lsr in enumerate(self.lsr_list):
                    self.lsr_listbox.insert("end", f"{i+1}. {lsr.id} ({lsr.ip_address}) v{lsr.firmware_version}")

                self._log(f"✅ Подключено! Найдено {len(self.lsr_list)} ЛСР")

                # Выбрать первый ЛСР автоматически
                if self.lsr_list:
                    self.lsr_listbox.select_set(0)
                    self.selected_lsr = self.lsr_list[0]

            except Exception as e:
                self._log(f"❌ Ошибка подключения: {str(e)}")
                messagebox.showerror("Ошибка", f"Не удалось подключиться: {str(e)}")

        thread = threading.Thread(target=connect_thread, daemon=True)
        thread.start()

    def _select_firmware(self):
        """Выбрать файл прошивки"""
        filepath = filedialog.askopenfilename(
            title="Выберите файл прошивки",
            filetypes=[("Binary files", "*.bin"), ("All files", "*.*")]
        )

        if filepath:
            self.firmware_path.set(filepath)

            # Проверить файл
            try:
                firmware = FirmwareInfo(filepath)
                is_valid, msg = firmware.validate()

                if is_valid:
                    self._log(f"✅ Файл прошивки OK: {Path(filepath).name} ({firmware.file_size} байт)")
                else:
                    self._log(f"❌ Ошибка файла: {msg}")
                    messagebox.showerror("Ошибка", msg)
            except Exception as e:
                self._log(f"❌ Ошибка проверки: {str(e)}")

    def _start_update(self):
        """Начать обновление"""

        # Проверки
        if not self.firmware_path.get():
            messagebox.showwarning("Предупреждение", "Выберите файл прошивки!")
            return

        if not self.lsr_list:
            messagebox.showwarning("Предупреждение", "Сначала подключитесь к БКР!")
            return

        # Выбрать ЛСР из листбокса
        selection = self.lsr_listbox.curselection()
        if not selection:
            messagebox.showwarning("Предупреждение", "Выберите ЛСР для обновления!")
            return

        selected_lsr = self.lsr_list[selection[0]]

        # Подтверждение
        result = messagebox.askyesno(
            "Подтверждение",
            f"Обновить прошивку ЛСР {selected_lsr.id}?\n"
            f"IP: {selected_lsr.ip_address}\n"
            f"Текущая версия: v{selected_lsr.firmware_version}"
        )

        if not result:
            return

        self._log(f"🚀 Начинаю обновление {selected_lsr.id}...")

        def update_thread():
            try:
                ip = self.bkr_ip.get()
                port = int(self.bkr_port.get())
                firmware_path = self.firmware_path.get()

                updater = FirmwareUpdaterService(ip, port)

                # Добавить callback для логов
                updater.set_log_callback(self._log)

                success = asyncio.run(updater.update_lsr_async(selected_lsr, firmware_path))

                if success:
                    self._log("✅ Обновление завершено успешно!")
                    messagebox.showinfo("Успех", f"ЛСР {selected_lsr.id} обновлен успешно!")
                else:
                    self._log("❌ Обновление не удалось")
                    messagebox.showerror("Ошибка", "Обновление не удалось")

            except Exception as e:
                self._log(f"❌ Ошибка обновления: {str(e)}")
                messagebox.showerror("Ошибка", f"Ошибка обновления: {str(e)}")

        thread = threading.Thread(target=update_thread, daemon=True)
        thread.start()
