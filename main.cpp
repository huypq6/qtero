#include "main.h"
#include "mainwindow.h"
#include "rs_debug.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    RS_DEBUG->setLevel(RS_Debug::D_DEBUGGING);

    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("Sokulabs");
    QCoreApplication::setApplicationName("Qtero");
    QCoreApplication::setApplicationVersion(XSTR(QTERO_VERSION));

    MainWindow *w = new MainWindow();
    w->show();

    QObject::connect(&a, &QApplication::lastWindowClosed, &a, &QApplication::quit);//fix bug: not quit when close main window
    return a.exec();
}
