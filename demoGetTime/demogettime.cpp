#include "demogettime.h"
#include "ui_demogettime.h"

demoGetTime::demoGetTime(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::demoGetTime)
{
    ui->setupUi(this);

    fTimer = new QTimer(this);
    fTimer->stop();
    fTimer->setInterval(1000);  //设置定时器周期，单位为ms级别
    connect(fTimer,SIGNAL(timeout()),this,SLOT(on_timer_timeout()));
}

demoGetTime::~demoGetTime()
{
    delete ui;
}

void demoGetTime::on_btnGetDateTime_clicked()
{
    //获取当前时间，为三个专用编辑器设置日期时间数据，并转换为字符串
    QDateTime curDateTime =QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDateTime.time());
    ui->lineEditTime->setText(curDateTime.toString("hh:mm:ss"));
    ui->dateEdit->setDate(curDateTime.date());
    ui->lineEditDate->setText(curDateTime.toString("yyyy年MM月dd日"));
    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->lineEditDateTime->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}

void demoGetTime::on_btnSetDateTime_clicked()
{
    //字符串转换为QDateTime
    QString str = ui->lineEditDateTime->text();
    str = str.trimmed();
//    std::string string1=str.toStdString();
//    printf("DateTime=%s",string1);
    if (!str.isEmpty()) {
        QDateTime dateTime = QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss");
        ui->dateTimeEdit->setDateTime(dateTime);
//        QDate date = QDate :: fromString(str,"yyyy-MM-dd");
//        ui->calendarWidget->setSelectedDate(date);
    }

}

void demoGetTime::on_calendarWidget_selectionChanged()
{
    //在日历上选择日期
    QDate dt = ui->calendarWidget->selectedDate();
    QString str = dt.toString("yyyy年M月d日");
    ui->lineEditCalendar->setText(str);

    //同步跟新到DateEdit上
    str = dt.toString("yyyy-MM-dd");
    if (!str.isEmpty()){
        QDate date = QDate::fromString(str,"yyyy-MM-dd");
        ui->dateEdit->setDate(date);
    }
}

void demoGetTime::on_timer_timeout()
{
    //定时器中断响应
    QTime curTime = QTime::currentTime();//获取当前时间
    ui->lcdNumberHour->display(curTime.hour());
    ui->lcdNumberMinute->display(curTime.minute());
    ui->lcdNumberSecond->display(curTime.second());
    int va=ui->progressBar->value();
    va++;
    if(va>100) va=0;
    ui->progressBar->setValue(va);
}

void demoGetTime::on_pushButtonBegin_clicked()
{
    fTimer->start(); //定时器开始工作
    fTimeCounter.start();//计时器开始工作
    ui->pushButtonBegin->setEnabled(false);
    ui->pushButtonStop->setEnabled(true);
    ui->pushButtonSetCycle->setEnabled(false);
}

void demoGetTime::on_pushButtonStop_clicked()
{
    fTimer->stop(); //定时器停止
    int tmMsec=fTimeCounter.elapsed(); //毫秒数
    int ms=tmMsec%1000;
    int sec=tmMsec/1000;
    QString str = QString::asprintf("流失时间:%d 秒, %d 毫秒",sec,ms);
    ui->label_6->setText(str);
    ui->pushButtonBegin->setEnabled(true);
    ui->pushButtonStop->setEnabled(false);
    ui->pushButtonSetCycle->setEnabled(true);
}
