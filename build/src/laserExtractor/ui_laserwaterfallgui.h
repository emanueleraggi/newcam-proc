/********************************************************************************
** Form generated from reading UI file 'laserwaterfallgui.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASERWATERFALLGUI_H
#define UI_LASERWATERFALLGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"
#include "qtinclude/imagelabel.h"

QT_BEGIN_NAMESPACE

class Ui_LaserWaterfallGui
{
public:
    QAction *actionOption_1;
    QAction *showPlotSettings;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QCustomPlot *customPlot;
    QHBoxLayout *horizontalLayout;
    QPushButton *camCalBtn;
    QPushButton *laserCalBtn;
    QPushButton *imageBtn;
    QPushButton *outfileBtn;
    QPushButton *runBtn;
    QMenuBar *menubar;
    QMenu *menuWindow;
    QStatusBar *statusbar;
    QDockWidget *plotSettings;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *yWinSize;
    QLabel *label_2;
    QComboBox *dataTypeSelect;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *minRange;
    QSpinBox *maxRange;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *yPos;
    QCheckBox *trackingCheck;
    QLabel *label_5;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QSpinBox *refreshRate;
    QLabel *label_6;
    QSpinBox *maxRows;
    QLabel *label_10;
    QSpinBox *spinBox;
    QLabel *label_12;
    QSpinBox *numThreads;
    QLabel *label_7;
    QLabel *fpsLbl;
    QDoubleSpinBox *threshVal;
    QLabel *label_16;
    QLabel *label_9;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QSpinBox *lcmSkipBox;
    QCheckBox *expandedCheckBox;
    QPushButton *savePreviewImg;
    ImageLabel *extractionPreview;
    ImageLabel *spPreview;
    QSlider *vScaleSlider;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *m1;
    QDoubleSpinBox *b1;
    QDoubleSpinBox *m2;
    QDoubleSpinBox *b2;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QLabel *plotClickLbl;

    void setupUi(QMainWindow *LaserWaterfallGui)
    {
        if (LaserWaterfallGui->objectName().isEmpty())
            LaserWaterfallGui->setObjectName(QStringLiteral("LaserWaterfallGui"));
        LaserWaterfallGui->resize(1048, 1032);
        actionOption_1 = new QAction(LaserWaterfallGui);
        actionOption_1->setObjectName(QStringLiteral("actionOption_1"));
        showPlotSettings = new QAction(LaserWaterfallGui);
        showPlotSettings->setObjectName(QStringLiteral("showPlotSettings"));
        centralwidget = new QWidget(LaserWaterfallGui);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy);
        customPlot->setCursor(QCursor(Qt::CrossCursor));
        customPlot->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(customPlot);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        camCalBtn = new QPushButton(centralwidget);
        camCalBtn->setObjectName(QStringLiteral("camCalBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(camCalBtn->sizePolicy().hasHeightForWidth());
        camCalBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(camCalBtn);

        laserCalBtn = new QPushButton(centralwidget);
        laserCalBtn->setObjectName(QStringLiteral("laserCalBtn"));
        sizePolicy1.setHeightForWidth(laserCalBtn->sizePolicy().hasHeightForWidth());
        laserCalBtn->setSizePolicy(sizePolicy1);
        laserCalBtn->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(laserCalBtn);

        imageBtn = new QPushButton(centralwidget);
        imageBtn->setObjectName(QStringLiteral("imageBtn"));
        sizePolicy1.setHeightForWidth(imageBtn->sizePolicy().hasHeightForWidth());
        imageBtn->setSizePolicy(sizePolicy1);
        imageBtn->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(imageBtn);

        outfileBtn = new QPushButton(centralwidget);
        outfileBtn->setObjectName(QStringLiteral("outfileBtn"));
        sizePolicy1.setHeightForWidth(outfileBtn->sizePolicy().hasHeightForWidth());
        outfileBtn->setSizePolicy(sizePolicy1);
        outfileBtn->setToolTipDuration(-1);
        outfileBtn->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(outfileBtn);

        runBtn = new QPushButton(centralwidget);
        runBtn->setObjectName(QStringLiteral("runBtn"));
        sizePolicy1.setHeightForWidth(runBtn->sizePolicy().hasHeightForWidth());
        runBtn->setSizePolicy(sizePolicy1);
        runBtn->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(runBtn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout);

        LaserWaterfallGui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LaserWaterfallGui);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1048, 22));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        LaserWaterfallGui->setMenuBar(menubar);
        statusbar = new QStatusBar(LaserWaterfallGui);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LaserWaterfallGui->setStatusBar(statusbar);
        plotSettings = new QDockWidget(LaserWaterfallGui);
        plotSettings->setObjectName(QStringLiteral("plotSettings"));
        plotSettings->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(plotSettings->sizePolicy().hasHeightForWidth());
        plotSettings->setSizePolicy(sizePolicy2);
        plotSettings->setMinimumSize(QSize(400, 988));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        dockWidgetContents_2->setMaximumSize(QSize(500, 16777215));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_8 = new QLabel(dockWidgetContents_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 50));
        label_8->setStyleSheet(QStringLiteral("font: 75 14pt \"Ubuntu\";"));

        verticalLayout_2->addWidget(label_8);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(dockWidgetContents_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(125, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        yWinSize = new QSpinBox(dockWidgetContents_2);
        yWinSize->setObjectName(QStringLiteral("yWinSize"));
        yWinSize->setMinimum(100);
        yWinSize->setMaximum(10000);
        yWinSize->setSingleStep(100);
        yWinSize->setValue(800);

        formLayout->setWidget(0, QFormLayout::FieldRole, yWinSize);

        label_2 = new QLabel(dockWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        dataTypeSelect = new QComboBox(dockWidgetContents_2);
        dataTypeSelect->setObjectName(QStringLiteral("dataTypeSelect"));
        dataTypeSelect->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(2, QFormLayout::FieldRole, dataTypeSelect);

        label_3 = new QLabel(dockWidgetContents_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minRange = new QSpinBox(dockWidgetContents_2);
        minRange->setObjectName(QStringLiteral("minRange"));
        minRange->setStyleSheet(QStringLiteral(""));
        minRange->setMaximum(10000);
        minRange->setSingleStep(10);
        minRange->setValue(2000);

        horizontalLayout_2->addWidget(minRange);

        maxRange = new QSpinBox(dockWidgetContents_2);
        maxRange->setObjectName(QStringLiteral("maxRange"));
        maxRange->setStyleSheet(QStringLiteral(""));
        maxRange->setMinimum(1);
        maxRange->setMaximum(10000);
        maxRange->setSingleStep(10);
        maxRange->setValue(5000);

        horizontalLayout_2->addWidget(maxRange);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);

        label_11 = new QLabel(dockWidgetContents_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_11);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        yPos = new QSpinBox(dockWidgetContents_2);
        yPos->setObjectName(QStringLiteral("yPos"));
        yPos->setStyleSheet(QStringLiteral(""));
        yPos->setMinimum(100);
        yPos->setMaximum(5000000);
        yPos->setSingleStep(50);

        horizontalLayout_3->addWidget(yPos);

        trackingCheck = new QCheckBox(dockWidgetContents_2);
        trackingCheck->setObjectName(QStringLiteral("trackingCheck"));
        trackingCheck->setChecked(true);

        horizontalLayout_3->addWidget(trackingCheck);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_3);


        verticalLayout_2->addLayout(formLayout);

        label_5 = new QLabel(dockWidgetContents_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 50));
        label_5->setStyleSheet(QStringLiteral("font: 75 14pt \"Ubuntu\";"));

        verticalLayout_2->addWidget(label_5);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_4 = new QLabel(dockWidgetContents_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(125, 0));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        refreshRate = new QSpinBox(dockWidgetContents_2);
        refreshRate->setObjectName(QStringLiteral("refreshRate"));
        refreshRate->setMinimum(100);
        refreshRate->setMaximum(10000);
        refreshRate->setSingleStep(100);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, refreshRate);

        label_6 = new QLabel(dockWidgetContents_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("background-color: #31363b;"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_6);

        maxRows = new QSpinBox(dockWidgetContents_2);
        maxRows->setObjectName(QStringLiteral("maxRows"));
        maxRows->setMinimum(100);
        maxRows->setMaximum(1500);
        maxRows->setSingleStep(100);
        maxRows->setValue(400);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, maxRows);

        label_10 = new QLabel(dockWidgetContents_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_10);

        spinBox = new QSpinBox(dockWidgetContents_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(10000);
        spinBox->setMaximum(100000);
        spinBox->setSingleStep(1000);
        spinBox->setValue(10000);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, spinBox);

        label_12 = new QLabel(dockWidgetContents_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("background-color: #31363b;"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_12);

        numThreads = new QSpinBox(dockWidgetContents_2);
        numThreads->setObjectName(QStringLiteral("numThreads"));
        numThreads->setMinimum(2);
        numThreads->setMaximum(32);
        numThreads->setValue(6);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, numThreads);

        label_7 = new QLabel(dockWidgetContents_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_7);

        fpsLbl = new QLabel(dockWidgetContents_2);
        fpsLbl->setObjectName(QStringLiteral("fpsLbl"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, fpsLbl);

        threshVal = new QDoubleSpinBox(dockWidgetContents_2);
        threshVal->setObjectName(QStringLiteral("threshVal"));
        threshVal->setMinimum(-2);
        threshVal->setMaximum(10);
        threshVal->setSingleStep(0.1);
        threshVal->setValue(2);

        formLayout_4->setWidget(5, QFormLayout::FieldRole, threshVal);

        label_16 = new QLabel(dockWidgetContents_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QStringLiteral("background-color: #31363b;"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_16);


        verticalLayout_2->addLayout(formLayout_4);

        label_9 = new QLabel(dockWidgetContents_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(16777215, 50));
        label_9->setStyleSheet(QStringLiteral("font: 75 14pt \"Ubuntu\";"));

        verticalLayout_2->addWidget(label_9);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));

        verticalLayout_2->addLayout(formLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_15 = new QLabel(dockWidgetContents_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_4->addWidget(label_15);

        lcmSkipBox = new QSpinBox(dockWidgetContents_2);
        lcmSkipBox->setObjectName(QStringLiteral("lcmSkipBox"));
        lcmSkipBox->setMinimumSize(QSize(87, 0));
        lcmSkipBox->setMaximum(10);

        horizontalLayout_4->addWidget(lcmSkipBox);

        expandedCheckBox = new QCheckBox(dockWidgetContents_2);
        expandedCheckBox->setObjectName(QStringLiteral("expandedCheckBox"));

        horizontalLayout_4->addWidget(expandedCheckBox);

        savePreviewImg = new QPushButton(dockWidgetContents_2);
        savePreviewImg->setObjectName(QStringLiteral("savePreviewImg"));

        horizontalLayout_4->addWidget(savePreviewImg);


        verticalLayout_2->addLayout(horizontalLayout_4);

        extractionPreview = new ImageLabel(dockWidgetContents_2);
        extractionPreview->setObjectName(QStringLiteral("extractionPreview"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(extractionPreview->sizePolicy().hasHeightForWidth());
        extractionPreview->setSizePolicy(sizePolicy3);
        extractionPreview->setMinimumSize(QSize(300, 240));
        extractionPreview->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        extractionPreview->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(extractionPreview);

        spPreview = new ImageLabel(dockWidgetContents_2);
        spPreview->setObjectName(QStringLiteral("spPreview"));
        sizePolicy3.setHeightForWidth(spPreview->sizePolicy().hasHeightForWidth());
        spPreview->setSizePolicy(sizePolicy3);
        spPreview->setMinimumSize(QSize(300, 100));
        spPreview->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        spPreview->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(spPreview);

        vScaleSlider = new QSlider(dockWidgetContents_2);
        vScaleSlider->setObjectName(QStringLiteral("vScaleSlider"));
        vScaleSlider->setMinimum(4);
        vScaleSlider->setMaximum(16);
        vScaleSlider->setPageStep(1);
        vScaleSlider->setValue(10);
        vScaleSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(vScaleSlider);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        m1 = new QDoubleSpinBox(dockWidgetContents_2);
        m1->setObjectName(QStringLiteral("m1"));
        m1->setMinimum(-100);
        m1->setMaximum(100);
        m1->setValue(-1);

        horizontalLayout_5->addWidget(m1);

        b1 = new QDoubleSpinBox(dockWidgetContents_2);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setDecimals(0);
        b1->setMaximum(100000);
        b1->setSingleStep(100);
        b1->setValue(50000);

        horizontalLayout_5->addWidget(b1);

        m2 = new QDoubleSpinBox(dockWidgetContents_2);
        m2->setObjectName(QStringLiteral("m2"));
        m2->setMinimum(-100);
        m2->setMaximum(100);
        m2->setValue(4);

        horizontalLayout_5->addWidget(m2);

        b2 = new QDoubleSpinBox(dockWidgetContents_2);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setMinimum(-50002);
        b2->setMaximum(50000);
        b2->setSingleStep(100);

        horizontalLayout_5->addWidget(b2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        progressBar = new QProgressBar(dockWidgetContents_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimum(0);
        progressBar->setMaximum(1);
        progressBar->setValue(1);
        progressBar->setTextDirection(QProgressBar::BottomToTop);

        verticalLayout_2->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        plotClickLbl = new QLabel(dockWidgetContents_2);
        plotClickLbl->setObjectName(QStringLiteral("plotClickLbl"));

        verticalLayout_2->addWidget(plotClickLbl);

        plotSettings->setWidget(dockWidgetContents_2);
        LaserWaterfallGui->addDockWidget(static_cast<Qt::DockWidgetArea>(2), plotSettings);

        menubar->addAction(menuWindow->menuAction());
        menuWindow->addAction(showPlotSettings);

        retranslateUi(LaserWaterfallGui);

        QMetaObject::connectSlotsByName(LaserWaterfallGui);
    } // setupUi

    void retranslateUi(QMainWindow *LaserWaterfallGui)
    {
        LaserWaterfallGui->setWindowTitle(QApplication::translate("LaserWaterfallGui", "Laser Waterfall", 0));
        actionOption_1->setText(QApplication::translate("LaserWaterfallGui", "option 1", 0));
        showPlotSettings->setText(QApplication::translate("LaserWaterfallGui", "Show Plot Settings", 0));
        camCalBtn->setText(QApplication::translate("LaserWaterfallGui", "Select Camera Cal", 0));
        laserCalBtn->setText(QApplication::translate("LaserWaterfallGui", "Select Laser Cal", 0));
        imageBtn->setText(QApplication::translate("LaserWaterfallGui", "Select Image Directory", 0));
#ifndef QT_NO_TOOLTIP
        outfileBtn->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        outfileBtn->setText(QApplication::translate("LaserWaterfallGui", "Set Output File", 0));
#ifndef QT_NO_TOOLTIP
        runBtn->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        runBtn->setText(QApplication::translate("LaserWaterfallGui", "Run", 0));
        menuWindow->setTitle(QApplication::translate("LaserWaterfallGui", "Window", 0));
        plotSettings->setWindowTitle(QString());
        label_8->setText(QApplication::translate("LaserWaterfallGui", "Data View:", 0));
        label->setText(QApplication::translate("LaserWaterfallGui", "Y-window", 0));
        label_2->setText(QApplication::translate("LaserWaterfallGui", "Data View", 0));
        dataTypeSelect->clear();
        dataTypeSelect->insertItems(0, QStringList()
         << QApplication::translate("LaserWaterfallGui", "Z-Distance", 0)
         << QApplication::translate("LaserWaterfallGui", "Intensity", 0)
         << QApplication::translate("LaserWaterfallGui", "Intensity Normalized", 0)
         << QApplication::translate("LaserWaterfallGui", "V-Coord", 0)
         << QApplication::translate("LaserWaterfallGui", "Vent Moment", 0)
         << QApplication::translate("LaserWaterfallGui", "Vent Class", 0)
        );
        label_3->setText(QApplication::translate("LaserWaterfallGui", "Data Range", 0));
        label_11->setText(QApplication::translate("LaserWaterfallGui", "Y-Position", 0));
        trackingCheck->setText(QApplication::translate("LaserWaterfallGui", "Tracking", 0));
        label_5->setText(QApplication::translate("LaserWaterfallGui", "Performance:", 0));
        label_4->setText(QApplication::translate("LaserWaterfallGui", "Draw Interval", 0));
        label_6->setText(QApplication::translate("LaserWaterfallGui", "Max Rows", 0));
        label_10->setText(QApplication::translate("LaserWaterfallGui", "History Length", 0));
        label_12->setText(QApplication::translate("LaserWaterfallGui", "Threads", 0));
        label_7->setText(QApplication::translate("LaserWaterfallGui", "Images/Sec", 0));
        fpsLbl->setText(QApplication::translate("LaserWaterfallGui", "0", 0));
        label_16->setText(QApplication::translate("LaserWaterfallGui", "Threshold Param", 0));
        label_9->setText(QApplication::translate("LaserWaterfallGui", "Extraction:", 0));
        label_15->setText(QApplication::translate("LaserWaterfallGui", "LCM skip", 0));
        expandedCheckBox->setText(QApplication::translate("LaserWaterfallGui", "SPV Preview", 0));
        savePreviewImg->setText(QApplication::translate("LaserWaterfallGui", "SaveImages...", 0));
        extractionPreview->setText(QApplication::translate("LaserWaterfallGui", "TextLabel", 0));
        spPreview->setText(QApplication::translate("LaserWaterfallGui", "TextLabel", 0));
        progressBar->setFormat(QApplication::translate("LaserWaterfallGui", "%v/%m  %p%", 0));
        plotClickLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LaserWaterfallGui: public Ui_LaserWaterfallGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASERWATERFALLGUI_H
