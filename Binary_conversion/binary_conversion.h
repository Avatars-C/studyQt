#ifndef BINARY_CONVERSION_H
#define BINARY_CONVERSION_H

#include <QMainWindow>

namespace Ui {
class Binary_conversion;
}

class Binary_conversion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Binary_conversion(QWidget *parent = nullptr);
    ~Binary_conversion();

private slots:
    void on_pushButton_clicked();

    void on_btnDec_clicked();

private:
    Ui::Binary_conversion *ui;
};

#endif // BINARY_CONVERSION_H
