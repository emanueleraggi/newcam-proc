/********************************************************************************
** Form generated from reading UI file 'newtabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTABLEDIALOG_H
#define UI_NEWTABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_newTableDialog
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *accept;

    void setupUi(QDialog *newTableDialog)
    {
        if (newTableDialog->objectName().isEmpty())
            newTableDialog->setObjectName(QStringLiteral("newTableDialog"));
        newTableDialog->resize(629, 489);
        gridLayout = new QGridLayout(newTableDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(newTableDialog);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setContextMenuPolicy(Qt::ActionsContextMenu);

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(newTableDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        name = new QLineEdit(newTableDialog);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout_2->addWidget(name);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(newTableDialog);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout->addWidget(cancel);

        accept = new QPushButton(newTableDialog);
        accept->setObjectName(QStringLiteral("accept"));

        horizontalLayout->addWidget(accept);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(newTableDialog);

        QMetaObject::connectSlotsByName(newTableDialog);
    } // setupUi

    void retranslateUi(QDialog *newTableDialog)
    {
        newTableDialog->setWindowTitle(QApplication::translate("newTableDialog", "New Table", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("newTableDialog", "Reference", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("newTableDialog", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("newTableDialog", "PK", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("newTableDialog", "NN", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("newTableDialog", "AI", 0));
        label->setText(QApplication::translate("newTableDialog", "Table Name", 0));
        cancel->setText(QApplication::translate("newTableDialog", "Cancel", 0));
        accept->setText(QApplication::translate("newTableDialog", "Accept", 0));
    } // retranslateUi

};

namespace Ui {
    class newTableDialog: public Ui_newTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTABLEDIALOG_H
