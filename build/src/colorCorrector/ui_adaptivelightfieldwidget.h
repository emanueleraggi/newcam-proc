/********************************************************************************
** Form generated from reading UI file 'adaptivelightfieldwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADAPTIVELIGHTFIELDWIDGET_H
#define UI_ADAPTIVELIGHTFIELDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdaptiveLightfieldWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *methodSelect;
    QLabel *label_2;

    void setupUi(QWidget *AdaptiveLightfieldWidget)
    {
        if (AdaptiveLightfieldWidget->objectName().isEmpty())
            AdaptiveLightfieldWidget->setObjectName(QStringLiteral("AdaptiveLightfieldWidget"));
        AdaptiveLightfieldWidget->resize(669, 544);
        horizontalLayout = new QHBoxLayout(AdaptiveLightfieldWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(AdaptiveLightfieldWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        methodSelect = new QComboBox(AdaptiveLightfieldWidget);
        methodSelect->setObjectName(QStringLiteral("methodSelect"));

        formLayout->setWidget(0, QFormLayout::FieldRole, methodSelect);


        horizontalLayout->addLayout(formLayout);

        label_2 = new QLabel(AdaptiveLightfieldWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);


        retranslateUi(AdaptiveLightfieldWidget);

        QMetaObject::connectSlotsByName(AdaptiveLightfieldWidget);
    } // setupUi

    void retranslateUi(QWidget *AdaptiveLightfieldWidget)
    {
        AdaptiveLightfieldWidget->setWindowTitle(QApplication::translate("AdaptiveLightfieldWidget", "Form", 0));
        label->setText(QApplication::translate("AdaptiveLightfieldWidget", "Correction Method", 0));
        methodSelect->clear();
        methodSelect->insertItems(0, QStringList()
         << QApplication::translate("AdaptiveLightfieldWidget", "Static", 0)
         << QApplication::translate("AdaptiveLightfieldWidget", "Slide", 0)
         << QApplication::translate("AdaptiveLightfieldWidget", "Fixed Slide", 0)
        );
        label_2->setText(QApplication::translate("AdaptiveLightfieldWidget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class AdaptiveLightfieldWidget: public Ui_AdaptiveLightfieldWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADAPTIVELIGHTFIELDWIDGET_H
