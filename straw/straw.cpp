#include "straw.h"
#include "ui_straw.h"

straw::straw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::straw)
{
    ui->setupUi(this);
}

straw::~straw()
{
    delete ui;
}

void straw::paintEvent(QPaintEvent *event)
{
    //绘制边框
    QPainter painter(this);
    painter.setPen(QColor(139, 139, 139));
    painter.drawLine(0,0,this->width()-1,0);
    painter.drawLine(0,0,0,this->height()-1);
    painter.drawLine(this->width() - 1, 0, this->width() - 1, this->height() - 1);
    painter.drawLine(0, this->height() - 1, this->width() - 1, this->height() - 1);

}
