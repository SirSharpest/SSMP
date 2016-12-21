#!/usr/bin/python3

import sys
from PyQt4 import uic
from PyQt4.QtCore import *
from PyQt4.QtGui import *


gui_file = 'GUI/player.ui'

Ui_MainWindow, QtBaseClass = uic.loadUiType(gui_file)


class SSMP_GUI(QMainWindow, Ui_MainWindow):

    def __init__(self):
        QMainWindow.__init__(self)
        Ui_MainWindow.__init__(self)
        self.setupUi(self)
        self.show()

    def show_dialog(self, message):
        msg = QMessageBox()
        msg.setIcon(QMessageBox.Information)
        msg.setText(message)
        msg.setWindowTitle("Error")
        msg.setStandardButtons(QMessageBox.Ok)
        retval = msg.exec_()


if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = SSMP_GUI()
    sys.exit(app.exec_())
