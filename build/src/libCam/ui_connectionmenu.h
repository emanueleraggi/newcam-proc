/********************************************************************************
** Form generated from reading UI file 'connectionmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONMENU_H
#define UI_CONNECTIONMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connectionMenu
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *newConnectionButton;
    QPushButton *DeleteConnectionButton;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout;
    QLineEdit *nameLineEdit;
    QComboBox *comboBoxDriver;
    QLineEdit *dbNameLineEdit;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *hostLineEdit;
    QSpinBox *spinBoxPort;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *connectButton;
    QPushButton *closeButton;
    QVBoxLayout *verticalLayout_5;
    QPushButton *sendImagesToTable;
    QPushButton *helpButton;
    QProgressBar *progressBar;

    void setupUi(QMainWindow *connectionMenu)
    {
        if (connectionMenu->objectName().isEmpty())
            connectionMenu->setObjectName(QStringLiteral("connectionMenu"));
        connectionMenu->resize(986, 543);
        centralWidget = new QWidget(connectionMenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        newConnectionButton = new QPushButton(centralWidget);
        newConnectionButton->setObjectName(QStringLiteral("newConnectionButton"));

        verticalLayout_3->addWidget(newConnectionButton);

        DeleteConnectionButton = new QPushButton(centralWidget);
        DeleteConnectionButton->setObjectName(QStringLiteral("DeleteConnectionButton"));

        verticalLayout_3->addWidget(DeleteConnectionButton);


        verticalLayout_4->addLayout(verticalLayout_3);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(128, 367, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_4, 0, 2, 2, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLineEdit = new QLineEdit(groupBox);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        verticalLayout->addWidget(nameLineEdit);

        comboBoxDriver = new QComboBox(groupBox);
        comboBoxDriver->setObjectName(QStringLiteral("comboBoxDriver"));

        verticalLayout->addWidget(comboBoxDriver);

        dbNameLineEdit = new QLineEdit(groupBox);
        dbNameLineEdit->setObjectName(QStringLiteral("dbNameLineEdit"));

        verticalLayout->addWidget(dbNameLineEdit);

        usernameLineEdit = new QLineEdit(groupBox);
        usernameLineEdit->setObjectName(QStringLiteral("usernameLineEdit"));

        verticalLayout->addWidget(usernameLineEdit);

        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));

        verticalLayout->addWidget(passwordLineEdit);

        hostLineEdit = new QLineEdit(groupBox);
        hostLineEdit->setObjectName(QStringLiteral("hostLineEdit"));

        verticalLayout->addWidget(hostLineEdit);

        spinBoxPort = new QSpinBox(groupBox);
        spinBoxPort->setObjectName(QStringLiteral("spinBoxPort"));

        verticalLayout->addWidget(spinBoxPort);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 3, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_3->addWidget(checkBox);


        gridLayout->addLayout(horizontalLayout_3, 1, 3, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(138, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_2->addWidget(connectButton);

        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout_2->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 2, 1, 2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        sendImagesToTable = new QPushButton(centralWidget);
        sendImagesToTable->setObjectName(QStringLiteral("sendImagesToTable"));

        verticalLayout_5->addWidget(sendImagesToTable);

        helpButton = new QPushButton(centralWidget);
        helpButton->setObjectName(QStringLiteral("helpButton"));

        verticalLayout_5->addWidget(helpButton);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout_5->addWidget(progressBar);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 2);

        connectionMenu->setCentralWidget(centralWidget);
        treeWidget->raise();
        tableView->raise();
        groupBox->raise();
        label_8->raise();

        retranslateUi(connectionMenu);

        QMetaObject::connectSlotsByName(connectionMenu);
    } // setupUi

    void retranslateUi(QMainWindow *connectionMenu)
    {
        connectionMenu->setWindowTitle(QApplication::translate("connectionMenu", "connectionMenu", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("connectionMenu", "Database", 0));
        newConnectionButton->setText(QApplication::translate("connectionMenu", "New Connection", 0));
        DeleteConnectionButton->setText(QApplication::translate("connectionMenu", "Delete Connection", 0));
        pushButton->setText(QApplication::translate("connectionMenu", "Open Database", 0));
        groupBox->setTitle(QApplication::translate("connectionMenu", "Connection features", 0));
        label->setText(QApplication::translate("connectionMenu", "Name", 0));
        label_2->setText(QApplication::translate("connectionMenu", "Driver", 0));
        label_3->setText(QApplication::translate("connectionMenu", "Database Name", 0));
        label_4->setText(QApplication::translate("connectionMenu", "Username", 0));
        label_5->setText(QApplication::translate("connectionMenu", "Password", 0));
        label_6->setText(QApplication::translate("connectionMenu", "Hostname", 0));
        label_7->setText(QApplication::translate("connectionMenu", "Port", 0));
        checkBox->setText(QApplication::translate("connectionMenu", "Use predefined connection", 0));
        label_8->setText(QApplication::translate("connectionMenu", "Connection status: not connected...", 0));
        connectButton->setText(QApplication::translate("connectionMenu", "Connect", 0));
        closeButton->setText(QApplication::translate("connectionMenu", "Close", 0));
        sendImagesToTable->setText(QApplication::translate("connectionMenu", "Send to selected Table", 0));
        helpButton->setText(QApplication::translate("connectionMenu", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class connectionMenu: public Ui_connectionMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONMENU_H
