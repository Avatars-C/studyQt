#ifndef COLOR_RGB_H
#define COLOR_RGB_H
#include <QMainWindow>
#include "QSlider"
#include "QSpinBox"
#define colorSliderMin 0
#define colorSliderMax 255
#define colorSliderStep 5

namespace Ui {
class color_RGB;
}

class color_RGB : public QMainWindow
{
    Q_OBJECT

public:
    explicit color_RGB(QWidget *parent = nullptr);
    ~color_RGB();

private slots:
    void on_horizontalSlider_valueChanged(int value);
    void colorSliderChangeUpdateSpinBox(QSlider *,int,int,int,QSpinBox *);
    void mySliderAndSpinBoxChangeColorConnect(void);
private:
    Ui::color_RGB *ui;
};

#endif // COLOR_RGB_H
