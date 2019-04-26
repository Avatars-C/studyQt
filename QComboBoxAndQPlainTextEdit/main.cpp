#include "qcombobox_and_qplaintextedit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QComboBox_And_QPlainTextEdit w;
    w.show();

    return a.exec();
}
