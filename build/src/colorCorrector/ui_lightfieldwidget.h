/********************************************************************************
** Form generated from reading UI file 'lightfieldwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTFIELDWIDGET_H
#define UI_LIGHTFIELDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtinclude/imagelabel.h"

QT_BEGIN_NAMESPACE

class Ui_LightfieldWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *lfBtn;
    QProgressBar *lightProgress;
    ImageLabel *blurLabel;
    QLabel *histOverflow_lbl;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QDoubleSpinBox *brightnessEdit;
    QDoubleSpinBox *contrastEdit;
    ImageLabel *PreviewLabel;

    void setupUi(QWidget *LightfieldWidget)
    {
        if (LightfieldWidget->objectName().isEmpty())
            LightfieldWidget->setObjectName(QStringLiteral("LightfieldWidget"));
        LightfieldWidget->resize(823, 449);
        horizontalLayout = new QHBoxLayout(LightfieldWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lfBtn = new QPushButton(LightfieldWidget);
        lfBtn->setObjectName(QStringLiteral("lfBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lfBtn->sizePolicy().hasHeightForWidth());
        lfBtn->setSizePolicy(sizePolicy);
        lfBtn->setMinimumSize(QSize(275, 0));

        verticalLayout->addWidget(lfBtn);

        lightProgress = new QProgressBar(LightfieldWidget);
        lightProgress->setObjectName(QStringLiteral("lightProgress"));
        sizePolicy.setHeightForWidth(lightProgress->sizePolicy().hasHeightForWidth());
        lightProgress->setSizePolicy(sizePolicy);
        lightProgress->setMinimumSize(QSize(275, 0));
        lightProgress->setValue(0);

        verticalLayout->addWidget(lightProgress);

        blurLabel = new ImageLabel(LightfieldWidget);
        blurLabel->setObjectName(QStringLiteral("blurLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(blurLabel->sizePolicy().hasHeightForWidth());
        blurLabel->setSizePolicy(sizePolicy1);
        blurLabel->setMinimumSize(QSize(275, 200));
        blurLabel->setAutoFillBackground(true);
        blurLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(blurLabel);

        histOverflow_lbl = new QLabel(LightfieldWidget);
        histOverflow_lbl->setObjectName(QStringLiteral("histOverflow_lbl"));

        verticalLayout->addWidget(histOverflow_lbl);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label = new QLabel(LightfieldWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(LightfieldWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(LightfieldWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalSlider = new QSlider(LightfieldWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        sizePolicy.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy);
        horizontalSlider->setMinimumSize(QSize(200, 0));
        horizontalSlider->setMaximum(200);
        horizontalSlider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(2, QFormLayout::FieldRole, horizontalSlider);

        brightnessEdit = new QDoubleSpinBox(LightfieldWidget);
        brightnessEdit->setObjectName(QStringLiteral("brightnessEdit"));
        brightnessEdit->setMinimum(-500000);
        brightnessEdit->setMaximum(500000);
        brightnessEdit->setSingleStep(100);

        formLayout->setWidget(0, QFormLayout::FieldRole, brightnessEdit);

        contrastEdit = new QDoubleSpinBox(LightfieldWidget);
        contrastEdit->setObjectName(QStringLiteral("contrastEdit"));
        contrastEdit->setMaximum(10);
        contrastEdit->setSingleStep(0.1);
        contrastEdit->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, contrastEdit);


        verticalLayout->addLayout(formLayout);


        horizontalLayout->addLayout(verticalLayout);

        PreviewLabel = new ImageLabel(LightfieldWidget);
        PreviewLabel->setObjectName(QStringLiteral("PreviewLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(PreviewLabel->sizePolicy().hasHeightForWidth());
        PreviewLabel->setSizePolicy(sizePolicy2);
        PreviewLabel->setAutoFillBackground(true);
        PreviewLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(PreviewLabel);


        retranslateUi(LightfieldWidget);

        QMetaObject::connectSlotsByName(LightfieldWidget);
    } // setupUi

    void retranslateUi(QWidget *LightfieldWidget)
    {
        LightfieldWidget->setWindowTitle(QApplication::translate("LightfieldWidget", "Form", 0));
        lfBtn->setText(QApplication::translate("LightfieldWidget", "Calculate Lighting", 0));
        blurLabel->setText(QApplication::translate("LightfieldWidget", "Blur", 0));
        histOverflow_lbl->setText(QString());
        label->setText(QApplication::translate("LightfieldWidget", "Brightness", 0));
        label_2->setText(QApplication::translate("LightfieldWidget", "Contrast", 0));
        label_3->setText(QApplication::translate("LightfieldWidget", "LF Blur", 0));
        PreviewLabel->setText(QApplication::translate("LightfieldWidget", "Preview", 0));
    } // retranslateUi

};

namespace Ui {
    class LightfieldWidget: public Ui_LightfieldWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTFIELDWIDGET_H
