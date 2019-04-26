#ifndef QCOMBOBOX_AND_QPLAINTEXTEDIT_H
#define QCOMBOBOX_AND_QPLAINTEXTEDIT_H

#include <QMainWindow>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <QTextBlock>
namespace Ui {
class QComboBox_And_QPlainTextEdit;
}

class QComboBox_And_QPlainTextEdit : public QMainWindow
{
    Q_OBJECT

public:
    explicit QComboBox_And_QPlainTextEdit(QWidget *parent = nullptr);
    ~QComboBox_And_QPlainTextEdit();

private slots:
    void on_btnInitItem_clicked();

    void on_btnInit2_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(const QString &arg1);

    void on_btnToComboBox_clicked();

    void on_plainTextEdit_customContextMenuRequested(const QPoint &pos);

private:
    Ui::QComboBox_And_QPlainTextEdit *ui;
};

#endif // QCOMBOBOX_AND_QPLAINTEXTEDIT_H
