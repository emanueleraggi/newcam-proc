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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
//#include "graphicsviewbothdrag.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QAction *actionNew_File;
    QAction *actionSave_As;
    QAction *actionPrint_pdf;
    QAction *actionWindowing;
    QWidget *centralWidget;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout;
    QCheckBox *rightSidePan;
    QCheckBox *tiedPan;
    QCheckBox *zoomSelect;
    QCheckBox *leftSidePan;
    QCheckBox *connectCheckBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QRadioButton *enablePointerRadioBtn;
    QRadioButton *disablePointerRadioBtn;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLineEdit *leftLineEditDist;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QLineEdit *rightLineEditDist;
    QLabel *leftPreview;
    QLabel *rightPreview;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QPushButton *loadLeftDirBtn;
    QPushButton *loadRightDirBtn;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_3;
    QPushButton *substrateIDGuideBtn;
    QPushButton *loadFromCustomPlotA;
    QPushButton *loadFromCustomPlotB;
    QPushButton *addNewRecordBtn;
    QTableView *recordLeftTableView;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *leftCamMenuComboBox;
    QComboBox *primarySubComboBoxLeft;
    QComboBox *secondarySubComboBoxLeft;
    QComboBox *rightCamMenuComboBox;
    QComboBox *primarySubComboBoxRight;
    QComboBox *secondarySubComboBoxRight;
    QHBoxLayout *horizontalLayout_5;
    MGraphicsViewBothDrag *leftView;
    MGraphicsViewBothDrag *rightView;
    QDialogButtonBox *buttonBox;
    QMenuBar *menuBar;
    QMenu *menuOpen;
    QMenu *menuSave;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1691, 817);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon);
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName(QStringLiteral("actionNew_File"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/new_file2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_File->setIcon(icon1);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/openfile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon2);
        actionPrint_pdf = new QAction(MainWindow);
        actionPrint_pdf->setObjectName(QStringLiteral("actionPrint_pdf"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint_pdf->setIcon(icon3);
        actionWindowing = new QAction(MainWindow);
        actionWindowing->setObjectName(QStringLiteral("actionWindowing"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/windowing.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWindowing->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_8 = new QGridLayout(centralWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_10 = new QGroupBox(centralWidget);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        gridLayout = new QGridLayout(groupBox_10);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        rightSidePan = new QCheckBox(groupBox_10);
        rightSidePan->setObjectName(QStringLiteral("rightSidePan"));

        gridLayout->addWidget(rightSidePan, 2, 0, 1, 1);

        tiedPan = new QCheckBox(groupBox_10);
        tiedPan->setObjectName(QStringLiteral("tiedPan"));

        gridLayout->addWidget(tiedPan, 0, 1, 1, 1);

        zoomSelect = new QCheckBox(groupBox_10);
        zoomSelect->setObjectName(QStringLiteral("zoomSelect"));

        gridLayout->addWidget(zoomSelect, 2, 1, 1, 1);

        leftSidePan = new QCheckBox(groupBox_10);
        leftSidePan->setObjectName(QStringLiteral("leftSidePan"));

        gridLayout->addWidget(leftSidePan, 0, 0, 1, 1);

        connectCheckBox = new QCheckBox(groupBox_10);
        connectCheckBox->setObjectName(QStringLiteral("connectCheckBox"));

        gridLayout->addWidget(connectCheckBox, 1, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_10);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        enablePointerRadioBtn = new QRadioButton(groupBox_3);
        enablePointerRadioBtn->setObjectName(QStringLiteral("enablePointerRadioBtn"));

        gridLayout_2->addWidget(enablePointerRadioBtn, 0, 0, 1, 1);

        disablePointerRadioBtn = new QRadioButton(groupBox_3);
        disablePointerRadioBtn->setObjectName(QStringLiteral("disablePointerRadioBtn"));

        gridLayout_2->addWidget(disablePointerRadioBtn, 0, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        leftLineEditDist = new QLineEdit(groupBox_4);
        leftLineEditDist->setObjectName(QStringLiteral("leftLineEditDist"));

        gridLayout_4->addWidget(leftLineEditDist, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_4);

        groupBox_9 = new QGroupBox(centralWidget);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        gridLayout_5 = new QGridLayout(groupBox_9);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_2 = new QLabel(groupBox_9);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        rightLineEditDist = new QLineEdit(groupBox_9);
        rightLineEditDist->setObjectName(QStringLiteral("rightLineEditDist"));

        gridLayout_5->addWidget(rightLineEditDist, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_9);

        leftPreview = new QLabel(centralWidget);
        leftPreview->setObjectName(QStringLiteral("leftPreview"));

        horizontalLayout_2->addWidget(leftPreview);

        rightPreview = new QLabel(centralWidget);
        rightPreview->setObjectName(QStringLiteral("rightPreview"));

        horizontalLayout_2->addWidget(rightPreview);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_8->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        loadLeftDirBtn = new QPushButton(centralWidget);
        loadLeftDirBtn->setObjectName(QStringLiteral("loadLeftDirBtn"));

        verticalLayout_4->addWidget(loadLeftDirBtn);

        loadRightDirBtn = new QPushButton(centralWidget);
        loadRightDirBtn->setObjectName(QStringLiteral("loadRightDirBtn"));

        verticalLayout_4->addWidget(loadRightDirBtn);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        horizontalLayout = new QHBoxLayout(groupBox_6);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(groupBox_6);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        listWidget_2 = new QListWidget(groupBox_6);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        horizontalLayout->addWidget(listWidget_2);


        verticalLayout_4->addWidget(groupBox_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_3 = new QGridLayout(groupBox_7);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        substrateIDGuideBtn = new QPushButton(groupBox_7);
        substrateIDGuideBtn->setObjectName(QStringLiteral("substrateIDGuideBtn"));

        gridLayout_3->addWidget(substrateIDGuideBtn, 0, 0, 1, 1);

        loadFromCustomPlotA = new QPushButton(groupBox_7);
        loadFromCustomPlotA->setObjectName(QStringLiteral("loadFromCustomPlotA"));

        gridLayout_3->addWidget(loadFromCustomPlotA, 1, 0, 1, 1);

        loadFromCustomPlotB = new QPushButton(groupBox_7);
        loadFromCustomPlotB->setObjectName(QStringLiteral("loadFromCustomPlotB"));

        gridLayout_3->addWidget(loadFromCustomPlotB, 2, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_7);

        addNewRecordBtn = new QPushButton(centralWidget);
        addNewRecordBtn->setObjectName(QStringLiteral("addNewRecordBtn"));

        verticalLayout_3->addWidget(addNewRecordBtn);

        recordLeftTableView = new QTableView(centralWidget);
        recordLeftTableView->setObjectName(QStringLiteral("recordLeftTableView"));

        verticalLayout_3->addWidget(recordLeftTableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        verticalLayout_3->addLayout(horizontalLayout_3);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_8->addLayout(verticalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(10, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        leftCamMenuComboBox = new QComboBox(centralWidget);
        leftCamMenuComboBox->setObjectName(QStringLiteral("leftCamMenuComboBox"));

        horizontalLayout_6->addWidget(leftCamMenuComboBox);

        primarySubComboBoxLeft = new QComboBox(centralWidget);
        primarySubComboBoxLeft->setObjectName(QStringLiteral("primarySubComboBoxLeft"));

        horizontalLayout_6->addWidget(primarySubComboBoxLeft);

        secondarySubComboBoxLeft = new QComboBox(centralWidget);
        secondarySubComboBoxLeft->setObjectName(QStringLiteral("secondarySubComboBoxLeft"));

        horizontalLayout_6->addWidget(secondarySubComboBoxLeft);

        rightCamMenuComboBox = new QComboBox(centralWidget);
        rightCamMenuComboBox->setObjectName(QStringLiteral("rightCamMenuComboBox"));

        horizontalLayout_6->addWidget(rightCamMenuComboBox);

        primarySubComboBoxRight = new QComboBox(centralWidget);
        primarySubComboBoxRight->setObjectName(QStringLiteral("primarySubComboBoxRight"));

        horizontalLayout_6->addWidget(primarySubComboBoxRight);

        secondarySubComboBoxRight = new QComboBox(centralWidget);
        secondarySubComboBoxRight->setObjectName(QStringLiteral("secondarySubComboBoxRight"));

        horizontalLayout_6->addWidget(secondarySubComboBoxRight);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        leftView = new MGraphicsViewBothDrag(centralWidget);
        leftView->setObjectName(QStringLiteral("leftView"));
        leftView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        leftView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        leftView->setDragMode(QGraphicsView::ScrollHandDrag);
        leftView->setRubberBandSelectionMode(Qt::IntersectsItemShape);

        horizontalLayout_5->addWidget(leftView);

        rightView = new MGraphicsViewBothDrag(centralWidget);
        rightView->setObjectName(QStringLiteral("rightView"));
        rightView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        rightView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        rightView->setDragMode(QGraphicsView::ScrollHandDrag);

        horizontalLayout_5->addWidget(rightView);


        verticalLayout_5->addLayout(horizontalLayout_5);

        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_5->addWidget(buttonBox);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 90);

        horizontalLayout_7->addLayout(verticalLayout_5);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 90);

        horizontalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 90);

        gridLayout_8->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1691, 22));
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
        menuOpen->addAction(actionClose);
        menuSave->addAction(actionSave_As);
        menuSave->addAction(actionPrint_pdf);
        mainToolBar->addAction(actionNew_File);
        mainToolBar->addAction(actionSave_As);
        mainToolBar->addAction(actionWindowing);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionNew_File->setText(QApplication::translate("MainWindow", "New File", 0));
        actionNew_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0));
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionPrint_pdf->setText(QApplication::translate("MainWindow", "Print pdf", 0));
        actionPrint_pdf->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionWindowing->setText(QApplication::translate("MainWindow", "Windowing", 0));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Pan Controls", 0));
        rightSidePan->setText(QApplication::translate("MainWindow", "Right: Drag", 0));
        tiedPan->setText(QApplication::translate("MainWindow", "Independent", 0));
        zoomSelect->setText(QApplication::translate("MainWindow", "Zoom", 0));
        leftSidePan->setText(QApplication::translate("MainWindow", "Left: Drag", 0));
        connectCheckBox->setText(QApplication::translate("MainWindow", "Connected", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Pointer and Matching Operation(s)", 0));
        enablePointerRadioBtn->setText(QApplication::translate("MainWindow", "Enable Pointer", 0));
        disablePointerRadioBtn->setText(QApplication::translate("MainWindow", "Disable Pointer", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "LX Distance Calculation", 0));
        label->setText(QApplication::translate("MainWindow", "LX dot(s) distance:", 0));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "RX Distance Calculation", 0));
        label_2->setText(QApplication::translate("MainWindow", "RX dot(s) distance:", 0));
        leftPreview->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        rightPreview->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        loadLeftDirBtn->setText(QApplication::translate("MainWindow", "Load Left Directory", 0));
        loadRightDirBtn->setText(QApplication::translate("MainWindow", "Load Right Directory", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Directories List:", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "How to set substrate ID:", 0));
        substrateIDGuideBtn->setText(QApplication::translate("MainWindow", "Substarate ID Guidelines", 0));
        loadFromCustomPlotA->setText(QApplication::translate("MainWindow", "Upload Image for Left Camera", 0));
        loadFromCustomPlotB->setText(QApplication::translate("MainWindow", "Upload Image for Right Camera", 0));
        addNewRecordBtn->setText(QApplication::translate("MainWindow", "Print Sceen Left Cam", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Database Connection", 0));
        leftCamMenuComboBox->clear();
        leftCamMenuComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "All Objects", 0)
         << QApplication::translate("MainWindow", "Selected Object", 0)
         << QApplication::translate("MainWindow", "No Objects", 0)
        );
        primarySubComboBoxLeft->clear();
        primarySubComboBoxLeft->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Primary Substrate", 0)
         << QApplication::translate("MainWindow", "Rock", 0)
         << QApplication::translate("MainWindow", "Boulder", 0)
         << QApplication::translate("MainWindow", "Cobble", 0)
         << QApplication::translate("MainWindow", "Pebble", 0)
         << QApplication::translate("MainWindow", "Sand", 0)
         << QApplication::translate("MainWindow", "Mud", 0)
        );
        secondarySubComboBoxLeft->clear();
        secondarySubComboBoxLeft->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Secondary Substrate", 0)
         << QApplication::translate("MainWindow", "Rock", 0)
         << QApplication::translate("MainWindow", "Boulder", 0)
         << QApplication::translate("MainWindow", "Cobble", 0)
         << QApplication::translate("MainWindow", "Pebble", 0)
         << QApplication::translate("MainWindow", "Sand", 0)
         << QApplication::translate("MainWindow", "Mud", 0)
        );
        rightCamMenuComboBox->clear();
        rightCamMenuComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "All Objects", 0)
         << QApplication::translate("MainWindow", "Selected Object", 0)
         << QApplication::translate("MainWindow", "No Objects", 0)
        );
        primarySubComboBoxRight->clear();
        primarySubComboBoxRight->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Primary Substrate", 0)
         << QApplication::translate("MainWindow", "Rock", 0)
         << QApplication::translate("MainWindow", "Boulder", 0)
         << QApplication::translate("MainWindow", "Cobble", 0)
         << QApplication::translate("MainWindow", "Pebble", 0)
         << QApplication::translate("MainWindow", "Sand", 0)
         << QApplication::translate("MainWindow", "Mud", 0)
        );
        secondarySubComboBoxRight->clear();
        secondarySubComboBoxRight->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Secondary Substrate", 0)
         << QApplication::translate("MainWindow", "Rock", 0)
         << QApplication::translate("MainWindow", "Boulder", 0)
         << QApplication::translate("MainWindow", "Cobble", 0)
         << QApplication::translate("MainWindow", "Pebble", 0)
         << QApplication::translate("MainWindow", "Sand", 0)
         << QApplication::translate("MainWindow", "Mud", 0)
        );
        menuOpen->setTitle(QApplication::translate("MainWindow", "Open", 0));
        menuSave->setTitle(QApplication::translate("MainWindow", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
