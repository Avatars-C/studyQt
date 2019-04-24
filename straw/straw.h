#ifndef STRAW_H
#define STRAW_H

#include <QMainWindow>
#include "QPainter"
namespace Ui {
class straw;
}

class straw : public QMainWindow
{
    Q_OBJECT

public:
    explicit straw(QWidget *parent = nullptr);
    ~straw();

private:
    Ui::straw *ui;

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // STRAW_H
