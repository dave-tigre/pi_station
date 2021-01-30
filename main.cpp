#include "pistation.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PIStation piMainWindow;
    piMainWindow.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    int monitorWidth = 2560*0.13;
    int monitorHeight = 1440*0.14;
    piMainWindow.setFixedSize(monitorWidth,monitorHeight);
    piMainWindow.show();
    return a.exec();
}
