/********************************************************************************
** Form generated from reading UI file 'editlefttabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITLEFTTABLEDIALOG_H
#define UI_EDITLEFTTABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_editLeftTableDialog
{
public:
    QGridLayout *gridLayout;
    QTableView *tableViewLeft;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QPushButton *acceptBtn;

    void setupUi(QDialog *editLeftTableDialog)
    {
        if (editLeftTableDialog->objectName().isEmpty())
            editLeftTableDialog->setObjectName(QStringLiteral("editLeftTableDialog"));
        editLeftTableDialog->resize(601, 372);
        gridLayout = new QGridLayout(editLeftTableDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableViewLeft = new QTableView(editLeftTableDialog);
        tableViewLeft->setObjectName(QStringLiteral("tableViewLeft"));

        gridLayout->addWidget(tableViewLeft, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeBtn = new QPushButton(editLeftTableDialog);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout->addWidget(closeBtn);

        acceptBtn = new QPushButton(editLeftTableDialog);
        acceptBtn->setObjectName(QStringLiteral("acceptBtn"));

        horizontalLayout->addWidget(acceptBtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(editLeftTableDialog);

        QMetaObject::connectSlotsByName(editLeftTableDialog);
    } // setupUi

    void retranslateUi(QDialog *editLeftTableDialog)
    {
        editLeftTableDialog->setWindowTitle(QApplication::translate("editLeftTableDialog", "Dialog", 0));
        closeBtn->setText(QApplication::translate("editLeftTableDialog", "Close", 0));
        acceptBtn->setText(QApplication::translate("editLeftTableDialog", "Accept", 0));
    } // retranslateUi

};

namespace Ui {
    class editLeftTableDialog: public Ui_editLeftTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITLEFTTABLEDIALOG_H
