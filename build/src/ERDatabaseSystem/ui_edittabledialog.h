/********************************************************************************
** Form generated from reading UI file 'edittabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTABLEDIALOG_H
#define UI_EDITTABLEDIALOG_H

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

class Ui_edittabledialog
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *accept;
    QPushButton *close;

    void setupUi(QDialog *edittabledialog)
    {
        if (edittabledialog->objectName().isEmpty())
            edittabledialog->setObjectName(QStringLiteral("edittabledialog"));
        edittabledialog->resize(660, 414);
        gridLayout = new QGridLayout(edittabledialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(edittabledialog);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        accept = new QPushButton(edittabledialog);
        accept->setObjectName(QStringLiteral("accept"));

        horizontalLayout->addWidget(accept);

        close = new QPushButton(edittabledialog);
        close->setObjectName(QStringLiteral("close"));

        horizontalLayout->addWidget(close);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(edittabledialog);

        QMetaObject::connectSlotsByName(edittabledialog);
    } // setupUi

    void retranslateUi(QDialog *edittabledialog)
    {
        edittabledialog->setWindowTitle(QApplication::translate("edittabledialog", "Dialog", 0));
        accept->setText(QApplication::translate("edittabledialog", "Accept", 0));
        close->setText(QApplication::translate("edittabledialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class edittabledialog: public Ui_edittabledialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTABLEDIALOG_H
