/********************************************************************************
** Form generated from reading UI file 'firstnestedtable.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTNESTEDTABLE_H
#define UI_FIRSTNESTEDTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firstNestedTable
{
public:
    QAction *actionClose;
    QAction *New_Database;
    QAction *actionOpen_Database;
    QAction *action_AddItem;
    QAction *action_RemoveItem;
    QAction *actionAuto_Populate;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *connect;
    QPushButton *disconnect;
    QPushButton *accept;
    QPushButton *close;
    QMenuBar *menuBar;
    QMenu *menuDatabase;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *firstNestedTable)
    {
        if (firstNestedTable->objectName().isEmpty())
            firstNestedTable->setObjectName(QStringLiteral("firstNestedTable"));
        firstNestedTable->resize(861, 552);
        actionClose = new QAction(firstNestedTable);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/close2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon);
        New_Database = new QAction(firstNestedTable);
        New_Database->setObjectName(QStringLiteral("New_Database"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new_database.png"), QSize(), QIcon::Normal, QIcon::Off);
        New_Database->setIcon(icon1);
        actionOpen_Database = new QAction(firstNestedTable);
        actionOpen_Database->setObjectName(QStringLiteral("actionOpen_Database"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/database.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Database->setIcon(icon2);
        action_AddItem = new QAction(firstNestedTable);
        action_AddItem->setObjectName(QStringLiteral("action_AddItem"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/working.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_AddItem->setIcon(icon3);
        action_RemoveItem = new QAction(firstNestedTable);
        action_RemoveItem->setObjectName(QStringLiteral("action_RemoveItem"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_RemoveItem->setIcon(icon4);
        actionAuto_Populate = new QAction(firstNestedTable);
        actionAuto_Populate->setObjectName(QStringLiteral("actionAuto_Populate"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/cloud_connection.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAuto_Populate->setIcon(icon5);
        centralWidget = new QWidget(firstNestedTable);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        connect = new QPushButton(centralWidget);
        connect->setObjectName(QStringLiteral("connect"));

        horizontalLayout->addWidget(connect);

        disconnect = new QPushButton(centralWidget);
        disconnect->setObjectName(QStringLiteral("disconnect"));

        horizontalLayout->addWidget(disconnect);

        accept = new QPushButton(centralWidget);
        accept->setObjectName(QStringLiteral("accept"));

        horizontalLayout->addWidget(accept);

        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));

        horizontalLayout->addWidget(close);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        firstNestedTable->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(firstNestedTable);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 861, 25));
        menuDatabase = new QMenu(menuBar);
        menuDatabase->setObjectName(QStringLiteral("menuDatabase"));
        firstNestedTable->setMenuBar(menuBar);
        mainToolBar = new QToolBar(firstNestedTable);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        firstNestedTable->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(firstNestedTable);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        firstNestedTable->setStatusBar(statusBar);

        menuBar->addAction(menuDatabase->menuAction());
        menuDatabase->addAction(actionClose);
        menuDatabase->addAction(New_Database);
        menuDatabase->addAction(actionOpen_Database);
        mainToolBar->addAction(New_Database);
        mainToolBar->addAction(actionOpen_Database);
        mainToolBar->addAction(action_AddItem);
        mainToolBar->addAction(action_RemoveItem);
        mainToolBar->addAction(actionClose);
        mainToolBar->addAction(actionAuto_Populate);

        retranslateUi(firstNestedTable);

        QMetaObject::connectSlotsByName(firstNestedTable);
    } // setupUi

    void retranslateUi(QMainWindow *firstNestedTable)
    {
        firstNestedTable->setWindowTitle(QApplication::translate("firstNestedTable", "firstNestedTable", 0));
        actionClose->setText(QApplication::translate("firstNestedTable", "Close", 0));
        New_Database->setText(QApplication::translate("firstNestedTable", "New Database", 0));
#ifndef QT_NO_TOOLTIP
        New_Database->setToolTip(QApplication::translate("firstNestedTable", "New Database", 0));
#endif // QT_NO_TOOLTIP
        actionOpen_Database->setText(QApplication::translate("firstNestedTable", "Open Database", 0));
        action_AddItem->setText(QApplication::translate("firstNestedTable", "Add Item", 0));
        action_RemoveItem->setText(QApplication::translate("firstNestedTable", "Remove Item", 0));
        actionAuto_Populate->setText(QApplication::translate("firstNestedTable", "Auto-Populate", 0));
#ifndef QT_NO_TOOLTIP
        actionAuto_Populate->setToolTip(QApplication::translate("firstNestedTable", "Load from image directory", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("firstNestedTable", "TextLabel", 0));
        connect->setText(QApplication::translate("firstNestedTable", "Connect", 0));
        disconnect->setText(QApplication::translate("firstNestedTable", "Disconnect", 0));
        accept->setText(QApplication::translate("firstNestedTable", "Accept", 0));
        close->setText(QApplication::translate("firstNestedTable", "Close", 0));
        menuDatabase->setTitle(QApplication::translate("firstNestedTable", "Database", 0));
    } // retranslateUi

};

namespace Ui {
    class firstNestedTable: public Ui_firstNestedTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTNESTEDTABLE_H
