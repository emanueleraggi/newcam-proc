/********************************************************************************
** Form generated from reading UI file 'editrighttabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITRIGHTTABLEDIALOG_H
#define UI_EDITRIGHTTABLEDIALOG_H

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

class Ui_editRightTableDialog
{
public:
    QGridLayout *gridLayout;
    QTableView *tableViewRight;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeLeftBtn;
    QPushButton *acceptLeftBtn;

    void setupUi(QDialog *editRightTableDialog)
    {
        if (editRightTableDialog->objectName().isEmpty())
            editRightTableDialog->setObjectName(QStringLiteral("editRightTableDialog"));
        editRightTableDialog->resize(577, 322);
        gridLayout = new QGridLayout(editRightTableDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableViewRight = new QTableView(editRightTableDialog);
        tableViewRight->setObjectName(QStringLiteral("tableViewRight"));

        gridLayout->addWidget(tableViewRight, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeLeftBtn = new QPushButton(editRightTableDialog);
        closeLeftBtn->setObjectName(QStringLiteral("closeLeftBtn"));

        horizontalLayout->addWidget(closeLeftBtn);

        acceptLeftBtn = new QPushButton(editRightTableDialog);
        acceptLeftBtn->setObjectName(QStringLiteral("acceptLeftBtn"));

        horizontalLayout->addWidget(acceptLeftBtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(editRightTableDialog);

        QMetaObject::connectSlotsByName(editRightTableDialog);
    } // setupUi

    void retranslateUi(QDialog *editRightTableDialog)
    {
        editRightTableDialog->setWindowTitle(QApplication::translate("editRightTableDialog", "Dialog", 0));
        closeLeftBtn->setText(QApplication::translate("editRightTableDialog", "Close", 0));
        acceptLeftBtn->setText(QApplication::translate("editRightTableDialog", "Accept", 0));
    } // retranslateUi

};

namespace Ui {
    class editRightTableDialog: public Ui_editRightTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITRIGHTTABLEDIALOG_H
