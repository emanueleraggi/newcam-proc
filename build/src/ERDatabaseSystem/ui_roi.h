/********************************************************************************
** Form generated from reading UI file 'roi.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROI_H
#define UI_ROI_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_roi
{
public:
    QAction *actionOpen_Database;
    QAction *action_Accept;
    QAction *action_Close;
    QAction *action_Disconnect;
    QAction *actionAdd_Item;
    QAction *actionRemove_Item;
    QAction *actionNew_Database;
    QAction *action_Connect;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *connectBtn;
    QPushButton *disconnectBtn;
    QPushButton *acceptBtn;
    QPushButton *closeBtn;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menuNew_Database;
    QMenu *menuConnection;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *roi)
    {
        if (roi->objectName().isEmpty())
            roi->setObjectName(QStringLiteral("roi"));
        roi->resize(894, 500);
        actionOpen_Database = new QAction(roi);
        actionOpen_Database->setObjectName(QStringLiteral("actionOpen_Database"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Database->setIcon(icon);
        action_Accept = new QAction(roi);
        action_Accept->setObjectName(QStringLiteral("action_Accept"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/accept.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Accept->setIcon(icon1);
        action_Close = new QAction(roi);
        action_Close->setObjectName(QStringLiteral("action_Close"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Close->setIcon(icon2);
        action_Disconnect = new QAction(roi);
        action_Disconnect->setObjectName(QStringLiteral("action_Disconnect"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/cloud_disconnection.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Disconnect->setIcon(icon3);
        actionAdd_Item = new QAction(roi);
        actionAdd_Item->setObjectName(QStringLiteral("actionAdd_Item"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/add_item.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Item->setIcon(icon4);
        actionRemove_Item = new QAction(roi);
        actionRemove_Item->setObjectName(QStringLiteral("actionRemove_Item"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/remove_item.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove_Item->setIcon(icon5);
        actionNew_Database = new QAction(roi);
        actionNew_Database->setObjectName(QStringLiteral("actionNew_Database"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new_database.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Database->setIcon(icon6);
        action_Connect = new QAction(roi);
        action_Connect->setObjectName(QStringLiteral("action_Connect"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/cloud_connection.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Connect->setIcon(icon7);
        centralWidget = new QWidget(roi);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        connectBtn = new QPushButton(centralWidget);
        connectBtn->setObjectName(QStringLiteral("connectBtn"));

        horizontalLayout->addWidget(connectBtn);

        disconnectBtn = new QPushButton(centralWidget);
        disconnectBtn->setObjectName(QStringLiteral("disconnectBtn"));

        horizontalLayout->addWidget(disconnectBtn);

        acceptBtn = new QPushButton(centralWidget);
        acceptBtn->setObjectName(QStringLiteral("acceptBtn"));

        horizontalLayout->addWidget(acceptBtn);

        closeBtn = new QPushButton(centralWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout->addWidget(closeBtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout_2->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        roi->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(roi);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 894, 25));
        menuNew_Database = new QMenu(menuBar);
        menuNew_Database->setObjectName(QStringLiteral("menuNew_Database"));
        menuConnection = new QMenu(menuBar);
        menuConnection->setObjectName(QStringLiteral("menuConnection"));
        roi->setMenuBar(menuBar);
        mainToolBar = new QToolBar(roi);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        roi->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(roi);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        roi->setStatusBar(statusBar);

        menuBar->addAction(menuNew_Database->menuAction());
        menuBar->addAction(menuConnection->menuAction());
        menuNew_Database->addAction(actionOpen_Database);
        menuNew_Database->addAction(action_Accept);
        menuNew_Database->addAction(action_Close);
        menuConnection->addAction(action_Connect);
        menuConnection->addAction(action_Disconnect);
        mainToolBar->addAction(actionNew_Database);
        mainToolBar->addAction(actionOpen_Database);
        mainToolBar->addAction(actionAdd_Item);
        mainToolBar->addAction(actionRemove_Item);
        mainToolBar->addAction(action_Close);

        retranslateUi(roi);

        QMetaObject::connectSlotsByName(roi);
    } // setupUi

    void retranslateUi(QMainWindow *roi)
    {
        roi->setWindowTitle(QApplication::translate("roi", "roi", 0));
        actionOpen_Database->setText(QApplication::translate("roi", "Open Database", 0));
        action_Accept->setText(QApplication::translate("roi", "Accept", 0));
        action_Close->setText(QApplication::translate("roi", "Close", 0));
        action_Disconnect->setText(QApplication::translate("roi", "Disconnect", 0));
        actionAdd_Item->setText(QApplication::translate("roi", "Add Item", 0));
#ifndef QT_NO_TOOLTIP
        actionAdd_Item->setToolTip(QApplication::translate("roi", "Add Item", 0));
#endif // QT_NO_TOOLTIP
        actionRemove_Item->setText(QApplication::translate("roi", "Remove Item", 0));
#ifndef QT_NO_TOOLTIP
        actionRemove_Item->setToolTip(QApplication::translate("roi", "Remove Item", 0));
#endif // QT_NO_TOOLTIP
        actionNew_Database->setText(QApplication::translate("roi", "New Database", 0));
#ifndef QT_NO_TOOLTIP
        actionNew_Database->setToolTip(QApplication::translate("roi", "New Database", 0));
#endif // QT_NO_TOOLTIP
        action_Connect->setText(QApplication::translate("roi", "Connect", 0));
        connectBtn->setText(QApplication::translate("roi", "Connect", 0));
        disconnectBtn->setText(QApplication::translate("roi", "Disconnect", 0));
        acceptBtn->setText(QApplication::translate("roi", "Accept", 0));
        closeBtn->setText(QApplication::translate("roi", "Close", 0));
        label->setText(QApplication::translate("roi", "img1", 0));
        label_2->setText(QApplication::translate("roi", "img2", 0));
        label_3->setText(QApplication::translate("roi", "img3", 0));
        menuNew_Database->setTitle(QApplication::translate("roi", "New Database", 0));
        menuConnection->setTitle(QApplication::translate("roi", "Connection", 0));
    } // retranslateUi

};

namespace Ui {
    class roi: public Ui_roi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROI_H
