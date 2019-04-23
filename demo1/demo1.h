#ifndef DEMO1_H
#define DEMO1_H

#include <QMainWindow>

namespace Ui {
class demo1;
}

class demo1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit demo1(QWidget *parent = nullptr);
    ~demo1();

private:
    Ui::demo1 *ui;
};

#endif // DEMO1_H
