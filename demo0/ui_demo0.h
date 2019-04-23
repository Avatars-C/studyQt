/********************************************************************************
** Form generated from reading UI file 'demo0.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO0_H
#define UI_DEMO0_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demo0
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *demo0)
    {
        if (demo0->objectName().isEmpty())
            demo0->setObjectName(QString::fromUtf8("demo0"));
        demo0->resize(466, 349);
        centralWidget = new QWidget(demo0);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 150, 311, 81));
        QFont font;
        font.setPointSize(20);
        plainTextEdit->setFont(font);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 240, 311, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_1 = new QPushButton(horizontalLayoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        horizontalLayout_2->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(horizontalLayout_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(60, 20, 311, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBox_1 = new QCheckBox(horizontalLayoutWidget_3);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));

        horizontalLayout_3->addWidget(checkBox_1);

        checkBox_2 = new QCheckBox(horizontalLayoutWidget_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_3->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(horizontalLayoutWidget_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_3->addWidget(checkBox_3);

        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(60, 90, 311, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButton_1 = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));

        horizontalLayout_4->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(horizontalLayoutWidget_4);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_4->addWidget(radioButton_3);

        demo0->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(demo0);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 466, 23));
        demo0->setMenuBar(menuBar);
        mainToolBar = new QToolBar(demo0);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        demo0->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(demo0);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        demo0->setStatusBar(statusBar);

        retranslateUi(demo0);
        QObject::connect(pushButton_2, SIGNAL(clicked()), demo0, SLOT(repaint()));
        QObject::connect(pushButton_1, SIGNAL(clicked()), demo0, SLOT(show()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), demo0, SLOT(close()));

        QMetaObject::connectSlotsByName(demo0);
    } // setupUi

    void retranslateUi(QMainWindow *demo0)
    {
        demo0->setWindowTitle(QApplication::translate("demo0", "demo0", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("demo0", "This is a test for creating Qt application.", nullptr));
        pushButton_1->setText(QApplication::translate("demo0", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("demo0", "\345\217\226\346\266\210", nullptr));
        pushButton_3->setText(QApplication::translate("demo0", "\351\200\200\345\207\272", nullptr));
        checkBox_1->setText(QApplication::translate("demo0", "Underline", nullptr));
        checkBox_2->setText(QApplication::translate("demo0", "Italic", nullptr));
        checkBox_3->setText(QApplication::translate("demo0", "Bold", nullptr));
        radioButton_1->setText(QApplication::translate("demo0", "Black", nullptr));
        radioButton_2->setText(QApplication::translate("demo0", "Red", nullptr));
        radioButton_3->setText(QApplication::translate("demo0", "Blue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demo0: public Ui_demo0 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO0_H
