/********************************************************************************
** Form generated from reading UI file 'stereolistwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEREOLISTWIDGET_H
#define UI_STEREOLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qtinclude/imagelistwidget.h>
#include "qtinclude/imagelabel.h"

QT_BEGIN_NAMESPACE

class Ui_StereoListWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    ImageLabel *a_viewer;
    ImageLabel *b_viewer;
    QHBoxLayout *horizontalLayout_2;
    ImageListWidget *a_list;
    ImageListWidget *b_list;

    void setupUi(QWidget *StereoListWidget)
    {
        if (StereoListWidget->objectName().isEmpty())
            StereoListWidget->setObjectName(QStringLiteral("StereoListWidget"));
        StereoListWidget->resize(445, 511);
        gridLayout = new QGridLayout(StereoListWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        a_viewer = new ImageLabel(StereoListWidget);
        a_viewer->setObjectName(QStringLiteral("a_viewer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(a_viewer->sizePolicy().hasHeightForWidth());
        a_viewer->setSizePolicy(sizePolicy);
        a_viewer->setMinimumSize(QSize(0, 250));
        a_viewer->setAutoFillBackground(true);
        a_viewer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(a_viewer);

        b_viewer = new ImageLabel(StereoListWidget);
        b_viewer->setObjectName(QStringLiteral("b_viewer"));
        sizePolicy.setHeightForWidth(b_viewer->sizePolicy().hasHeightForWidth());
        b_viewer->setSizePolicy(sizePolicy);
        b_viewer->setMinimumSize(QSize(0, 250));
        b_viewer->setAutoFillBackground(true);
        b_viewer->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(b_viewer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        a_list = new ImageListWidget(StereoListWidget);
        a_list->setObjectName(QStringLiteral("a_list"));
        sizePolicy.setHeightForWidth(a_list->sizePolicy().hasHeightForWidth());
        a_list->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(a_list);

        b_list = new ImageListWidget(StereoListWidget);
        b_list->setObjectName(QStringLiteral("b_list"));
        a_list->raise();
        a_list->raise();

        horizontalLayout_2->addWidget(b_list);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(StereoListWidget);

        QMetaObject::connectSlotsByName(StereoListWidget);
    } // setupUi

    void retranslateUi(QWidget *StereoListWidget)
    {
        StereoListWidget->setWindowTitle(QApplication::translate("StereoListWidget", "Form", 0));
        a_viewer->setText(QApplication::translate("StereoListWidget", "imgA", 0));
        b_viewer->setText(QApplication::translate("StereoListWidget", "imgB", 0));
    } // retranslateUi

};

namespace Ui {
    class StereoListWidget: public Ui_StereoListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEREOLISTWIDGET_H
