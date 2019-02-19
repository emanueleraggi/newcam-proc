/********************************************************************************
** Form generated from reading UI file 'firsttablexmlexcelcsv.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTTABLEXMLEXCELCSV_H
#define UI_FIRSTTABLEXMLEXCELCSV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firstTableXmlExcelCSV
{
public:
    QAction *actionOpen;
    QAction *actionSave_As;
    QAction *actionClose;
    QAction *actionAuto_Populate;
    QAction *actionAdd;
    QAction *actionRemove;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuDatabase;
    QMenu *menuData;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *firstTableXmlExcelCSV)
    {
        if (firstTableXmlExcelCSV->objectName().isEmpty())
            firstTableXmlExcelCSV->setObjectName(QStringLiteral("firstTableXmlExcelCSV"));
        firstTableXmlExcelCSV->resize(813, 487);
        actionOpen = new QAction(firstTableXmlExcelCSV);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new_database.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave_As = new QAction(firstTableXmlExcelCSV);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon1);
        actionClose = new QAction(firstTableXmlExcelCSV);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionAuto_Populate = new QAction(firstTableXmlExcelCSV);
        actionAuto_Populate->setObjectName(QStringLiteral("actionAuto_Populate"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/autopopulate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAuto_Populate->setIcon(icon3);
        actionAdd = new QAction(firstTableXmlExcelCSV);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/add_item.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon4);
        actionRemove = new QAction(firstTableXmlExcelCSV);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/remove_item.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove->setIcon(icon5);
        centralWidget = new QWidget(firstTableXmlExcelCSV);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget_2 = new QTableWidget(tab_2);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));

        gridLayout_3->addWidget(tableWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tableWidget_3 = new QTableWidget(tab_3);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));

        gridLayout_4->addWidget(tableWidget_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        firstTableXmlExcelCSV->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(firstTableXmlExcelCSV);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 813, 25));
        menuDatabase = new QMenu(menuBar);
        menuDatabase->setObjectName(QStringLiteral("menuDatabase"));
        menuData = new QMenu(menuBar);
        menuData->setObjectName(QStringLiteral("menuData"));
        firstTableXmlExcelCSV->setMenuBar(menuBar);
        statusBar = new QStatusBar(firstTableXmlExcelCSV);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        firstTableXmlExcelCSV->setStatusBar(statusBar);
        toolBar = new QToolBar(firstTableXmlExcelCSV);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        firstTableXmlExcelCSV->addToolBar(Qt::TopToolBarArea, toolBar);
        firstTableXmlExcelCSV->insertToolBarBreak(toolBar);

        menuBar->addAction(menuDatabase->menuAction());
        menuBar->addAction(menuData->menuAction());
        menuDatabase->addAction(actionOpen);
        menuDatabase->addAction(actionSave_As);
        menuDatabase->addAction(actionClose);
        menuData->addAction(actionAdd);
        menuData->addAction(actionRemove);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave_As);
        toolBar->addAction(actionAuto_Populate);
        toolBar->addAction(actionClose);
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionRemove);

        retranslateUi(firstTableXmlExcelCSV);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(firstTableXmlExcelCSV);
    } // setupUi

    void retranslateUi(QMainWindow *firstTableXmlExcelCSV)
    {
        firstTableXmlExcelCSV->setWindowTitle(QApplication::translate("firstTableXmlExcelCSV", "firstTableXmlExcelCSV", 0));
        actionOpen->setText(QApplication::translate("firstTableXmlExcelCSV", "Open", 0));
        actionSave_As->setText(QApplication::translate("firstTableXmlExcelCSV", "Save As", 0));
        actionClose->setText(QApplication::translate("firstTableXmlExcelCSV", "Close", 0));
        actionAuto_Populate->setText(QApplication::translate("firstTableXmlExcelCSV", "Auto-Populate", 0));
#ifndef QT_NO_TOOLTIP
        actionAuto_Populate->setToolTip(QApplication::translate("firstTableXmlExcelCSV", "Load from image directory", 0));
#endif // QT_NO_TOOLTIP
        actionAdd->setText(QApplication::translate("firstTableXmlExcelCSV", "Add", 0));
        actionRemove->setText(QApplication::translate("firstTableXmlExcelCSV", "Remove", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("firstTableXmlExcelCSV", "XML", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("firstTableXmlExcelCSV", "CSV", 0));
        pushButton_3->setText(QApplication::translate("firstTableXmlExcelCSV", "Update", 0));
        pushButton_2->setText(QApplication::translate("firstTableXmlExcelCSV", "Connect", 0));
        pushButton->setText(QApplication::translate("firstTableXmlExcelCSV", "Disconnect", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("firstTableXmlExcelCSV", "Cloud", 0));
        menuDatabase->setTitle(QApplication::translate("firstTableXmlExcelCSV", "Database", 0));
        menuData->setTitle(QApplication::translate("firstTableXmlExcelCSV", "Data", 0));
        toolBar->setWindowTitle(QApplication::translate("firstTableXmlExcelCSV", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class firstTableXmlExcelCSV: public Ui_firstTableXmlExcelCSV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTTABLEXMLEXCELCSV_H
