/********************************************************************************
** Form generated from reading UI file 'stereomanager.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEREOMANAGER_H
#define UI_STEREOMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qtinclude/stereolistwidget.h>

QT_BEGIN_NAMESPACE

class Ui_StereoManager
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    StereoListWidget *InputList;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadButton;
    QPushButton *loadButton_b;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *StereoManager)
    {
        if (StereoManager->objectName().isEmpty())
            StereoManager->setObjectName(QStringLiteral("StereoManager"));
        StereoManager->resize(792, 478);
        centralwidget = new QWidget(StereoManager);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        InputList = new StereoListWidget(centralwidget);
        InputList->setObjectName(QStringLiteral("InputList"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InputList->sizePolicy().hasHeightForWidth());
        InputList->setSizePolicy(sizePolicy);
        InputList->setMinimumSize(QSize(300, 0));

        verticalLayout->addWidget(InputList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(loadButton);

        loadButton_b = new QPushButton(centralwidget);
        loadButton_b->setObjectName(QStringLiteral("loadButton_b"));
        loadButton_b->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(loadButton_b);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        StereoManager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StereoManager);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 792, 25));
        StereoManager->setMenuBar(menubar);
        statusbar = new QStatusBar(StereoManager);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        StereoManager->setStatusBar(statusbar);
        dockWidget = new QDockWidget(StereoManager);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy1);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        StereoManager->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(StereoManager);

        QMetaObject::connectSlotsByName(StereoManager);
    } // setupUi

    void retranslateUi(QMainWindow *StereoManager)
    {
        StereoManager->setWindowTitle(QApplication::translate("StereoManager", "MainWindow", 0));
        loadButton->setText(QApplication::translate("StereoManager", "Set Images", 0));
        loadButton_b->setText(QApplication::translate("StereoManager", "Set Images", 0));
    } // retranslateUi

};

namespace Ui {
    class StereoManager: public Ui_StereoManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEREOMANAGER_H
