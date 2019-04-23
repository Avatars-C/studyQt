/********************************************************************************
** Form generated from reading UI file 'demo1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO1_H
#define UI_DEMO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demo1
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_3;
    QSpinBox *agesBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *demo1)
    {
        if (demo1->objectName().isEmpty())
            demo1->setObjectName(QString::fromUtf8("demo1"));
        demo1->resize(441, 346);
        centralWidget = new QWidget(demo1);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 90, 161, 21));
        agesBox = new QSpinBox(centralWidget);
        agesBox->setObjectName(QString::fromUtf8("agesBox"));
        agesBox->setGeometry(QRect(130, 120, 161, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 90, 47, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 119, 47, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 150, 47, 21));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(130, 151, 161, 20));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(70, 190, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 190, 75, 23));
        demo1->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(demo1);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 441, 23));
        demo1->setMenuBar(menuBar);
        mainToolBar = new QToolBar(demo1);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        demo1->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(demo1);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        demo1->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit_3);
        label_2->setBuddy(agesBox);
        label_3->setBuddy(plainTextEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(demo1);

        QMetaObject::connectSlotsByName(demo1);
    } // setupUi

    void retranslateUi(QMainWindow *demo1)
    {
        demo1->setWindowTitle(QApplication::translate("demo1", "demo1", nullptr));
        lineEdit_3->setText(QString());
        label->setText(QApplication::translate("demo1", "\345\247\223\345\220\215(N)", nullptr));
        label_2->setText(QApplication::translate("demo1", "\345\271\264\351\276\204(A)", nullptr));
        label_3->setText(QApplication::translate("demo1", "\346\260\221\346\227\217(M)", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("demo1", "\346\261\211\346\227\217\n"
"\345\270\203\344\276\235\346\227\217\n"
"\345\275\235\346\227\217\n"
"\350\227\217\346\227\217\n"
"", nullptr));
        pushButton_1->setText(QApplication::translate("demo1", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("demo1", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demo1: public Ui_demo1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO1_H
