/********************************************************************************
** Form generated from reading UI file 'qcombobox_and_qplaintextedit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCOMBOBOX_AND_QPLAINTEXTEDIT_H
#define UI_QCOMBOBOX_AND_QPLAINTEXTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QComboBox_And_QPlainTextEdit
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnInitItem;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *btnInit2;
    QComboBox *comboBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnToComboBox;
    QPushButton *pushButton_4;
    QCheckBox *checkBox_2;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QComboBox_And_QPlainTextEdit)
    {
        if (QComboBox_And_QPlainTextEdit->objectName().isEmpty())
            QComboBox_And_QPlainTextEdit->setObjectName(QString::fromUtf8("QComboBox_And_QPlainTextEdit"));
        QComboBox_And_QPlainTextEdit->resize(598, 728);
        centralWidget = new QWidget(QComboBox_And_QPlainTextEdit);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(26, 60, 501, 521));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(verticalLayoutWidget_4);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnInitItem = new QPushButton(verticalLayoutWidget_4);
        btnInitItem->setObjectName(QString::fromUtf8("btnInitItem"));

        horizontalLayout->addWidget(btnInitItem);

        pushButton = new QPushButton(verticalLayoutWidget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        checkBox = new QCheckBox(verticalLayoutWidget_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        comboBox = new QComboBox(verticalLayoutWidget_4);
        QIcon icon;
        icon.addFile(QString::fromUtf8("shanghai.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        btnInit2 = new QPushButton(verticalLayoutWidget_4);
        btnInit2->setObjectName(QString::fromUtf8("btnInit2"));

        verticalLayout_2->addWidget(btnInit2);

        comboBox_2 = new QComboBox(verticalLayoutWidget_4);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout_2->addWidget(comboBox_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnToComboBox = new QPushButton(verticalLayoutWidget_4);
        btnToComboBox->setObjectName(QString::fromUtf8("btnToComboBox"));

        horizontalLayout_3->addWidget(btnToComboBox);

        pushButton_4 = new QPushButton(verticalLayoutWidget_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        checkBox_2 = new QCheckBox(verticalLayoutWidget_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_3->addWidget(checkBox_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget_4);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_3->addWidget(plainTextEdit);


        verticalLayout_4->addLayout(verticalLayout_3);

        QComboBox_And_QPlainTextEdit->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QComboBox_And_QPlainTextEdit);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 598, 23));
        QComboBox_And_QPlainTextEdit->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QComboBox_And_QPlainTextEdit);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QComboBox_And_QPlainTextEdit->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QComboBox_And_QPlainTextEdit);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QComboBox_And_QPlainTextEdit->setStatusBar(statusBar);

        retranslateUi(QComboBox_And_QPlainTextEdit);

        QMetaObject::connectSlotsByName(QComboBox_And_QPlainTextEdit);
    } // setupUi

    void retranslateUi(QMainWindow *QComboBox_And_QPlainTextEdit)
    {
        QComboBox_And_QPlainTextEdit->setWindowTitle(QApplication::translate("QComboBox_And_QPlainTextEdit", "QComboBox_And_QPlainTextEdit", nullptr));
        label->setText(QApplication::translate("QComboBox_And_QPlainTextEdit", "\347\256\200\345\215\225ComboBox", nullptr));
        btnInitItem->setText(QApplication::translate("QComboBox_And_QPlainTextEdit", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        pushButton->setText(QApplication::translate("QComboBox_And_QPlainTextEdit", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        checkBox->setText(QApplication::translate("QComboBox_And_QPlainTextEdit", "\345\217\257\347\274\226\350\276\221", nullptr));
        comboBox->setItemText(0, QApplication::translate("QComboBox_And_QPlainTextEdit", "\345\214\227\344\272\254\345\270\202", nullptr));
        comboBox->setItemText(1, QApplication::translate("QComboBox_And_QPlainTextEdit", "\344\270\212\346\265\267\345\270\202", nullptr));

        label_2->setText(QApplication::translate("QComboBox_And_QPlainTextEdit", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204ComboBox", nullptr));
        btnInit2->setText(QApplication::translate("QComboBox_And_QPlainTextEdit", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", nullptr));
        label_3->setText(QApplication::translate("QComboBox_And_QPlainTextEdit", "QPlainTextEdit(\345\205\267\346\234\211\346\240\207\345\207\206\345\277\253\346\215\267\351\224\256\350\217\234\345\215\225)", nullptr));
        btnToComboBox->setText(QApplication::translate("QComboBox_And_QPlainTextEdit", "\346\226\207\346\234\254\346\241\206\346\267\273\345\212\240\345\210\260ComboBox", nullptr));
        pushButton_4->setText(QApplication::translate("QComboBox_And_QPlainTextEdit", "\346\270\205\351\231\244\346\226\207\346\234\254\345\206\205\345\256\271\345\210\206", nullptr));
        checkBox_2->setText(QApplication::translate("QComboBox_And_QPlainTextEdit", "Read Only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QComboBox_And_QPlainTextEdit: public Ui_QComboBox_And_QPlainTextEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCOMBOBOX_AND_QPLAINTEXTEDIT_H
