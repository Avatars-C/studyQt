#ifndef DEMOGETTIME_H
#define DEMOGETTIME_H

#include <QMainWindow>
#include "QCalendarWidget"
#include "QTime"
#include "QTimer"
namespace Ui {
class demoGetTime;
}

class demoGetTime : public QMainWindow
{
    Q_OBJECT

public:
    explicit demoGetTime(QWidget *parent = nullptr);
    ~demoGetTime();

private slots:
    void on_btnGetDateTime_clicked();

    void on_btnSetDateTime_clicked();

    void on_calendarWidget_selectionChanged();

    void on_timer_timeout();

    void on_pushButtonBegin_clicked();

    void on_pushButtonStop_clicked();

private:
    Ui::demoGetTime *ui;
    QTimer *fTimer;
    QTime fTimeCounter;
};

#endif // DEMOGETTIME_H
