/********************************************************************************
** Form generated from reading UI file 'imagemanager.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEMANAGER_H
#define UI_IMAGEMANAGER_H

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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtinclude/imagelabel.h"
#include "qtinclude/imagelistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ImageManager
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_3;
    ImageLabel *imgViewer;
    QHBoxLayout *horizontalLayout;
    QSpinBox *lowerBound;
    QSpinBox *upperBound;
    QPushButton *cropList;
    ImageListWidget *imListWid;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *runBtn;
    QComboBox *comboBox;
    QPushButton *outputPath_btn;
    QPushButton *loadBtn;
    QPushButton *saveBtn;
    QPushButton *savteToDB;
    QProgressBar *runProgress;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageManager)
    {
        if (ImageManager->objectName().isEmpty())
            ImageManager->setObjectName(QStringLiteral("ImageManager"));
        ImageManager->resize(1404, 980);
        ImageManager->setAutoFillBackground(false);
        ImageManager->setDocumentMode(false);
        ImageManager->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(ImageManager);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        dockWidget = new QDockWidget(centralWidget);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(250, 50));
        dockWidget->setFloating(false);
        dockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        dockWidget->setWidget(dockWidgetContents_5);

        verticalLayout_2->addWidget(dockWidget);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        imgViewer = new ImageLabel(centralWidget);
        imgViewer->setObjectName(QStringLiteral("imgViewer"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imgViewer->sizePolicy().hasHeightForWidth());
        imgViewer->setSizePolicy(sizePolicy);
        imgViewer->setMinimumSize(QSize(390, 294));
        imgViewer->setAutoFillBackground(false);
        imgViewer->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        imgViewer->setFrameShadow(QFrame::Raised);
        imgViewer->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(imgViewer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lowerBound = new QSpinBox(centralWidget);
        lowerBound->setObjectName(QStringLiteral("lowerBound"));

        horizontalLayout->addWidget(lowerBound);

        upperBound = new QSpinBox(centralWidget);
        upperBound->setObjectName(QStringLiteral("upperBound"));

        horizontalLayout->addWidget(upperBound);


        verticalLayout_3->addLayout(horizontalLayout);

        cropList = new QPushButton(centralWidget);
        cropList->setObjectName(QStringLiteral("cropList"));

        verticalLayout_3->addWidget(cropList);

        imListWid = new ImageListWidget(centralWidget);
        imListWid->setObjectName(QStringLiteral("imListWid"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imListWid->sizePolicy().hasHeightForWidth());
        imListWid->setSizePolicy(sizePolicy1);
        imListWid->setMinimumSize(QSize(300, 0));
        imListWid->setMaximumSize(QSize(434, 16777215));

        verticalLayout_3->addWidget(imListWid);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        runBtn = new QPushButton(groupBox);
        runBtn->setObjectName(QStringLiteral("runBtn"));
        sizePolicy.setHeightForWidth(runBtn->sizePolicy().hasHeightForWidth());
        runBtn->setSizePolicy(sizePolicy);
        runBtn->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(runBtn, 2, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 2, 1, 1, 1);

        outputPath_btn = new QPushButton(groupBox);
        outputPath_btn->setObjectName(QStringLiteral("outputPath_btn"));

        gridLayout->addWidget(outputPath_btn, 0, 0, 1, 1);

        loadBtn = new QPushButton(groupBox);
        loadBtn->setObjectName(QStringLiteral("loadBtn"));
        sizePolicy.setHeightForWidth(loadBtn->sizePolicy().hasHeightForWidth());
        loadBtn->setSizePolicy(sizePolicy);
        loadBtn->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(loadBtn, 0, 1, 1, 1);

        saveBtn = new QPushButton(groupBox);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));

        gridLayout->addWidget(saveBtn, 3, 0, 1, 1);

        savteToDB = new QPushButton(groupBox);
        savteToDB->setObjectName(QStringLiteral("savteToDB"));

        gridLayout->addWidget(savteToDB, 3, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        runProgress = new QProgressBar(centralWidget);
        runProgress->setObjectName(QStringLiteral("runProgress"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(runProgress->sizePolicy().hasHeightForWidth());
        runProgress->setSizePolicy(sizePolicy2);
        runProgress->setValue(0);

        verticalLayout_3->addWidget(runProgress);


        horizontalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_5);

        ImageManager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageManager);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1404, 30));
        ImageManager->setMenuBar(menuBar);
        statusBar = new QStatusBar(ImageManager);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageManager->setStatusBar(statusBar);

        retranslateUi(ImageManager);

        QMetaObject::connectSlotsByName(ImageManager);
    } // setupUi

    void retranslateUi(QMainWindow *ImageManager)
    {
        ImageManager->setWindowTitle(QApplication::translate("ImageManager", "Image Manager", 0));
        dockWidget->setWindowTitle(QString());
        imgViewer->setText(QString());
        cropList->setText(QApplication::translate("ImageManager", "Crop List to Selected Range", 0));
        groupBox->setTitle(QApplication::translate("ImageManager", "Operations", 0));
        runBtn->setText(QApplication::translate("ImageManager", "Run Correction", 0));
        outputPath_btn->setText(QApplication::translate("ImageManager", "Output Path...", 0));
        loadBtn->setText(QApplication::translate("ImageManager", "Load Images...", 0));
        saveBtn->setText(QApplication::translate("ImageManager", "Save Results", 0));
        savteToDB->setText(QApplication::translate("ImageManager", "Save to DB", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageManager: public Ui_ImageManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEMANAGER_H
