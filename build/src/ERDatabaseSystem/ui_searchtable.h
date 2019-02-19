/********************************************************************************
** Form generated from reading UI file 'searchtable.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHTABLE_H
#define UI_SEARCHTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchTable
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *searchLabel;
    QLineEdit *searchLineEdit;
    QGridLayout *gridLayout;
    QLabel *forLabel;
    QComboBox *columnComboBox;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QLabel *ImageLabel_1;
    QLabel *ImageLabel_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *searchTable)
    {
        if (searchTable->objectName().isEmpty())
            searchTable->setObjectName(QStringLiteral("searchTable"));
        searchTable->resize(1035, 547);
        centralWidget = new QWidget(searchTable);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        searchLabel = new QLabel(centralWidget);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));

        horizontalLayout_3->addWidget(searchLabel);

        searchLineEdit = new QLineEdit(centralWidget);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));

        horizontalLayout_3->addWidget(searchLineEdit);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        forLabel = new QLabel(centralWidget);
        forLabel->setObjectName(QStringLiteral("forLabel"));

        gridLayout->addWidget(forLabel, 0, 0, 1, 1);

        columnComboBox = new QComboBox(centralWidget);
        columnComboBox->setObjectName(QStringLiteral("columnComboBox"));

        gridLayout->addWidget(columnComboBox, 0, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ImageLabel_1 = new QLabel(centralWidget);
        ImageLabel_1->setObjectName(QStringLiteral("ImageLabel_1"));

        verticalLayout->addWidget(ImageLabel_1);

        ImageLabel_2 = new QLabel(centralWidget);
        ImageLabel_2->setObjectName(QStringLiteral("ImageLabel_2"));

        verticalLayout->addWidget(ImageLabel_2);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(307, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        searchTable->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(searchTable);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1035, 25));
        searchTable->setMenuBar(menuBar);
        mainToolBar = new QToolBar(searchTable);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        searchTable->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(searchTable);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        searchTable->setStatusBar(statusBar);

        retranslateUi(searchTable);

        QMetaObject::connectSlotsByName(searchTable);
    } // setupUi

    void retranslateUi(QMainWindow *searchTable)
    {
        searchTable->setWindowTitle(QApplication::translate("searchTable", "searchTable", 0));
        searchLabel->setText(QApplication::translate("searchTable", "Search", 0));
        forLabel->setText(QApplication::translate("searchTable", "For", 0));
        ImageLabel_1->setText(QApplication::translate("searchTable", "TextLabel", 0));
        ImageLabel_2->setText(QApplication::translate("searchTable", "TextLabel", 0));
        pushButton_2->setText(QApplication::translate("searchTable", "Close", 0));
        pushButton->setText(QApplication::translate("searchTable", "Accept", 0));
    } // retranslateUi

};

namespace Ui {
    class searchTable: public Ui_searchTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHTABLE_H
