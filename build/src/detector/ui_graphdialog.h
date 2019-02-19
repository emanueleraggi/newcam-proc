/********************************************************************************
** Form generated from reading UI file 'graphdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHDIALOG_H
#define UI_GRAPHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include "../detector/src/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_graphDialog
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *widget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *graphDialog)
    {
        if (graphDialog->objectName().isEmpty())
            graphDialog->setObjectName(QStringLiteral("graphDialog"));
        graphDialog->resize(545, 493);
        gridLayout = new QGridLayout(graphDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QCustomPlot(graphDialog);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(graphDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(graphDialog);

        QMetaObject::connectSlotsByName(graphDialog);
    } // setupUi

    void retranslateUi(QDialog *graphDialog)
    {
        graphDialog->setWindowTitle(QApplication::translate("graphDialog", "graphDialog", 0));
    } // retranslateUi

};

namespace Ui {
    class graphDialog: public Ui_graphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHDIALOG_H
