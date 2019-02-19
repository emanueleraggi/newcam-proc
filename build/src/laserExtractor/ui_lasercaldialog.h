/********************************************************************************
** Form generated from reading UI file 'lasercaldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASERCALDIALOG_H
#define UI_LASERCALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LasercalDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelBtn;
    QPushButton *okBtn;

    void setupUi(QDialog *LasercalDialog)
    {
        if (LasercalDialog->objectName().isEmpty())
            LasercalDialog->setObjectName(QStringLiteral("LasercalDialog"));
        LasercalDialog->resize(1152, 183);
        verticalLayout = new QVBoxLayout(LasercalDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(LasercalDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(LasercalDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        doubleSpinBox = new QDoubleSpinBox(LasercalDialog);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setDecimals(16);

        horizontalLayout_2->addWidget(doubleSpinBox);

        doubleSpinBox_2 = new QDoubleSpinBox(LasercalDialog);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(16);

        horizontalLayout_2->addWidget(doubleSpinBox_2);

        doubleSpinBox_3 = new QDoubleSpinBox(LasercalDialog);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(16);

        horizontalLayout_2->addWidget(doubleSpinBox_3);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        doubleSpinBox_5 = new QDoubleSpinBox(LasercalDialog);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setDecimals(16);

        horizontalLayout_3->addWidget(doubleSpinBox_5);

        doubleSpinBox_4 = new QDoubleSpinBox(LasercalDialog);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setDecimals(16);

        horizontalLayout_3->addWidget(doubleSpinBox_4);

        doubleSpinBox_6 = new QDoubleSpinBox(LasercalDialog);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setDecimals(16);

        horizontalLayout_3->addWidget(doubleSpinBox_6);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_3);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cancelBtn = new QPushButton(LasercalDialog);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        horizontalLayout->addWidget(cancelBtn);

        okBtn = new QPushButton(LasercalDialog);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        horizontalLayout->addWidget(okBtn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LasercalDialog);

        QMetaObject::connectSlotsByName(LasercalDialog);
    } // setupUi

    void retranslateUi(QDialog *LasercalDialog)
    {
        LasercalDialog->setWindowTitle(QApplication::translate("LasercalDialog", "Dialog", 0));
        label->setText(QApplication::translate("LasercalDialog", "Normal", 0));
        label_2->setText(QApplication::translate("LasercalDialog", "Baseline", 0));
        cancelBtn->setText(QApplication::translate("LasercalDialog", "Cancel", 0));
        okBtn->setText(QApplication::translate("LasercalDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class LasercalDialog: public Ui_LasercalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASERCALDIALOG_H
