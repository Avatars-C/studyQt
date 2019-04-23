#include "color_rgb.h"
#include "ui_color_rgb.h"

color_RGB::color_RGB(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::color_RGB)
{
    ui->setupUi(this);
    this->setLayout(ui->horizontalLayout);

    colorSliderChangeUpdateSpinBox(ui->SliderRed, colorSliderMax, colorSliderMin, colorSliderStep, ui->spinBoxRed);
     colorSliderChangeUpdateSpinBox(ui->SliderGreen, colorSliderMax, colorSliderMin, colorSliderStep, ui->spinBoxGreen);
      colorSliderChangeUpdateSpinBox(ui->SliderBlue, colorSliderMax, colorSliderMin, colorSliderStep, ui->spinBoxBlue);
       colorSliderChangeUpdateSpinBox(ui->SliderAlpha, colorSliderMax, colorSliderMin, colorSliderStep, ui->spinBoxAlpha);

    QObject::connect(ui->SliderRed,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));
    QObject::connect(ui->spinBoxRed,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));
    QObject::connect(ui->SliderGreen,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));
    QObject::connect(ui->spinBoxGreen,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));
    QObject::connect(ui->SliderBlue,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));
    QObject::connect(ui->spinBoxBlue,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));
    QObject::connect(ui->SliderAlpha,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));
    QObject::connect(ui->spinBoxAlpha,SIGNAL(valueChanged(int)),this,SLOT(on_horizontalSlider_valueChanged(int)));

    QObject::connect(ui->SliderRed,SIGNAL(valueChanged(int)),ui->spinBoxRed,SLOT(setValue(int)));
    QObject::connect(ui->spinBoxRed,SIGNAL(valueChanged(int)),ui->SliderRed,SLOT(setValue(int)));
    QObject::connect(ui->SliderGreen,SIGNAL(valueChanged(int)),ui->spinBoxGreen,SLOT(setValue(int)));
    QObject::connect(ui->spinBoxGreen,SIGNAL(valueChanged(int)),ui->SliderGreen,SLOT(setValue(int)));
    QObject::connect(ui->SliderBlue,SIGNAL(valueChanged(int)),ui->spinBoxBlue,SLOT(setValue(int)));
    QObject::connect(ui->spinBoxBlue,SIGNAL(valueChanged(int)),ui->SliderBlue,SLOT(setValue(int)));
    QObject::connect(ui->SliderAlpha,SIGNAL(valueChanged(int)),ui->spinBoxAlpha,SLOT(setValue(int)));
    QObject::connect(ui->spinBoxAlpha,SIGNAL(valueChanged(int)),ui->SliderAlpha,SLOT(setValue(int)));
}

color_RGB::~color_RGB()
{
    delete ui;
}

void color_RGB::on_horizontalSlider_valueChanged(int value)
{
    //拖动Red、Green、Blue颜色滑动条时设置textEdit的底色
    Q_UNUSED(value);
    QColor color;
    int R = ui->SliderRed->value();
    int G = ui->SliderGreen->value();
    int B = ui->SliderBlue->value();
    int alpha = ui->SliderAlpha->value();
    color.setRgb(R,G,B,alpha);   //使用Qcolor的setRGB()函数获取颜色
    printf("R=%d,G=%d,B=%d,alpha=%d",R,G,B,alpha);
    QPalette pal = ui->textEdit->palette();
    pal.setColor(QPalette::Base,color); //设置底色
    ui->textEdit->setPalette(pal);

}

/**
 * @brief color_RGB::colorSliderChangeUpdateSpinBox
 * @param pQSlider
 * @param pmax
 * @param pmin
 * @param pstep
 * @param pQSpinBox
 * */
void color_RGB::colorSliderChangeUpdateSpinBox(QSlider *pQSlider, int pmax, int pmin, int pstep, QSpinBox *pQSpinBox)
{
    pQSpinBox->setMaximum(pmax);
    pQSpinBox->setMinimum(pmin);
    pQSpinBox->setSingleStep(pstep);

    pQSlider->setMaximum(pmax);
    pQSlider->setMinimum(pmin);
    pQSlider->setSingleStep(pstep);

    pQSpinBox->setValue(10);
}
