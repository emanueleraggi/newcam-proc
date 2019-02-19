/********************************************************************************
** Form generated from reading UI file 'windowingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWINGDIALOG_H
#define UI_WINDOWINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windowingDialog
{
public:
    QAction *actionGraph;
    QGridLayout *gridLayout_10;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelShowPreviewCamB;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_23;
    QLabel *label_21;
    QLabel *label_22;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_12;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_3;
    QLabel *labelCroppedA;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *rightArrowCroppedA;
    QPushButton *imageCroppedABtn;
    QToolButton *leftArrowCroppedA;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_6;
    QLabel *labelCroppedB;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *rightArrowCroppedB;
    QPushButton *imageCroppedBBtn;
    QToolButton *leftArrowCroppedB;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEditfolderA;
    QLineEdit *lineEditfolderB;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelShowCamB;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loadCaliCamB;
    QListWidget *listWidgetCamB;
    QProgressBar *matchProgressBarRight;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_7;
    QLabel *label_2;
    QLineEdit *bestMatchPositionLineEdit;
    QLabel *label_5;
    QLineEdit *bestMatchValueLineEdit;
    QLabel *label_6;
    QLineEdit *disparityLineEdit;
    QFrame *line;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *rectifyImgCamABtn;
    QPushButton *saveToDBCamA;
    QPushButton *saveToFileBtnCamA;
    QProgressBar *progressBar;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *SSDleftLineEdit;
    QLabel *label;
    QRadioButton *radioButton;
    QSpinBox *regionSizeSpinBox;
    QToolButton *toolButton;
    QLabel *label_7;
    QRadioButton *disableMatchBtn;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *leftCoordX;
    QLineEdit *leftCoordY;
    QLineEdit *leftCoordDepth;
    QLabel *labelShowPreviewCamA;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *loadCaliCamA;
    QListWidget *listWidgetCamA;
    QLabel *labelShowCamA;
    QProgressBar *matchProgressBarLeft;

    void setupUi(QDialog *windowingDialog)
    {
        if (windowingDialog->objectName().isEmpty())
            windowingDialog->setObjectName(QStringLiteral("windowingDialog"));
        windowingDialog->resize(1566, 875);
        actionGraph = new QAction(windowingDialog);
        actionGraph->setObjectName(QStringLiteral("actionGraph"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/graph3.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGraph->setIcon(icon);
        gridLayout_10 = new QGridLayout(windowingDialog);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        tabWidget = new QTabWidget(windowingDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_9 = new QGridLayout(tab);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));

        gridLayout_9->addLayout(verticalLayout_10, 0, 1, 3, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_9->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(582, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_9->addWidget(label_4, 0, 4, 1, 1, Qt::AlignRight);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));

        gridLayout_9->addLayout(verticalLayout_9, 0, 3, 3, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelShowPreviewCamB = new QLabel(tab);
        labelShowPreviewCamB->setObjectName(QStringLiteral("labelShowPreviewCamB"));
        labelShowPreviewCamB->setAutoFillBackground(true);

        horizontalLayout_4->addWidget(labelShowPreviewCamB);

        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_8 = new QGridLayout(groupBox_6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_7->addWidget(label_23);

        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout_7->addWidget(label_21);

        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_7->addWidget(label_22);


        horizontalLayout_6->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        lineEdit_11 = new QLineEdit(groupBox_6);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        verticalLayout_8->addWidget(lineEdit_11);

        lineEdit_10 = new QLineEdit(groupBox_6);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        verticalLayout_8->addWidget(lineEdit_10);

        lineEdit_12 = new QLineEdit(groupBox_6);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        verticalLayout_8->addWidget(lineEdit_12);


        horizontalLayout_6->addLayout(verticalLayout_8);


        gridLayout_8->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_11 = new QGridLayout(groupBox_7);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelCroppedA = new QLabel(groupBox_7);
        labelCroppedA->setObjectName(QStringLiteral("labelCroppedA"));
        labelCroppedA->setAutoFillBackground(true);

        gridLayout_3->addWidget(labelCroppedA, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        rightArrowCroppedA = new QToolButton(groupBox_7);
        rightArrowCroppedA->setObjectName(QStringLiteral("rightArrowCroppedA"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/leftArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightArrowCroppedA->setIcon(icon1);

        horizontalLayout_7->addWidget(rightArrowCroppedA);

        imageCroppedABtn = new QPushButton(groupBox_7);
        imageCroppedABtn->setObjectName(QStringLiteral("imageCroppedABtn"));

        horizontalLayout_7->addWidget(imageCroppedABtn);

        leftArrowCroppedA = new QToolButton(groupBox_7);
        leftArrowCroppedA->setObjectName(QStringLiteral("leftArrowCroppedA"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/rightArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftArrowCroppedA->setIcon(icon2);

        horizontalLayout_7->addWidget(leftArrowCroppedA);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_3, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_7);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_12 = new QGridLayout(groupBox_4);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        labelCroppedB = new QLabel(groupBox_4);
        labelCroppedB->setObjectName(QStringLiteral("labelCroppedB"));
        labelCroppedB->setAutoFillBackground(true);

        gridLayout_6->addWidget(labelCroppedB, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        rightArrowCroppedB = new QToolButton(groupBox_4);
        rightArrowCroppedB->setObjectName(QStringLiteral("rightArrowCroppedB"));
        rightArrowCroppedB->setIcon(icon1);

        horizontalLayout_8->addWidget(rightArrowCroppedB);

        imageCroppedBBtn = new QPushButton(groupBox_4);
        imageCroppedBBtn->setObjectName(QStringLiteral("imageCroppedBBtn"));

        horizontalLayout_8->addWidget(imageCroppedBBtn);

        leftArrowCroppedB = new QToolButton(groupBox_4);
        leftArrowCroppedB->setObjectName(QStringLiteral("leftArrowCroppedB"));
        leftArrowCroppedB->setIcon(icon2);

        horizontalLayout_8->addWidget(leftArrowCroppedB);


        gridLayout_6->addLayout(horizontalLayout_8, 1, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_6, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        lineEditfolderA = new QLineEdit(groupBox_3);
        lineEditfolderA->setObjectName(QStringLiteral("lineEditfolderA"));

        gridLayout_4->addWidget(lineEditfolderA, 0, 0, 1, 1);

        lineEditfolderB = new QLineEdit(groupBox_3);
        lineEditfolderB->setObjectName(QStringLiteral("lineEditfolderB"));

        gridLayout_4->addWidget(lineEditfolderB, 1, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelShowCamB = new QLabel(tab);
        labelShowCamB->setObjectName(QStringLiteral("labelShowCamB"));
        labelShowCamB->setAutoFillBackground(true);

        horizontalLayout_3->addWidget(labelShowCamB);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        loadCaliCamB = new QPushButton(tab);
        loadCaliCamB->setObjectName(QStringLiteral("loadCaliCamB"));

        verticalLayout_2->addWidget(loadCaliCamB);

        listWidgetCamB = new QListWidget(tab);
        listWidgetCamB->setObjectName(QStringLiteral("listWidgetCamB"));

        verticalLayout_2->addWidget(listWidgetCamB);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3->setStretch(0, 9);
        horizontalLayout_3->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_3);

        matchProgressBarRight = new QProgressBar(tab);
        matchProgressBarRight->setObjectName(QStringLiteral("matchProgressBarRight"));
        matchProgressBarRight->setValue(24);

        verticalLayout_3->addWidget(matchProgressBarRight);


        gridLayout_9->addLayout(verticalLayout_3, 3, 3, 1, 2);

        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_7 = new QGridLayout(groupBox_8);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_2 = new QLabel(groupBox_8);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        bestMatchPositionLineEdit = new QLineEdit(groupBox_8);
        bestMatchPositionLineEdit->setObjectName(QStringLiteral("bestMatchPositionLineEdit"));

        gridLayout_7->addWidget(bestMatchPositionLineEdit, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_8);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_7->addWidget(label_5, 0, 2, 1, 1);

        bestMatchValueLineEdit = new QLineEdit(groupBox_8);
        bestMatchValueLineEdit->setObjectName(QStringLiteral("bestMatchValueLineEdit"));

        gridLayout_7->addWidget(bestMatchValueLineEdit, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox_8);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_7->addWidget(label_6, 0, 4, 1, 1);

        disparityLineEdit = new QLineEdit(groupBox_8);
        disparityLineEdit->setObjectName(QStringLiteral("disparityLineEdit"));

        gridLayout_7->addWidget(disparityLineEdit, 0, 5, 1, 1);


        gridLayout_9->addWidget(groupBox_8, 4, 0, 1, 1);

        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line, 1, 2, 3, 1);

        horizontalSpacer_4 = new QSpacerItem(582, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 1, 4, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        rectifyImgCamABtn = new QPushButton(groupBox);
        rectifyImgCamABtn->setObjectName(QStringLiteral("rectifyImgCamABtn"));

        gridLayout->addWidget(rectifyImgCamABtn, 1, 0, 1, 1);

        saveToDBCamA = new QPushButton(groupBox);
        saveToDBCamA->setObjectName(QStringLiteral("saveToDBCamA"));

        gridLayout->addWidget(saveToDBCamA, 2, 0, 1, 1);

        saveToFileBtnCamA = new QPushButton(groupBox);
        saveToFileBtnCamA->setObjectName(QStringLiteral("saveToFileBtnCamA"));

        gridLayout->addWidget(saveToFileBtnCamA, 2, 1, 1, 1);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 1, 1, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        SSDleftLineEdit = new QLineEdit(groupBox_2);
        SSDleftLineEdit->setObjectName(QStringLiteral("SSDleftLineEdit"));

        gridLayout_2->addWidget(SSDleftLineEdit, 1, 2, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 2);

        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_2->addWidget(radioButton, 0, 0, 1, 2);

        regionSizeSpinBox = new QSpinBox(groupBox_2);
        regionSizeSpinBox->setObjectName(QStringLiteral("regionSizeSpinBox"));
        regionSizeSpinBox->setValue(9);

        gridLayout_2->addWidget(regionSizeSpinBox, 2, 2, 1, 1);

        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setIcon(icon);

        gridLayout_2->addWidget(toolButton, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        disableMatchBtn = new QRadioButton(groupBox_2);
        disableMatchBtn->setObjectName(QStringLiteral("disableMatchBtn"));

        gridLayout_2->addWidget(disableMatchBtn, 0, 2, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_5->addWidget(label_19);

        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_5->addWidget(label_20);

        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_5->addWidget(label_18);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        leftCoordX = new QLineEdit(groupBox_5);
        leftCoordX->setObjectName(QStringLiteral("leftCoordX"));

        verticalLayout_6->addWidget(leftCoordX);

        leftCoordY = new QLineEdit(groupBox_5);
        leftCoordY->setObjectName(QStringLiteral("leftCoordY"));

        verticalLayout_6->addWidget(leftCoordY);

        leftCoordDepth = new QLineEdit(groupBox_5);
        leftCoordDepth->setObjectName(QStringLiteral("leftCoordDepth"));

        verticalLayout_6->addWidget(leftCoordDepth);


        horizontalLayout_5->addLayout(verticalLayout_6);


        gridLayout_5->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_5);

        labelShowPreviewCamA = new QLabel(tab);
        labelShowPreviewCamA->setObjectName(QStringLiteral("labelShowPreviewCamA"));
        labelShowPreviewCamA->setAutoFillBackground(true);

        horizontalLayout->addWidget(labelShowPreviewCamA);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        loadCaliCamA = new QPushButton(tab);
        loadCaliCamA->setObjectName(QStringLiteral("loadCaliCamA"));

        verticalLayout->addWidget(loadCaliCamA);

        listWidgetCamA = new QListWidget(tab);
        listWidgetCamA->setObjectName(QStringLiteral("listWidgetCamA"));

        verticalLayout->addWidget(listWidgetCamA);


        horizontalLayout_2->addLayout(verticalLayout);

        labelShowCamA = new QLabel(tab);
        labelShowCamA->setObjectName(QStringLiteral("labelShowCamA"));
        labelShowCamA->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(labelShowCamA);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 9);

        verticalLayout_4->addLayout(horizontalLayout_2);

        matchProgressBarLeft = new QProgressBar(tab);
        matchProgressBarLeft->setObjectName(QStringLiteral("matchProgressBarLeft"));
        matchProgressBarLeft->setValue(24);

        verticalLayout_4->addWidget(matchProgressBarLeft);


        gridLayout_9->addLayout(verticalLayout_4, 3, 0, 1, 2);

        tabWidget->addTab(tab, QString());

        gridLayout_10->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(windowingDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(windowingDialog);
    } // setupUi

    void retranslateUi(QDialog *windowingDialog)
    {
        windowingDialog->setWindowTitle(QApplication::translate("windowingDialog", "Dialog", 0));
        actionGraph->setText(QApplication::translate("windowingDialog", "Graph", 0));
        actionGraph->setShortcut(QApplication::translate("windowingDialog", "Ctrl+G", 0));
        label_3->setText(QApplication::translate("windowingDialog", "Camera Calibration Data (CAM-A)", 0));
        label_4->setText(QApplication::translate("windowingDialog", "Camera Calibration Data (CAM-B)", 0));
        labelShowPreviewCamB->setText(QApplication::translate("windowingDialog", "TextLabel", 0));
        groupBox_6->setTitle(QApplication::translate("windowingDialog", "Coordinates Right CAM", 0));
        label_23->setText(QApplication::translate("windowingDialog", "X Coord:", 0));
        label_21->setText(QApplication::translate("windowingDialog", "Y Coord:", 0));
        label_22->setText(QApplication::translate("windowingDialog", "Depth:", 0));
        groupBox_7->setTitle(QApplication::translate("windowingDialog", "Cropped Image A", 0));
        labelCroppedA->setText(QApplication::translate("windowingDialog", "TextLabel", 0));
        rightArrowCroppedA->setText(QApplication::translate("windowingDialog", "...", 0));
        imageCroppedABtn->setText(QApplication::translate("windowingDialog", "Nav Folder", 0));
        leftArrowCroppedA->setText(QApplication::translate("windowingDialog", "...", 0));
        groupBox_4->setTitle(QApplication::translate("windowingDialog", "Cropped Image B", 0));
        labelCroppedB->setText(QApplication::translate("windowingDialog", "TextLabel", 0));
        rightArrowCroppedB->setText(QApplication::translate("windowingDialog", "...", 0));
        imageCroppedBBtn->setText(QApplication::translate("windowingDialog", "Nav Folder", 0));
        leftArrowCroppedB->setText(QApplication::translate("windowingDialog", "...", 0));
        groupBox_3->setTitle(QApplication::translate("windowingDialog", "Image Operation", 0));
        labelShowCamB->setText(QApplication::translate("windowingDialog", "TextLabel", 0));
        loadCaliCamB->setText(QApplication::translate("windowingDialog", "Upload CAM -B data", 0));
        groupBox_8->setTitle(QApplication::translate("windowingDialog", "Outcome", 0));
        label_2->setText(QApplication::translate("windowingDialog", "Best match position", 0));
        label_5->setText(QApplication::translate("windowingDialog", "Best match value", 0));
        label_6->setText(QApplication::translate("windowingDialog", "Disparity", 0));
        groupBox->setTitle(QApplication::translate("windowingDialog", "Image Operation", 0));
        rectifyImgCamABtn->setText(QApplication::translate("windowingDialog", "Rectify Img", 0));
        saveToDBCamA->setText(QApplication::translate("windowingDialog", "Save to DB", 0));
        saveToFileBtnCamA->setText(QApplication::translate("windowingDialog", "Save To File", 0));
        groupBox_2->setTitle(QApplication::translate("windowingDialog", "Matching Operations", 0));
        label->setText(QApplication::translate("windowingDialog", "Set Region Size", 0));
        radioButton->setText(QApplication::translate("windowingDialog", "Find Match", 0));
        toolButton->setText(QApplication::translate("windowingDialog", "...", 0));
        label_7->setText(QApplication::translate("windowingDialog", "SSD", 0));
        disableMatchBtn->setText(QApplication::translate("windowingDialog", "Disable Match", 0));
        groupBox_5->setTitle(QApplication::translate("windowingDialog", "Coordinates Left CAM", 0));
        label_19->setText(QApplication::translate("windowingDialog", "X Coord:", 0));
        label_20->setText(QApplication::translate("windowingDialog", "Y Coord:", 0));
        label_18->setText(QApplication::translate("windowingDialog", "Depth", 0));
        labelShowPreviewCamA->setText(QApplication::translate("windowingDialog", "TextLabel", 0));
        loadCaliCamA->setText(QApplication::translate("windowingDialog", "Upload CAM -A data", 0));
        labelShowCamA->setText(QApplication::translate("windowingDialog", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("windowingDialog", "Rectification", 0));
    } // retranslateUi

};

namespace Ui {
    class windowingDialog: public Ui_windowingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWINGDIALOG_H
