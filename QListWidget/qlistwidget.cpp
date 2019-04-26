#include "qlistwidget.h"
#include "ui_qlistwidget.h"

QlistWidget::QlistWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QlistWidget)
{
    ui->setupUi(this);
}

QlistWidget::~QlistWidget()
{
    delete ui;
}
