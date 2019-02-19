/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qtinclude/imagelabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *dirPushButton;
    QPushButton *toGreyBtn;
    QPushButton *dispImg;
    QSpinBox *imageIndex;
    ImageLabel *imgLbl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(614, 692);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        dirPushButton = new QPushButton(centralwidget);
        dirPushButton->setObjectName(QStringLiteral("dirPushButton"));
        dirPushButton->setGeometry(QRect(40, 490, 99, 27));
        toGreyBtn = new QPushButton(centralwidget);
        toGreyBtn->setObjectName(QStringLiteral("toGreyBtn"));
        toGreyBtn->setGeometry(QRect(40, 560, 151, 27));
        dispImg = new QPushButton(centralwidget);
        dispImg->setObjectName(QStringLiteral("dispImg"));
        dispImg->setGeometry(QRect(40, 600, 141, 27));
        imageIndex = new QSpinBox(centralwidget);
        imageIndex->setObjectName(QStringLiteral("imageIndex"));
        imageIndex->setEnabled(false);
        imageIndex->setGeometry(QRect(40, 520, 521, 27));
        imgLbl = new ImageLabel(centralwidget);
        imgLbl->setObjectName(QStringLiteral("imgLbl"));
        imgLbl->setGeometry(QRect(60, 50, 571, 361));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 614, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        dirPushButton->setText(QApplication::translate("MainWindow", "Directory", 0));
        toGreyBtn->setText(QApplication::translate("MainWindow", "Convert To Gray", 0));
        dispImg->setText(QApplication::translate("MainWindow", "Display Image", 0));
        imgLbl->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
