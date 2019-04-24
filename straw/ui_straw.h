/********************************************************************************
** Form generated from reading UI file 'straw.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRAW_H
#define UI_STRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_straw
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *straw)
    {
        if (straw->objectName().isEmpty())
            straw->setObjectName(QString::fromUtf8("straw"));
        straw->resize(400, 300);
        menuBar = new QMenuBar(straw);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        straw->setMenuBar(menuBar);
        mainToolBar = new QToolBar(straw);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        straw->addToolBar(mainToolBar);
        centralWidget = new QWidget(straw);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        straw->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(straw);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        straw->setStatusBar(statusBar);

        retranslateUi(straw);

        QMetaObject::connectSlotsByName(straw);
    } // setupUi

    void retranslateUi(QMainWindow *straw)
    {
        straw->setWindowTitle(QApplication::translate("straw", "straw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class straw: public Ui_straw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRAW_H
