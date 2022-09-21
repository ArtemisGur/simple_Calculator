#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.answer = new QString();
    w.setButtonSetting();
    w.setStringAnswer();
    w.show();
    return a.exec();
}
