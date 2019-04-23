/********************************************************************************
** Form generated from reading UI file 'color_rgb.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOR_RGB_H
#define UI_COLOR_RGB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_color_RGB
{
public:
    QWidget *centralWidget;
    QLabel *label_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSlider *SliderGreen;
    QSlider *SliderBlue;
    QLabel *label_3;
    QSlider *SliderAlpha;
    QLabel *label_4;
    QLabel *label;
    QSlider *SliderRed;
    QSpinBox *spinBoxRed;
    QSpinBox *spinBoxGreen;
    QSpinBox *spinBoxBlue;
    QSpinBox *spinBoxAlpha;
    QTextEdit *textEdit;
    QDial *dial;
    QProgressBar *progressBar;
    QScrollBar *horizontalScrollBar;
    QLCDNumber *lcdNumber;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSlider *SliderLevel;
    QLabel *label_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *color_RGB)
    {
        if (color_RGB->objectName().isEmpty())
            color_RGB->setObjectName(QString::fromUtf8("color_RGB"));
        color_RGB->resize(599, 453);
        centralWidget = new QWidget(color_RGB);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 111, 16));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 421, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        SliderGreen = new QSlider(horizontalLayoutWidget);
        SliderGreen->setObjectName(QString::fromUtf8("SliderGreen"));
        SliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderGreen, 1, 2, 1, 1);

        SliderBlue = new QSlider(horizontalLayoutWidget);
        SliderBlue->setObjectName(QString::fromUtf8("SliderBlue"));
        SliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderBlue, 2, 2, 1, 1);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        SliderAlpha = new QSlider(horizontalLayoutWidget);
        SliderAlpha->setObjectName(QString::fromUtf8("SliderAlpha"));
        SliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderAlpha, 3, 2, 1, 1);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        SliderRed = new QSlider(horizontalLayoutWidget);
        SliderRed->setObjectName(QString::fromUtf8("SliderRed"));
        SliderRed->setMaximum(255);
        SliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderRed, 0, 2, 1, 1);

        spinBoxRed = new QSpinBox(horizontalLayoutWidget);
        spinBoxRed->setObjectName(QString::fromUtf8("spinBoxRed"));

        gridLayout->addWidget(spinBoxRed, 0, 3, 1, 1);

        spinBoxGreen = new QSpinBox(horizontalLayoutWidget);
        spinBoxGreen->setObjectName(QString::fromUtf8("spinBoxGreen"));

        gridLayout->addWidget(spinBoxGreen, 1, 3, 1, 1);

        spinBoxBlue = new QSpinBox(horizontalLayoutWidget);
        spinBoxBlue->setObjectName(QString::fromUtf8("spinBoxBlue"));

        gridLayout->addWidget(spinBoxBlue, 2, 3, 1, 1);

        spinBoxAlpha = new QSpinBox(horizontalLayoutWidget);
        spinBoxAlpha->setObjectName(QString::fromUtf8("spinBoxAlpha"));

        gridLayout->addWidget(spinBoxAlpha, 3, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        textEdit = new QTextEdit(horizontalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMaximumSize(QSize(100, 100));
        textEdit->setBaseSize(QSize(10, 10));
        QFont font;
        font.setPointSize(10);
        textEdit->setFont(font);
        textEdit->setTabStopWidth(80);

        horizontalLayout->addWidget(textEdit);

        dial = new QDial(centralWidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(-10, 250, 121, 101));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 220, 421, 16));
        progressBar->setValue(24);
        horizontalScrollBar = new QScrollBar(centralWidget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(10, 200, 421, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(150, 250, 101, 101));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 250, 91, 107));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        radioButton_2 = new QRadioButton(verticalLayoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(verticalLayoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_3 = new QRadioButton(verticalLayoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(verticalLayoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        SliderLevel = new QSlider(centralWidget);
        SliderLevel->setObjectName(QString::fromUtf8("SliderLevel"));
        SliderLevel->setGeometry(QRect(10, 170, 421, 22));
        SliderLevel->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 150, 47, 13));
        color_RGB->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(color_RGB);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 599, 23));
        color_RGB->setMenuBar(menuBar);
        mainToolBar = new QToolBar(color_RGB);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        color_RGB->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(color_RGB);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        color_RGB->setStatusBar(statusBar);

        retranslateUi(color_RGB);

        QMetaObject::connectSlotsByName(color_RGB);
    } // setupUi

    void retranslateUi(QMainWindow *color_RGB)
    {
        color_RGB->setWindowTitle(QApplication::translate("color_RGB", "color_RGB", nullptr));
        label_5->setText(QApplication::translate("color_RGB", "Slider and QColor", nullptr));
        label_2->setText(QApplication::translate("color_RGB", "Green", nullptr));
        label_3->setText(QApplication::translate("color_RGB", "Blue", nullptr));
        label_4->setText(QApplication::translate("color_RGB", "Alpha", nullptr));
        label->setText(QApplication::translate("color_RGB", "Red", nullptr));
        label_6->setText(QApplication::translate("color_RGB", "LCD\346\230\276\347\244\272\350\277\233\345\210\266", nullptr));
        radioButton_2->setText(QApplication::translate("color_RGB", "RadioButton", nullptr));
        radioButton->setText(QApplication::translate("color_RGB", "RadioButton", nullptr));
        radioButton_3->setText(QApplication::translate("color_RGB", "RadioButton", nullptr));
        radioButton_4->setText(QApplication::translate("color_RGB", "RadioButton", nullptr));
        label_7->setText(QApplication::translate("color_RGB", "Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class color_RGB: public Ui_color_RGB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOR_RGB_H
