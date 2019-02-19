/********************************************************************************
** Form generated from reading UI file 'rgbhsvwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RGBHSVWIDGET_H
#define UI_RGBHSVWIDGET_H

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

class Ui_RgbHsvWidget
{
public:
    QVBoxLayout *verticalLayout;
    ImageLabel *imagePreview;
    QComboBox *chanSelect;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    ImageLabel *histPreview;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *RgbHsvWidget)
    {
        if (RgbHsvWidget->objectName().isEmpty())
            RgbHsvWidget->setObjectName(QStringLiteral("RgbHsvWidget"));
        RgbHsvWidget->resize(242, 572);
        verticalLayout = new QVBoxLayout(RgbHsvWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        imagePreview = new ImageLabel(RgbHsvWidget);
        imagePreview->setObjectName(QStringLiteral("imagePreview"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imagePreview->sizePolicy().hasHeightForWidth());
        imagePreview->setSizePolicy(sizePolicy);
        imagePreview->setMinimumSize(QSize(200, 200));
        imagePreview->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(imagePreview);

        chanSelect = new QComboBox(RgbHsvWidget);
        chanSelect->setObjectName(QStringLiteral("chanSelect"));

        verticalLayout->addWidget(chanSelect);

        horizontalSlider = new QSlider(RgbHsvWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(-255);
        horizontalSlider->setMaximum(0);
        horizontalSlider->setValue(-255);
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(true);
        horizontalSlider->setInvertedControls(false);

        verticalLayout->addWidget(horizontalSlider);

        horizontalSlider_2 = new QSlider(RgbHsvWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        histPreview = new ImageLabel(RgbHsvWidget);
        histPreview->setObjectName(QStringLiteral("histPreview"));
        sizePolicy.setHeightForWidth(histPreview->sizePolicy().hasHeightForWidth());
        histPreview->setSizePolicy(sizePolicy);
        histPreview->setMinimumSize(QSize(200, 200));
        histPreview->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout->addWidget(histPreview);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RgbHsvWidget);

        QMetaObject::connectSlotsByName(RgbHsvWidget);
    } // setupUi

    void retranslateUi(QWidget *RgbHsvWidget)
    {
        RgbHsvWidget->setWindowTitle(QApplication::translate("RgbHsvWidget", "Form", 0));
        imagePreview->setText(QApplication::translate("RgbHsvWidget", "Image Preview", 0));
        histPreview->setText(QApplication::translate("RgbHsvWidget", "Histogram Preview", 0));
    } // retranslateUi

};

namespace Ui {
    class RgbHsvWidget: public Ui_RgbHsvWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RGBHSVWIDGET_H
