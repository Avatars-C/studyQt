#include "straw.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    straw w;
    w.show();

    return a.exec();
}
