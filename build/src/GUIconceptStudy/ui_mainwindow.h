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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
//#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExisting_File;
    QAction *actionClose;
    QAction *actionNew_File;
    QAction *actionSave_As;
    QAction *actionPrint_pdf;
    QAction *actionRun;
    QAction *actionLoad_Picture;
    QAction *actionRefresh;
    QWidget *centralWidget;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QComboBox *primarySubstrateComboBox;
    QComboBox *secondarySubstrateComboBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *primarySubstrateLbl;
    QLabel *secondarySubstrateLbl;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_5;
    QPushButton *substrateIDGuideBtn;
    QPushButton *save2Btn;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *zoomInImageBtn;
    QPushButton *zoomOffImageBtn;
    QCustomPlot *customPlot;
    QDialogButtonBox *buttonBox;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QRadioButton *enablePanRadioBtn;
    QRadioButton *disablePanRadioBtn;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QPushButton *gridOnBtn;
    QPushButton *gridOffBtn;
    QPushButton *zoomInBtn;
    QPushButton *zoomOutBtn;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QRadioButton *enablePointerRadioBtn;
    QRadioButton *disablePointerRadioBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *distanceLbl;
    QLineEdit *distanceLineEdit;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QPushButton *countTunicateBtn;
    QPushButton *macrofaunaBtn;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_8;
    QPushButton *outputPathBtn;
    QPushButton *loadImageBtn;
    QPushButton *saveBtn;
    QPushButton *substrateIDBtn;
    QLabel *previewLbl;
    QMenuBar *menuBar;
    QMenu *menuOpen;
    QMenu *menuSave;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1138, 928);
        actionExisting_File = new QAction(MainWindow);
        actionExisting_File->setObjectName(QStringLiteral("actionExisting_File"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/existing_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExisting_File->setIcon(icon);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon1);
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName(QStringLiteral("actionNew_File"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new_file2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_File->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon3);
        actionPrint_pdf = new QAction(MainWindow);
        actionPrint_pdf->setObjectName(QStringLiteral("actionPrint_pdf"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint_pdf->setIcon(icon4);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/run.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon5);
        actionLoad_Picture = new QAction(MainWindow);
        actionLoad_Picture->setObjectName(QStringLiteral("actionLoad_Picture"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_Picture->setIcon(icon6);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_10 = new QGridLayout(centralWidget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_4 = new QGridLayout(groupBox_6);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        primarySubstrateComboBox = new QComboBox(groupBox_6);
        primarySubstrateComboBox->setObjectName(QStringLiteral("primarySubstrateComboBox"));

        verticalLayout->addWidget(primarySubstrateComboBox);

        secondarySubstrateComboBox = new QComboBox(groupBox_6);
        secondarySubstrateComboBox->setObjectName(QStringLiteral("secondarySubstrateComboBox"));

        verticalLayout->addWidget(secondarySubstrateComboBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        primarySubstrateLbl = new QLabel(groupBox_6);
        primarySubstrateLbl->setObjectName(QStringLiteral("primarySubstrateLbl"));

        verticalLayout_3->addWidget(primarySubstrateLbl);

        secondarySubstrateLbl = new QLabel(groupBox_6);
        secondarySubstrateLbl->setObjectName(QStringLiteral("secondarySubstrateLbl"));

        verticalLayout_3->addWidget(secondarySubstrateLbl);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_5 = new QGridLayout(groupBox_7);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        substrateIDGuideBtn = new QPushButton(groupBox_7);
        substrateIDGuideBtn->setObjectName(QStringLiteral("substrateIDGuideBtn"));

        gridLayout_5->addWidget(substrateIDGuideBtn, 0, 0, 1, 1);

        save2Btn = new QPushButton(groupBox_7);
        save2Btn->setObjectName(QStringLiteral("save2Btn"));

        gridLayout_5->addWidget(save2Btn, 1, 0, 1, 1);

        pushButton = new QPushButton(groupBox_7);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_5->addWidget(pushButton, 2, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_7);


        gridLayout_10->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 496, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer, 2, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalSpacer = new QSpacerItem(690, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        zoomInImageBtn = new QPushButton(centralWidget);
        zoomInImageBtn->setObjectName(QStringLiteral("zoomInImageBtn"));

        gridLayout_2->addWidget(zoomInImageBtn, 0, 0, 1, 1);

        zoomOffImageBtn = new QPushButton(centralWidget);
        zoomOffImageBtn->setObjectName(QStringLiteral("zoomOffImageBtn"));

        gridLayout_2->addWidget(zoomOffImageBtn, 0, 1, 1, 1);

        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));

        gridLayout_2->addWidget(customPlot, 1, 0, 1, 2);


        gridLayout_9->addLayout(gridLayout_2, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_9->addWidget(buttonBox, 3, 1, 1, 1);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(horizontalSlider, 2, 0, 1, 2);


        gridLayout_10->addLayout(gridLayout_9, 1, 1, 2, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        groupBox_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        enablePanRadioBtn = new QRadioButton(groupBox_2);
        enablePanRadioBtn->setObjectName(QStringLiteral("enablePanRadioBtn"));

        gridLayout->addWidget(enablePanRadioBtn, 0, 0, 1, 1);

        disablePanRadioBtn = new QRadioButton(groupBox_2);
        disablePanRadioBtn->setObjectName(QStringLiteral("disablePanRadioBtn"));

        gridLayout->addWidget(disablePanRadioBtn, 1, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridOnBtn = new QPushButton(groupBox);
        gridOnBtn->setObjectName(QStringLiteral("gridOnBtn"));

        gridLayout_3->addWidget(gridOnBtn, 0, 0, 1, 1);

        gridOffBtn = new QPushButton(groupBox);
        gridOffBtn->setObjectName(QStringLiteral("gridOffBtn"));

        gridLayout_3->addWidget(gridOffBtn, 0, 1, 1, 1);

        zoomInBtn = new QPushButton(groupBox);
        zoomInBtn->setObjectName(QStringLiteral("zoomInBtn"));

        gridLayout_3->addWidget(zoomInBtn, 1, 0, 1, 1);

        zoomOutBtn = new QPushButton(groupBox);
        zoomOutBtn->setObjectName(QStringLiteral("zoomOutBtn"));

        gridLayout_3->addWidget(zoomOutBtn, 1, 1, 1, 1);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        enablePointerRadioBtn = new QRadioButton(groupBox_3);
        enablePointerRadioBtn->setObjectName(QStringLiteral("enablePointerRadioBtn"));

        gridLayout_6->addWidget(enablePointerRadioBtn, 0, 0, 1, 1);

        disablePointerRadioBtn = new QRadioButton(groupBox_3);
        disablePointerRadioBtn->setObjectName(QStringLiteral("disablePointerRadioBtn"));

        gridLayout_6->addWidget(disablePointerRadioBtn, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        distanceLbl = new QLabel(groupBox_3);
        distanceLbl->setObjectName(QStringLiteral("distanceLbl"));

        horizontalLayout_2->addWidget(distanceLbl);

        distanceLineEdit = new QLineEdit(groupBox_3);
        distanceLineEdit->setObjectName(QStringLiteral("distanceLineEdit"));

        horizontalLayout_2->addWidget(distanceLineEdit);


        gridLayout_6->addLayout(horizontalLayout_2, 1, 0, 1, 2);


        horizontalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        countTunicateBtn = new QPushButton(groupBox_4);
        countTunicateBtn->setObjectName(QStringLiteral("countTunicateBtn"));

        gridLayout_7->addWidget(countTunicateBtn, 0, 0, 1, 1);

        macrofaunaBtn = new QPushButton(groupBox_4);
        macrofaunaBtn->setObjectName(QStringLiteral("macrofaunaBtn"));

        gridLayout_7->addWidget(macrofaunaBtn, 1, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        outputPathBtn = new QPushButton(groupBox_5);
        outputPathBtn->setObjectName(QStringLiteral("outputPathBtn"));

        gridLayout_8->addWidget(outputPathBtn, 0, 0, 1, 1);

        loadImageBtn = new QPushButton(groupBox_5);
        loadImageBtn->setObjectName(QStringLiteral("loadImageBtn"));

        gridLayout_8->addWidget(loadImageBtn, 0, 1, 1, 1);

        saveBtn = new QPushButton(groupBox_5);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));

        gridLayout_8->addWidget(saveBtn, 1, 0, 1, 1);

        substrateIDBtn = new QPushButton(groupBox_5);
        substrateIDBtn->setObjectName(QStringLiteral("substrateIDBtn"));

        gridLayout_8->addWidget(substrateIDBtn, 1, 1, 1, 1);


        horizontalLayout_3->addWidget(groupBox_5);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        previewLbl = new QLabel(centralWidget);
        previewLbl->setObjectName(QStringLiteral("previewLbl"));

        horizontalLayout_4->addWidget(previewLbl);


        gridLayout_10->addLayout(horizontalLayout_4, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1138, 22));
        menuOpen = new QMenu(menuBar);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        menuSave = new QMenu(menuBar);
        menuSave->setObjectName(QStringLiteral("menuSave"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOpen->menuAction());
        menuBar->addAction(menuSave->menuAction());
        menuOpen->addAction(actionNew_File);
        menuOpen->addAction(actionExisting_File);
        menuOpen->addAction(actionClose);
        menuSave->addAction(actionSave_As);
        menuSave->addAction(actionPrint_pdf);
        mainToolBar->addAction(actionNew_File);
        mainToolBar->addAction(actionExisting_File);
        mainToolBar->addAction(actionSave_As);
        mainToolBar->addAction(actionLoad_Picture);
        mainToolBar->addAction(actionRun);
        mainToolBar->addAction(actionRefresh);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionExisting_File->setText(QApplication::translate("MainWindow", "Existing File", 0));
        actionExisting_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionNew_File->setText(QApplication::translate("MainWindow", "New File", 0));
        actionNew_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0));
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionPrint_pdf->setText(QApplication::translate("MainWindow", "Print pdf", 0));
        actionPrint_pdf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionRun->setText(QApplication::translate("MainWindow", "Run", 0));
        actionRun->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        actionLoad_Picture->setText(QApplication::translate("MainWindow", "Load_Picture", 0));
        actionLoad_Picture->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0));
        actionRefresh->setText(QApplication::translate("MainWindow", "Refresh", 0));
        actionRefresh->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Set Substrate ID:", 0));
        primarySubstrateComboBox->clear();
        primarySubstrateComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Rock", 0)
         << QApplication::translate("MainWindow", "Boulder", 0)
         << QApplication::translate("MainWindow", "Cobble", 0)
         << QApplication::translate("MainWindow", "Pebble", 0)
         << QApplication::translate("MainWindow", "Sand", 0)
         << QApplication::translate("MainWindow", "Mud", 0)
        );
        secondarySubstrateComboBox->clear();
        secondarySubstrateComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Rock", 0)
         << QApplication::translate("MainWindow", "Boulder", 0)
         << QApplication::translate("MainWindow", "Cobble", 0)
         << QApplication::translate("MainWindow", "Pebble", 0)
         << QApplication::translate("MainWindow", "Sand", 0)
         << QApplication::translate("MainWindow", "Mud", 0)
        );
        primarySubstrateLbl->setText(QApplication::translate("MainWindow", "Set Primary Substrate", 0));
        secondarySubstrateLbl->setText(QApplication::translate("MainWindow", "Set Secondary Substrate", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "How to set substrate ID:", 0));
        substrateIDGuideBtn->setText(QApplication::translate("MainWindow", "Substarate ID Guidelines", 0));
        save2Btn->setText(QApplication::translate("MainWindow", "Save", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Upload Image on Custom Plot", 0));
        zoomInImageBtn->setText(QApplication::translate("MainWindow", "Zoom In", 0));
        zoomOffImageBtn->setText(QApplication::translate("MainWindow", "Zoom Out", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Pan Controls", 0));
        enablePanRadioBtn->setText(QApplication::translate("MainWindow", "Enable PAN", 0));
        disablePanRadioBtn->setText(QApplication::translate("MainWindow", "Disable Pan", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Graphics View Controls", 0));
        gridOnBtn->setText(QApplication::translate("MainWindow", "Grid On", 0));
        gridOffBtn->setText(QApplication::translate("MainWindow", "Grid Off", 0));
        zoomInBtn->setText(QApplication::translate("MainWindow", "Zoom In", 0));
        zoomOutBtn->setText(QApplication::translate("MainWindow", "Zoom Out", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Pointer and Distance Controls", 0));
        enablePointerRadioBtn->setText(QApplication::translate("MainWindow", "Enable Pointer", 0));
        disablePointerRadioBtn->setText(QApplication::translate("MainWindow", "Disable Pointer", 0));
        distanceLbl->setText(QApplication::translate("MainWindow", "Distance between dots is:", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Fauna Operations", 0));
        countTunicateBtn->setText(QApplication::translate("MainWindow", "Count_Tunicate", 0));
        macrofaunaBtn->setText(QApplication::translate("MainWindow", "Macrofauna", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Operations", 0));
        outputPathBtn->setText(QApplication::translate("MainWindow", "Output Path", 0));
        loadImageBtn->setText(QApplication::translate("MainWindow", "Load Image", 0));
        saveBtn->setText(QApplication::translate("MainWindow", "Save", 0));
        substrateIDBtn->setText(QApplication::translate("MainWindow", "Substrate ID", 0));
        previewLbl->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        menuOpen->setTitle(QApplication::translate("MainWindow", "Open", 0));
        menuSave->setTitle(QApplication::translate("MainWindow", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
