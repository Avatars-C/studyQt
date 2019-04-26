#ifndef QLISTWIDGET_H
#define QLISTWIDGET_H

#include <QMainWindow>

namespace Ui {
class QlistWidget;
}

class QlistWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit QlistWidget(QWidget *parent = nullptr);
    ~QlistWidget();

private:
    Ui::QlistWidget *ui;
};

#endif // QLISTWIDGET_H
