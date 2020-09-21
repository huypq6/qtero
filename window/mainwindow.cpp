#include "mainwindow.h"
#include "rs_debug.h"

#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{

    _initWindow();
}

void MainWindow::_initWindow() {
    RS_DEBUG->print("MainWindow::_initWindow()");
    this->_createStatusBar();
}

void MainWindow::_createStatusBar() {
    statusBar()->showMessage(tr("Ready"));
}
