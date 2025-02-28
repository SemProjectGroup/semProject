#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
//Just testing the commit
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
