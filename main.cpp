#include "TCP_Serial.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TCP_Serial w;
    w.show();
    return a.exec();
}
