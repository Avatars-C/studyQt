#include "demo0.h"
#include "ui_demo0.h"

demo0::demo0(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::demo0)
{
    ui->setupUi(this);
    connect(ui->radioButton_1,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(ui->radioButton_2,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(ui->radioButton_3,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    QObject::connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(show()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(repaint()));
    QObject::connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
}

demo0::~demo0()
{
    delete ui;
}

void demo0::on_checkBox_1_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}

void demo0::on_checkBox_2_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}

void demo0::on_checkBox_3_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}
void demo0::setTextFontColor(){
    QPalette plet = ui->plainTextEdit->palette();

    if(ui->radioButton_1->isChecked())
        plet.setColor(QPalette::Text,Qt::black);
    else if(ui->radioButton_2->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    else if(ui->radioButton_3->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);
    else
        plet.setColor(QPalette::Text,Qt::black);

    ui->plainTextEdit->setPalette(plet);

}
