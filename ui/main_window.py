import os
from PyQt6 import QtWidgets, QtCore

class MainWindow(QtWidgets.QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("LSR Updater")
        self.resize(900, 700)

        central = QtWidgets.QWidget(self)
        self.setCentralWidget(central)

        main_layout = QtWidgets.QBoxLayout(central)

        #блок параметров БКР
        bkr_group = QtWidgets.QGroupBox("[Подключение к БКР]")
        bkr_layout = QtWidgets.QGridLayout(bkr_group)

        self.ed_bkr_ip = QtWidgets.QLineEdit("10.0.1.89")
        self.ed_bkr_port = QtWidgets.QLineEdit("3456")

        bkr_layout.addWidget(QtWidgets.QLabel("[IP БКР]:"), 0, 0)
        bkr_layout.addWidget(self.ed_bkr_ip, 0, 1)
        bkr_layout.addWidget(QtWidgets.QLabel("[Порт БКР]:"), 1, 0)
        bkr_layout.addWidget(self.ed_bkr_port, 1, 1)

        #блок параметров ЛСР
        lsr_group = QtWidgets.QGroupBox("[Параметры ЛСР]")
        lsr_layout = QtWidgets.QGridLayout(lsr_group)

        self.ed_lsr_id = QtWidgets.QLineEdit()
        self.ed_lsr_ip = QtWidgets.QLineEdit()

        lsr_layout.addWidget(QtWidgets.QLabel("[ID ЛСР]:"), 0, 0)
        lsr_layout.addWidget(self.ed_lsr_id, 0, 1)
        lsr_layout.addWidget(QtWidgets.QLabel("[IP ЛСР]:"), 1, 0)
        lsr_layout.addWidget(self.ed_lsr_ip, 1, 1)

        #блок прошивки
        fw_group = QtWidgets.QGroupBox("[Прошивка]")
        fw_layout = QtWidgets.QHBoxLayout(fw_group)

        self.ed_firmware = QtWidgets.QLineEdit()
        self.btn_browse = QtWidgets.QPushButton("[📂 Выбрать]")
        fw_layout.addWidget(QtWidgets.QLabel("[Файл прошивки]:"))
        fw_layout.addWidget(self.ed_firmware)
        fw_layout.addWidget(self.btn_browse)

        #кнопки управления
        buttons_layout = QtWidgets.QHBoxLayout()
        buttons_layout.addStretch(1)

        self.btn_start = QtWidgets.QPushButton("[▶️ НАЧАТЬ ОБНОВЛЕНИЕ]")
        self.btn_start.setEnabled(False)  # пока логика не привязана
        buttons_layout.addWidget(self.btn_start)

        #логи
        log_group = QtWidgets.QGroupBox("[translate:Логи]")
        log_layout = QtWidgets.QVBoxLayout(log_group)

        self.txt_log = QtWidgets.QPlainTextEdit()
        self.txt_log.setReadOnly(True)
        self.txt_log.setLineWrapMode(QtWidgets.QPlainTextEdit.LineWrapMode.NoWrap)

        log_layout.addWidget(self.txt_log)

        main_layout.addWidget(bkr_group)
        main_layout.addWidget(lsr_group)
        main_layout.addWidget(fw_group)
        main_layout.addLayout(buttons_layout)
        main_layout.addWidget(log_group, 1)

        self.btn_browse.clicked.connect(self.on_browse_clicked)

        #слоты
    def on_browse_clicked(self):
        """выбор файла прошивки"""
        dlg = QtWidgets.QFileDialog(self)
        dlg.setWindowTitle("[Выбор файла прошивки]")
        dlg.setFileMode(QtWidgets.QFileDialog.FileMode.ExistingFile)
        dlg.setNameFilter("[Файлы прошивки (*.bin)]")

        if dlg.exec():
            files = dlg.selectedFiles()
            if files:
                path = files[0]
                self.ed_firmware.setText(path)
                self.log(f"[Выбран файл]: {path}")

    def log(self, message: str):
        """добавить строку в логовое окно."""
        self.txt_log.appendPlainText(message)
        # автоскролл вниз
        cursor = self.txt_log.textCursor()
        cursor.movePosition(QtGui.QTextCursor.MoveOperation.End)
        self.txt_log.setTextCursor(cursor)
