#include "binary_conversion.h"
#include "ui_binary_conversion.h"

Binary_conversion::Binary_conversion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Binary_conversion)
{
    ui->setupUi(this);
}

Binary_conversion::~Binary_conversion()
{
    delete ui;
}

void Binary_conversion::on_pushButton_clicked()
{
    QString str =ui->lineEdit->text();//读取数量
    int num=str.toInt();
    str=ui->lineEdit_2->text();
    float price=str.toFloat();
    float total= (float) num * price;
    //printf("num=%d,price=%f,total=%f",num,price,total);
    str=str.sprintf("%.2f",total);
    ui->lineEdit_3->setText(str);
}

void Binary_conversion::on_btnDec_clicked()
{//读取十进制数，转换为其他进制
    QString str=ui->lineEdit_4->text();
    int val=str.toInt();//缺省为十进制
    // str=QString::number(val, 16);//转换为十六进制的字符串
    str=str.setNum (val, 16); //十六进制
    str=str.toUpper();
    ui->lineEdit_5->setText(str);
    str=str.setNum (val, 2) ; //二进制
    // str=QString::number(val,2);
    ui->lineEdit_6->setText(str);

}
