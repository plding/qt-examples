#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QCoreApplication::setOrganizationName("QtExample");
    QCoreApplication::setApplicationName("Application Example");

    MainWindow mainWin;
    mainWin.show();

    return app.exec();
}
