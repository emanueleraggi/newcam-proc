/********************************************************************************
** Form generated from reading UI file 'siftwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIFTWIDGET_H
#define UI_SIFTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtinclude/imagelabel.h"

QT_BEGIN_NAMESPACE

class Ui_SiftWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *nFeatures;
    QLabel *label_5;
    QLineEdit *edgeThreshold;
    QLineEdit *contrastThreshold;
    QPushButton *pushButton;
    QLineEdit *sigma;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *nOctaveLayers;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    ImageLabel *previewImg;

    void setupUi(QWidget *SiftWidget)
    {
        if (SiftWidget->objectName().isEmpty())
            SiftWidget->setObjectName(QStringLiteral("SiftWidget"));
        SiftWidget->resize(792, 652);
        horizontalLayout = new QHBoxLayout(SiftWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        label_2 = new QLabel(SiftWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(SiftWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nFeatures = new QLineEdit(SiftWidget);
        nFeatures->setObjectName(QStringLiteral("nFeatures"));
        sizePolicy.setHeightForWidth(nFeatures->sizePolicy().hasHeightForWidth());
        nFeatures->setSizePolicy(sizePolicy);
        nFeatures->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(nFeatures, 0, 1, 1, 1);

        label_5 = new QLabel(SiftWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        edgeThreshold = new QLineEdit(SiftWidget);
        edgeThreshold->setObjectName(QStringLiteral("edgeThreshold"));
        sizePolicy.setHeightForWidth(edgeThreshold->sizePolicy().hasHeightForWidth());
        edgeThreshold->setSizePolicy(sizePolicy);
        edgeThreshold->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(edgeThreshold, 3, 1, 1, 1);

        contrastThreshold = new QLineEdit(SiftWidget);
        contrastThreshold->setObjectName(QStringLiteral("contrastThreshold"));
        sizePolicy.setHeightForWidth(contrastThreshold->sizePolicy().hasHeightForWidth());
        contrastThreshold->setSizePolicy(sizePolicy);
        contrastThreshold->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(contrastThreshold, 2, 1, 1, 1);

        pushButton = new QPushButton(SiftWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(100, 26));

        gridLayout->addWidget(pushButton, 5, 1, 1, 1);

        sigma = new QLineEdit(SiftWidget);
        sigma->setObjectName(QStringLiteral("sigma"));
        sizePolicy.setHeightForWidth(sigma->sizePolicy().hasHeightForWidth());
        sigma->setSizePolicy(sizePolicy);
        sigma->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(sigma, 4, 1, 1, 1);

        label_3 = new QLabel(SiftWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(SiftWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        nOctaveLayers = new QLineEdit(SiftWidget);
        nOctaveLayers->setObjectName(QStringLiteral("nOctaveLayers"));
        sizePolicy.setHeightForWidth(nOctaveLayers->sizePolicy().hasHeightForWidth());
        nOctaveLayers->setSizePolicy(sizePolicy);
        nOctaveLayers->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(nOctaveLayers, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        previewImg = new ImageLabel(SiftWidget);
        previewImg->setObjectName(QStringLiteral("previewImg"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(previewImg->sizePolicy().hasHeightForWidth());
        previewImg->setSizePolicy(sizePolicy1);
        previewImg->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(previewImg);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(SiftWidget);

        QMetaObject::connectSlotsByName(SiftWidget);
    } // setupUi

    void retranslateUi(QWidget *SiftWidget)
    {
        SiftWidget->setWindowTitle(QApplication::translate("SiftWidget", "Form", 0));
        label_2->setText(QApplication::translate("SiftWidget", "nOctaveLayers", 0));
        label->setText(QApplication::translate("SiftWidget", "nFeatures", 0));
        nFeatures->setText(QApplication::translate("SiftWidget", "100", 0));
        label_5->setText(QApplication::translate("SiftWidget", "sigma", 0));
        edgeThreshold->setText(QApplication::translate("SiftWidget", "10", 0));
        contrastThreshold->setText(QApplication::translate("SiftWidget", "0.04", 0));
        pushButton->setText(QApplication::translate("SiftWidget", "Preview", 0));
        sigma->setText(QApplication::translate("SiftWidget", "1.6", 0));
        label_3->setText(QApplication::translate("SiftWidget", "contrastThreshold", 0));
        label_4->setText(QApplication::translate("SiftWidget", "edgeThreshold", 0));
        nOctaveLayers->setText(QApplication::translate("SiftWidget", "4", 0));
        previewImg->setText(QApplication::translate("SiftWidget", "Preview", 0));
    } // retranslateUi

};

namespace Ui {
    class SiftWidget: public Ui_SiftWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIFTWIDGET_H
