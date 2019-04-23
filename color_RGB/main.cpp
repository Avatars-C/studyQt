#include "color_rgb.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    color_RGB w;
    w.show();

    return a.exec();
}
