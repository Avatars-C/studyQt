/********************************************************************************
** Form generated from reading UI file 'demogettime.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOGETTIME_H
#define UI_DEMOGETTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demoGetTime
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditDateTime;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QTimeEdit *timeEdit;
    QPushButton *btnSetTimr;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QPushButton *btnSetDate;
    QLineEdit *lineEditTime;
    QLabel *label;
    QPushButton *btnSetDateTime;
    QLineEdit *lineEditDate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *btnGetDateTime;
    QCalendarWidget *calendarWidget;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEditCalendar;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonBegin;
    QPushButton *pushButtonSetCycle;
    QLabel *label_6;
    QPushButton *pushButtonStop;
    QLabel *label_7;
    QLCDNumber *lcdNumberHour;
    QLCDNumber *lcdNumberMinute;
    QLCDNumber *lcdNumberSecond;
    QPushButton *pushButtonClose;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *demoGetTime)
    {
        if (demoGetTime->objectName().isEmpty())
            demoGetTime->setObjectName(QString::fromUtf8("demoGetTime"));
        demoGetTime->resize(643, 519);
        centralWidget = new QWidget(demoGetTime);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 120, 351, 112));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditDateTime = new QLineEdit(gridLayoutWidget);
        lineEditDateTime->setObjectName(QString::fromUtf8("lineEditDateTime"));

        gridLayout->addWidget(lineEditDateTime, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label_2);

        timeEdit = new QTimeEdit(gridLayoutWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setMaximumSize(QSize(112, 16777215));

        horizontalLayout->addWidget(timeEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        btnSetTimr = new QPushButton(gridLayoutWidget);
        btnSetTimr->setObjectName(QString::fromUtf8("btnSetTimr"));

        gridLayout->addWidget(btnSetTimr, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(label_3);

        dateEdit = new QDateEdit(gridLayoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_2->addWidget(dateEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        btnSetDate = new QPushButton(gridLayoutWidget);
        btnSetDate->setObjectName(QString::fromUtf8("btnSetDate"));

        gridLayout->addWidget(btnSetDate, 2, 2, 1, 1);

        lineEditTime = new QLineEdit(gridLayoutWidget);
        lineEditTime->setObjectName(QString::fromUtf8("lineEditTime"));

        gridLayout->addWidget(lineEditTime, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        btnSetDateTime = new QPushButton(gridLayoutWidget);
        btnSetDateTime->setObjectName(QString::fromUtf8("btnSetDateTime"));

        gridLayout->addWidget(btnSetDateTime, 3, 2, 1, 1);

        lineEditDate = new QLineEdit(gridLayoutWidget);
        lineEditDate->setObjectName(QString::fromUtf8("lineEditDate"));

        gridLayout->addWidget(lineEditDate, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        label_4->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(label_4);

        dateTimeEdit = new QDateTimeEdit(gridLayoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setMaximumSize(QSize(105, 16777215));

        horizontalLayout_3->addWidget(dateTimeEdit);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        btnGetDateTime = new QPushButton(gridLayoutWidget);
        btnGetDateTime->setObjectName(QString::fromUtf8("btnGetDateTime"));

        gridLayout->addWidget(btnGetDateTime, 0, 0, 1, 1);

        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(370, 160, 241, 197));
        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(370, 120, 241, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEditCalendar = new QLineEdit(horizontalLayoutWidget_4);
        lineEditCalendar->setObjectName(QString::fromUtf8("lineEditCalendar"));

        horizontalLayout_4->addWidget(lineEditCalendar);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 250, 351, 101));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonBegin = new QPushButton(gridLayoutWidget_2);
        pushButtonBegin->setObjectName(QString::fromUtf8("pushButtonBegin"));

        gridLayout_2->addWidget(pushButtonBegin, 0, 0, 1, 1);

        pushButtonSetCycle = new QPushButton(gridLayoutWidget_2);
        pushButtonSetCycle->setObjectName(QString::fromUtf8("pushButtonSetCycle"));

        gridLayout_2->addWidget(pushButtonSetCycle, 1, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        pushButtonStop = new QPushButton(gridLayoutWidget_2);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));

        gridLayout_2->addWidget(pushButtonStop, 0, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        lcdNumberHour = new QLCDNumber(gridLayoutWidget_2);
        lcdNumberHour->setObjectName(QString::fromUtf8("lcdNumberHour"));

        gridLayout_2->addWidget(lcdNumberHour, 2, 0, 1, 1);

        lcdNumberMinute = new QLCDNumber(gridLayoutWidget_2);
        lcdNumberMinute->setObjectName(QString::fromUtf8("lcdNumberMinute"));

        gridLayout_2->addWidget(lcdNumberMinute, 2, 1, 1, 1);

        lcdNumberSecond = new QLCDNumber(gridLayoutWidget_2);
        lcdNumberSecond->setObjectName(QString::fromUtf8("lcdNumberSecond"));

        gridLayout_2->addWidget(lcdNumberSecond, 2, 2, 1, 1);

        pushButtonClose = new QPushButton(centralWidget);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(374, 370, 241, 23));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 370, 351, 23));
        progressBar->setValue(24);
        demoGetTime->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(demoGetTime);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 643, 23));
        demoGetTime->setMenuBar(menuBar);
        mainToolBar = new QToolBar(demoGetTime);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        demoGetTime->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(demoGetTime);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        demoGetTime->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(timeEdit);
        label_4->setBuddy(dateTimeEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(demoGetTime);
        QObject::connect(pushButtonClose, SIGNAL(clicked()), centralWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(demoGetTime);
    } // setupUi

    void retranslateUi(QMainWindow *demoGetTime)
    {
        demoGetTime->setWindowTitle(QApplication::translate("demoGetTime", "demoGetTime", nullptr));
        label_2->setText(QApplication::translate("demoGetTime", "\346\227\266\351\227\264", nullptr));
        btnSetTimr->setText(QApplication::translate("demoGetTime", "\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        label_3->setText(QApplication::translate("demoGetTime", "\346\227\245\346\234\237", nullptr));
        btnSetDate->setText(QApplication::translate("demoGetTime", "\350\256\276\347\275\256\346\227\245\346\234\237", nullptr));
        label->setText(QApplication::translate("demoGetTime", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        btnSetDateTime->setText(QApplication::translate("demoGetTime", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        label_4->setText(QApplication::translate("demoGetTime", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        btnGetDateTime->setText(QApplication::translate("demoGetTime", "\350\216\267\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        label_5->setText(QApplication::translate("demoGetTime", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237", nullptr));
        pushButtonBegin->setText(QApplication::translate("demoGetTime", "\345\274\200\345\247\213", nullptr));
        pushButtonSetCycle->setText(QApplication::translate("demoGetTime", "\350\256\276\347\275\256\345\221\250\346\234\237", nullptr));
        label_6->setText(QApplication::translate("demoGetTime", "\346\265\201\351\200\235\346\227\266\351\227\264", nullptr));
        pushButtonStop->setText(QApplication::translate("demoGetTime", "\345\201\234\346\255\242", nullptr));
        label_7->setText(QApplication::translate("demoGetTime", "\345\256\232\346\227\266\345\231\250\345\221\250\346\234\237", nullptr));
        pushButtonClose->setText(QApplication::translate("demoGetTime", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demoGetTime: public Ui_demoGetTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOGETTIME_H
