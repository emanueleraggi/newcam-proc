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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtinclude/imagelabel.h"
#include "qtinclude/imagelistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    ImageLabel *imgViewer;
    ImageLabel *imgViewer_corrected;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_5;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QPushButton *saveBtn;
    QPushButton *runBtn;
    QPushButton *loadBtn;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QSpacerItem *horizontalSpacer;
    QProgressBar *runProgress;
    ImageListWidget *imListWid;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(911, 520);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        imgViewer = new ImageLabel(centralWidget);
        imgViewer->setObjectName(QStringLiteral("imgViewer"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imgViewer->sizePolicy().hasHeightForWidth());
        imgViewer->setSizePolicy(sizePolicy);
        imgViewer->setMinimumSize(QSize(200, 200));
        imgViewer->setAutoFillBackground(true);
        imgViewer->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(imgViewer);

        imgViewer_corrected = new ImageLabel(centralWidget);
        imgViewer_corrected->setObjectName(QStringLiteral("imgViewer_corrected"));
        sizePolicy.setHeightForWidth(imgViewer_corrected->sizePolicy().hasHeightForWidth());
        imgViewer_corrected->setSizePolicy(sizePolicy);
        imgViewer_corrected->setMinimumSize(QSize(200, 200));
        imgViewer_corrected->setAutoFillBackground(true);
        imgViewer_corrected->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(imgViewer_corrected);


        verticalLayout_2->addLayout(horizontalLayout_2);

        dockWidget = new QDockWidget(centralWidget);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(250, 50));
        dockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        dockWidget->setWidget(dockWidgetContents_5);

        verticalLayout_2->addWidget(dockWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        saveBtn = new QPushButton(groupBox);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));

        gridLayout->addWidget(saveBtn, 3, 0, 1, 1);

        runBtn = new QPushButton(groupBox);
        runBtn->setObjectName(QStringLiteral("runBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(runBtn->sizePolicy().hasHeightForWidth());
        runBtn->setSizePolicy(sizePolicy1);
        runBtn->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(runBtn, 2, 0, 1, 1);

        loadBtn = new QPushButton(groupBox);
        loadBtn->setObjectName(QStringLiteral("loadBtn"));
        sizePolicy1.setHeightForWidth(loadBtn->sizePolicy().hasHeightForWidth());
        loadBtn->setSizePolicy(sizePolicy1);
        loadBtn->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(loadBtn, 1, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        prevButton = new QPushButton(groupBox_2);
        prevButton->setObjectName(QStringLiteral("prevButton"));
        sizePolicy1.setHeightForWidth(prevButton->sizePolicy().hasHeightForWidth());
        prevButton->setSizePolicy(sizePolicy1);
        prevButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(prevButton);

        nextButton = new QPushButton(groupBox_2);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        sizePolicy1.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy1);
        nextButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(nextButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_4->addWidget(groupBox_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        runProgress = new QProgressBar(centralWidget);
        runProgress->setObjectName(QStringLiteral("runProgress"));
        runProgress->setValue(0);

        verticalLayout_2->addWidget(runProgress);


        horizontalLayout_5->addLayout(verticalLayout_2);

        imListWid = new ImageListWidget(centralWidget);
        imListWid->setObjectName(QStringLiteral("imListWid"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(imListWid->sizePolicy().hasHeightForWidth());
        imListWid->setSizePolicy(sizePolicy2);
        imListWid->setMinimumSize(QSize(300, 0));
        imListWid->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_5->addWidget(imListWid);


        verticalLayout->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 911, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_2->setText(QApplication::translate("MainWindow", "Original Image", 0));
        label->setText(QApplication::translate("MainWindow", "Output Image", 0));
        imgViewer->setText(QString());
        imgViewer_corrected->setText(QString());
        dockWidget->setWindowTitle(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Operations", 0));
        saveBtn->setText(QApplication::translate("MainWindow", "Save Results", 0));
        runBtn->setText(QApplication::translate("MainWindow", "Run Correction", 0));
        loadBtn->setText(QApplication::translate("MainWindow", "Load Images", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Image Navigation", 0));
        prevButton->setText(QApplication::translate("MainWindow", "Previous", 0));
        nextButton->setText(QApplication::translate("MainWindow", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
