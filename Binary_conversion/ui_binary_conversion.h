/********************************************************************************
** Form generated from reading UI file 'binary_conversion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINARY_CONVERSION_H
#define UI_BINARY_CONVERSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Binary_conversion
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Binary_conversion)
    {
        if (Binary_conversion->objectName().isEmpty())
            Binary_conversion->setObjectName(QString::fromUtf8("Binary_conversion"));
        Binary_conversion->resize(504, 480);
        centralWidget = new QWidget(Binary_conversion);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 80, 398, 241));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_4->addWidget(lineEdit_3, 3, 3, 1, 1);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_4->addWidget(lineEdit, 2, 1, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 2, 0, 1, 1);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_4->addWidget(pushButton, 3, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 3, 2, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 2, 2, 1, 1);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_4->addWidget(lineEdit_2, 2, 3, 1, 1);


        verticalLayout_4->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout_3->addWidget(lineEdit_6, 2, 1, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout_3->addWidget(lineEdit_5, 1, 1, 1, 1);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_3->addWidget(lineEdit_4, 0, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_3->addWidget(pushButton_4, 2, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        Binary_conversion->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Binary_conversion);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 504, 23));
        Binary_conversion->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Binary_conversion);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Binary_conversion->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Binary_conversion);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Binary_conversion->setStatusBar(statusBar);

        retranslateUi(Binary_conversion);

        QMetaObject::connectSlotsByName(Binary_conversion);
    } // setupUi

    void retranslateUi(QMainWindow *Binary_conversion)
    {
        Binary_conversion->setWindowTitle(QApplication::translate("Binary_conversion", "Binary_conversion", nullptr));
        label->setText(QApplication::translate("Binary_conversion", "\346\225\260\351\207\217", nullptr));
        pushButton->setText(QApplication::translate("Binary_conversion", "\350\256\241\347\256\227", nullptr));
        label_3->setText(QApplication::translate("Binary_conversion", "\346\200\273\344\273\267", nullptr));
        label_2->setText(QApplication::translate("Binary_conversion", "\345\215\225\344\273\267", nullptr));
        label_6->setText(QApplication::translate("Binary_conversion", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        label_5->setText(QApplication::translate("Binary_conversion", "\344\272\214\350\277\233\345\210\266", nullptr));
        label_4->setText(QApplication::translate("Binary_conversion", "\345\215\201\350\277\233\345\210\266", nullptr));
        pushButton_2->setText(QApplication::translate("Binary_conversion", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        pushButton_3->setText(QApplication::translate("Binary_conversion", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        pushButton_4->setText(QApplication::translate("Binary_conversion", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Binary_conversion: public Ui_Binary_conversion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINARY_CONVERSION_H
