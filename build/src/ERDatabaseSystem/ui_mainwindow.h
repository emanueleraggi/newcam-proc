/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "../ERDatabaseSystem/src/ertreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Database;
    QAction *actionSave_Database;
    QAction *actionOpen_SQL;
    QAction *actionSave_SQL;
    QAction *actionPrint;
    QAction *actionClose;
    QAction *actionCopy;
    QAction *actionErase;
    QAction *actionPaste;
    QAction *actionExecute;
    QAction *actionPreferences;
    QAction *actionManual;
    QAction *actionSQLite_Search;
    QAction *actionSearch_Replace;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    ERTreeWidget *treeWidget;
    QSplitter *splitter;
    QTextEdit *textEdit;
    QTableView *tableView;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QMenu *menuDatabase;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(605, 680);
        actionOpen_Database = new QAction(MainWindow);
        actionOpen_Database->setObjectName(QStringLiteral("actionOpen_Database"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/open_database.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Database->setIcon(icon);
        actionSave_Database = new QAction(MainWindow);
        actionSave_Database->setObjectName(QStringLiteral("actionSave_Database"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/save_database.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Database->setIcon(icon1);
        actionOpen_SQL = new QAction(MainWindow);
        actionOpen_SQL->setObjectName(QStringLiteral("actionOpen_SQL"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/open_sql.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_SQL->setIcon(icon2);
        actionSave_SQL = new QAction(MainWindow);
        actionSave_SQL->setObjectName(QStringLiteral("actionSave_SQL"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/save_sql.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_SQL->setIcon(icon3);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/print2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon5);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionErase = new QAction(MainWindow);
        actionErase->setObjectName(QStringLiteral("actionErase"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/erase_or_cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionErase->setIcon(icon7);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionExecute = new QAction(MainWindow);
        actionExecute->setObjectName(QStringLiteral("actionExecute"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/run_execute.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExecute->setIcon(icon9);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/preferences.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon10);
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName(QStringLiteral("actionManual"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/manual.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionManual->setIcon(icon11);
        actionSQLite_Search = new QAction(MainWindow);
        actionSQLite_Search->setObjectName(QStringLiteral("actionSQLite_Search"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSQLite_Search->setIcon(icon12);
        actionSearch_Replace = new QAction(MainWindow);
        actionSearch_Replace->setObjectName(QStringLiteral("actionSearch_Replace"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/search_and_replace.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch_Replace->setIcon(icon13);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        treeWidget = new ERTreeWidget(splitter_2);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new_database.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setIcon(0, icon14);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        splitter_2->addWidget(treeWidget);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        textEdit = new QTextEdit(splitter);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        splitter->addWidget(textEdit);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QStringLiteral("tableView"));
        splitter->addWidget(tableView);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        splitter->addWidget(listWidget);
        splitter_2->addWidget(splitter);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 605, 25));
        menuDatabase = new QMenu(menuBar);
        menuDatabase->setObjectName(QStringLiteral("menuDatabase"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDatabase->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuDatabase->addAction(actionOpen_Database);
        menuDatabase->addAction(actionSave_Database);
        menuDatabase->addSeparator();
        menuDatabase->addAction(actionOpen_SQL);
        menuDatabase->addAction(actionSave_SQL);
        menuDatabase->addSeparator();
        menuDatabase->addAction(actionPrint);
        menuDatabase->addAction(actionClose);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionErase);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionSearch_Replace);
        menuTools->addAction(actionExecute);
        menuTools->addSeparator();
        menuTools->addAction(actionPreferences);
        menuHelp->addAction(actionManual);
        menuHelp->addSeparator();
        menuHelp->addAction(actionSQLite_Search);
        mainToolBar->addAction(actionOpen_Database);
        mainToolBar->addAction(actionOpen_SQL);
        mainToolBar->addAction(actionSave_Database);
        mainToolBar->addAction(actionSave_SQL);
        mainToolBar->addAction(actionExecute);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ERDatabaseSystem", 0));
        actionOpen_Database->setText(QApplication::translate("MainWindow", "Open Database", 0));
        actionOpen_Database->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave_Database->setText(QApplication::translate("MainWindow", "Save Database", 0));
        actionSave_Database->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionOpen_SQL->setText(QApplication::translate("MainWindow", "Open SQL", 0));
        actionOpen_SQL->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+O", 0));
        actionSave_SQL->setText(QApplication::translate("MainWindow", "Save SQL", 0));
        actionSave_SQL->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", 0));
        actionPrint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionErase->setText(QApplication::translate("MainWindow", "Erase", 0));
        actionErase->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        actionExecute->setText(QApplication::translate("MainWindow", "Execute", 0));
        actionExecute->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", 0));
        actionManual->setText(QApplication::translate("MainWindow", "Manual", 0));
        actionSQLite_Search->setText(QApplication::translate("MainWindow", "SQLite Search", 0));
        actionSearch_Replace->setText(QApplication::translate("MainWindow", "Search and Replace", 0));
        actionSearch_Replace->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Database", 0));
        menuDatabase->setTitle(QApplication::translate("MainWindow", "Database", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
