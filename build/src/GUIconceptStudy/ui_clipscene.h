/********************************************************************************
** Form generated from reading UI file 'clipscene.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPSCENE_H
#define UI_CLIPSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clipScene
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label_26;
    QGraphicsView *graphicsViewClipped;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *imageLineEdit;
    QLineEdit *latitudeLineEdit;
    QLineEdit *longitudeLineEdit;
    QLineEdit *depthLineEdit;
    QLineEdit *lengthLineEdit;
    QComboBox *primarySubstrateComboBox;
    QComboBox *secondarySubstrateComboBox;
    QComboBox *speciesComboBox;
    QComboBox *addParamComboBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *saveCroppedCBox;
    QCheckBox *dontSaveCroppedCBox;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *ACoord;
    QLineEdit *BCoord;
    QLineEdit *CCoord;
    QLineEdit *DCoord;
    QGraphicsView *graphicsView_3;
    QLabel *label_27;
    QWidget *tab_5;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    QLineEdit *redLineIntensityEdit;
    QLabel *redImg;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLabel *label_13;
    QLabel *greenImg;
    QLineEdit *greenLineIntensityEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_8;
    QLabel *label_14;
    QLineEdit *blueLineIntensityEdit;
    QLabel *blueImg;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QPushButton *acceptBtn;

    void setupUi(QDialog *clipScene)
    {
        if (clipScene->objectName().isEmpty())
            clipScene->setObjectName(QStringLiteral("clipScene"));
        clipScene->resize(391, 642);
        gridLayout = new QGridLayout(clipScene);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(clipScene);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_26 = new QLabel(tab);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_2->addWidget(label_26, 0, 0, 1, 1);

        graphicsViewClipped = new QGraphicsView(tab);
        graphicsViewClipped->setObjectName(QStringLiteral("graphicsViewClipped"));

        gridLayout_2->addWidget(graphicsViewClipped, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        imageLineEdit = new QLineEdit(tab);
        imageLineEdit->setObjectName(QStringLiteral("imageLineEdit"));

        verticalLayout_2->addWidget(imageLineEdit);

        latitudeLineEdit = new QLineEdit(tab);
        latitudeLineEdit->setObjectName(QStringLiteral("latitudeLineEdit"));

        verticalLayout_2->addWidget(latitudeLineEdit);

        longitudeLineEdit = new QLineEdit(tab);
        longitudeLineEdit->setObjectName(QStringLiteral("longitudeLineEdit"));

        verticalLayout_2->addWidget(longitudeLineEdit);

        depthLineEdit = new QLineEdit(tab);
        depthLineEdit->setObjectName(QStringLiteral("depthLineEdit"));

        verticalLayout_2->addWidget(depthLineEdit);

        lengthLineEdit = new QLineEdit(tab);
        lengthLineEdit->setObjectName(QStringLiteral("lengthLineEdit"));

        verticalLayout_2->addWidget(lengthLineEdit);

        primarySubstrateComboBox = new QComboBox(tab);
        primarySubstrateComboBox->setObjectName(QStringLiteral("primarySubstrateComboBox"));

        verticalLayout_2->addWidget(primarySubstrateComboBox);

        secondarySubstrateComboBox = new QComboBox(tab);
        secondarySubstrateComboBox->setObjectName(QStringLiteral("secondarySubstrateComboBox"));

        verticalLayout_2->addWidget(secondarySubstrateComboBox);

        speciesComboBox = new QComboBox(tab);
        speciesComboBox->setObjectName(QStringLiteral("speciesComboBox"));

        verticalLayout_2->addWidget(speciesComboBox);

        addParamComboBox = new QComboBox(tab);
        addParamComboBox->setObjectName(QStringLiteral("addParamComboBox"));

        verticalLayout_2->addWidget(addParamComboBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        saveCroppedCBox = new QCheckBox(tab);
        saveCroppedCBox->setObjectName(QStringLiteral("saveCroppedCBox"));

        horizontalLayout_3->addWidget(saveCroppedCBox);

        dontSaveCroppedCBox = new QCheckBox(tab);
        dontSaveCroppedCBox->setObjectName(QStringLiteral("dontSaveCroppedCBox"));

        horizontalLayout_3->addWidget(dontSaveCroppedCBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_5->addWidget(label_20);

        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout_5->addWidget(label_21);

        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_5->addWidget(label_22);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        ACoord = new QLineEdit(tab_2);
        ACoord->setObjectName(QStringLiteral("ACoord"));

        verticalLayout_6->addWidget(ACoord);

        BCoord = new QLineEdit(tab_2);
        BCoord->setObjectName(QStringLiteral("BCoord"));

        verticalLayout_6->addWidget(BCoord);

        CCoord = new QLineEdit(tab_2);
        CCoord->setObjectName(QStringLiteral("CCoord"));

        verticalLayout_6->addWidget(CCoord);

        DCoord = new QLineEdit(tab_2);
        DCoord->setObjectName(QStringLiteral("DCoord"));

        verticalLayout_6->addWidget(DCoord);


        horizontalLayout->addLayout(verticalLayout_6);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);

        graphicsView_3 = new QGraphicsView(tab_2);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));

        gridLayout_3->addWidget(graphicsView_3, 1, 0, 1, 1);

        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_3->addWidget(label_27, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_7 = new QGridLayout(tab_5);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox = new QGroupBox(tab_5);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 1, 0, 1, 1);

        redLineIntensityEdit = new QLineEdit(groupBox);
        redLineIntensityEdit->setObjectName(QStringLiteral("redLineIntensityEdit"));

        gridLayout_4->addWidget(redLineIntensityEdit, 1, 1, 1, 1);

        redImg = new QLabel(groupBox);
        redImg->setObjectName(QStringLiteral("redImg"));

        gridLayout_4->addWidget(redImg, 0, 0, 1, 2);


        verticalLayout_7->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 1, 0, 1, 1);

        greenImg = new QLabel(groupBox_2);
        greenImg->setObjectName(QStringLiteral("greenImg"));

        gridLayout_5->addWidget(greenImg, 0, 0, 1, 2);

        greenLineIntensityEdit = new QLineEdit(groupBox_2);
        greenLineIntensityEdit->setObjectName(QStringLiteral("greenLineIntensityEdit"));

        gridLayout_5->addWidget(greenLineIntensityEdit, 1, 1, 1, 1);


        verticalLayout_7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_5);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_8 = new QGridLayout(groupBox_3);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_8->addWidget(label_14, 1, 0, 1, 1);

        blueLineIntensityEdit = new QLineEdit(groupBox_3);
        blueLineIntensityEdit->setObjectName(QStringLiteral("blueLineIntensityEdit"));

        gridLayout_8->addWidget(blueLineIntensityEdit, 1, 1, 1, 1);

        blueImg = new QLabel(groupBox_3);
        blueImg->setObjectName(QStringLiteral("blueImg"));

        gridLayout_8->addWidget(blueImg, 0, 0, 1, 2);


        verticalLayout_7->addWidget(groupBox_3);


        gridLayout_7->addLayout(verticalLayout_7, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        closeBtn = new QPushButton(clipScene);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout_2->addWidget(closeBtn);

        acceptBtn = new QPushButton(clipScene);
        acceptBtn->setObjectName(QStringLiteral("acceptBtn"));

        horizontalLayout_2->addWidget(acceptBtn);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);


        retranslateUi(clipScene);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(clipScene);
    } // setupUi

    void retranslateUi(QDialog *clipScene)
    {
        clipScene->setWindowTitle(QApplication::translate("clipScene", "Dialog", 0));
        label_26->setText(QApplication::translate("clipScene", "<html><head/><body><p>CROPPED IMAGE</p></body></html>", 0));
        label_6->setText(QApplication::translate("clipScene", "Image Name:", 0));
        label_7->setText(QApplication::translate("clipScene", "Latitude:", 0));
        label_8->setText(QApplication::translate("clipScene", "Longitude:", 0));
        label_9->setText(QApplication::translate("clipScene", "Depth:", 0));
        label_10->setText(QApplication::translate("clipScene", "Length:", 0));
        label_2->setText(QApplication::translate("clipScene", "Set Primary Substrate:", 0));
        label_3->setText(QApplication::translate("clipScene", "Set Secondary Substrate:", 0));
        label_4->setText(QApplication::translate("clipScene", "Set Cell Species:", 0));
        label_5->setText(QApplication::translate("clipScene", "Set Additional Param:", 0));
        label_11->setText(QApplication::translate("clipScene", "Save Cropped Image:", 0));
        primarySubstrateComboBox->clear();
        primarySubstrateComboBox->insertItems(0, QStringList()
         << QApplication::translate("clipScene", "--", 0)
         << QApplication::translate("clipScene", "Red Cell", 0)
         << QApplication::translate("clipScene", "White Cell", 0)
         << QApplication::translate("clipScene", "Platelets", 0)
         << QApplication::translate("clipScene", "Coagulator", 0)
         << QApplication::translate("clipScene", "Others", 0)
        );
        secondarySubstrateComboBox->clear();
        secondarySubstrateComboBox->insertItems(0, QStringList()
         << QApplication::translate("clipScene", "--", 0)
         << QApplication::translate("clipScene", "Red Cell Type 1", 0)
         << QApplication::translate("clipScene", "White Cell Type 1", 0)
         << QApplication::translate("clipScene", "Platelets Type 1", 0)
         << QApplication::translate("clipScene", "Coagulator Type 1", 0)
         << QApplication::translate("clipScene", "Others", 0)
        );
        speciesComboBox->clear();
        speciesComboBox->insertItems(0, QStringList()
         << QApplication::translate("clipScene", "--", 0)
         << QApplication::translate("clipScene", "Blood Cell", 0)
         << QApplication::translate("clipScene", "White Defensive Cell", 0)
         << QApplication::translate("clipScene", "Oxygen Cell", 0)
         << QApplication::translate("clipScene", "Others", 0)
        );
        addParamComboBox->clear();
        addParamComboBox->insertItems(0, QStringList()
         << QApplication::translate("clipScene", "--", 0)
         << QApplication::translate("clipScene", "Param A", 0)
         << QApplication::translate("clipScene", "Param B", 0)
         << QApplication::translate("clipScene", "Param C", 0)
         << QApplication::translate("clipScene", "Param D", 0)
         << QApplication::translate("clipScene", "Others", 0)
        );
        saveCroppedCBox->setText(QApplication::translate("clipScene", "Yes", 0));
        dontSaveCroppedCBox->setText(QApplication::translate("clipScene", "No", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("clipScene", "Set Records ID", 0));
        label->setText(QApplication::translate("clipScene", "A (x,y):", 0));
        label_20->setText(QApplication::translate("clipScene", "B (x,y):", 0));
        label_21->setText(QApplication::translate("clipScene", "C (x,y):", 0));
        label_22->setText(QApplication::translate("clipScene", "D (x,y):", 0));
        label_27->setText(QApplication::translate("clipScene", "COORDINATE(S) OF BOUNDING BOX", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("clipScene", "Coordinate(s)", 0));
        groupBox->setTitle(QApplication::translate("clipScene", "Red Intensity (R)", 0));
        label_12->setText(QApplication::translate("clipScene", "AVG Red Intensity", 0));
        redImg->setText(QApplication::translate("clipScene", "TextLabel", 0));
        groupBox_2->setTitle(QApplication::translate("clipScene", "Green Intensity (G)", 0));
        label_13->setText(QApplication::translate("clipScene", "AVG Green Intensity", 0));
        greenImg->setText(QApplication::translate("clipScene", "TextLabel", 0));
        groupBox_3->setTitle(QApplication::translate("clipScene", "Blue Intensity (B)", 0));
        label_14->setText(QApplication::translate("clipScene", "AVG Blue Intensity", 0));
        blueImg->setText(QApplication::translate("clipScene", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("clipScene", "RGB", 0));
        closeBtn->setText(QApplication::translate("clipScene", "Close", 0));
        acceptBtn->setText(QApplication::translate("clipScene", "Accept", 0));
    } // retranslateUi

};

namespace Ui {
    class clipScene: public Ui_clipScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPSCENE_H