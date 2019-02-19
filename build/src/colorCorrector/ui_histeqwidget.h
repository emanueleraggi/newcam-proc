/********************************************************************************
** Form generated from reading UI file 'histeqwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTEQWIDGET_H
#define UI_HISTEQWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtinclude/imagelabel.h"

QT_BEGIN_NAMESPACE

class Ui_HistEqWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QComboBox *chanSelect;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    ImageLabel *histPreview;
    QSpacerItem *horizontalSpacer;
    ImageLabel *imagePreview;

    void setupUi(QWidget *HistEqWidget)
    {
        if (HistEqWidget->objectName().isEmpty())
            HistEqWidget->setObjectName(QStringLiteral("HistEqWidget"));
        HistEqWidget->resize(835, 360);
        horizontalLayout_2 = new QHBoxLayout(HistEqWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        chanSelect = new QComboBox(HistEqWidget);
        chanSelect->setObjectName(QStringLiteral("chanSelect"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chanSelect->sizePolicy().hasHeightForWidth());
        chanSelect->setSizePolicy(sizePolicy);
        chanSelect->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(chanSelect);

        horizontalSlider = new QSlider(HistEqWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        sizePolicy.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy);
        horizontalSlider->setMaximumSize(QSize(300, 16777215));
        horizontalSlider->setMinimum(-255);
        horizontalSlider->setMaximum(0);
        horizontalSlider->setValue(-255);
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(true);
        horizontalSlider->setInvertedControls(false);

        verticalLayout->addWidget(horizontalSlider);

        horizontalSlider_2 = new QSlider(HistEqWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        sizePolicy.setHeightForWidth(horizontalSlider_2->sizePolicy().hasHeightForWidth());
        horizontalSlider_2->setSizePolicy(sizePolicy);
        horizontalSlider_2->setMaximumSize(QSize(300, 16777215));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        histPreview = new ImageLabel(HistEqWidget);
        histPreview->setObjectName(QStringLiteral("histPreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(histPreview->sizePolicy().hasHeightForWidth());
        histPreview->setSizePolicy(sizePolicy1);
        histPreview->setMinimumSize(QSize(200, 200));
        histPreview->setMaximumSize(QSize(300, 300));
        histPreview->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout->addWidget(histPreview);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        imagePreview = new ImageLabel(HistEqWidget);
        imagePreview->setObjectName(QStringLiteral("imagePreview"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(imagePreview->sizePolicy().hasHeightForWidth());
        imagePreview->setSizePolicy(sizePolicy2);
        imagePreview->setMinimumSize(QSize(200, 200));
        imagePreview->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout_2->addWidget(imagePreview);


        retranslateUi(HistEqWidget);

        QMetaObject::connectSlotsByName(HistEqWidget);
    } // setupUi

    void retranslateUi(QWidget *HistEqWidget)
    {
        HistEqWidget->setWindowTitle(QApplication::translate("HistEqWidget", "Form", 0));
        histPreview->setText(QApplication::translate("HistEqWidget", "Histogram Preview", 0));
        imagePreview->setText(QApplication::translate("HistEqWidget", "Image Preview", 0));
    } // retranslateUi

};

namespace Ui {
    class HistEqWidget: public Ui_HistEqWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTEQWIDGET_H
