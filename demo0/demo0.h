#ifndef DEMO0_H
#define DEMO0_H

#include <QMainWindow>

namespace Ui {
class demo0;
}

class demo0 : public QMainWindow
{
    Q_OBJECT

public:
    explicit demo0(QWidget *parent = nullptr);
    ~demo0();

private slots:
    void on_checkBox_1_clicked(bool checked);

    void on_checkBox_2_clicked(bool checked);

    void on_checkBox_3_clicked(bool checked);

    void setTextFontColor();
private:
    Ui::demo0 *ui;
};

#endif // DEMO0_H
