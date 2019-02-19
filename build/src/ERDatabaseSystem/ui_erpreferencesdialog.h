/********************************************************************************
** Form generated from reading UI file 'erpreferencesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERPREFERENCESDIALOG_H
#define UI_ERPREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ERPreferencesDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFontComboBox *fontComboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *apply;
    QPushButton *confirm;

    void setupUi(QDialog *ERPreferencesDialog)
    {
        if (ERPreferencesDialog->objectName().isEmpty())
            ERPreferencesDialog->setObjectName(QStringLiteral("ERPreferencesDialog"));
        ERPreferencesDialog->resize(833, 581);
        gridLayout_2 = new QGridLayout(ERPreferencesDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        listWidget = new QListWidget(ERPreferencesDialog);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_3->addWidget(listWidget);

        stackedWidget = new QStackedWidget(ERPreferencesDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 435, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(page);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setMaximum(9999);

        horizontalLayout_4->addWidget(doubleSpinBox);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        fontComboBox = new QFontComboBox(page);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page);

        horizontalLayout_3->addWidget(stackedWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        apply = new QPushButton(ERPreferencesDialog);
        apply->setObjectName(QStringLiteral("apply"));

        horizontalLayout_2->addWidget(apply);

        confirm = new QPushButton(ERPreferencesDialog);
        confirm->setObjectName(QStringLiteral("confirm"));

        horizontalLayout_2->addWidget(confirm);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(ERPreferencesDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ERPreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *ERPreferencesDialog)
    {
        ERPreferencesDialog->setWindowTitle(QApplication::translate("ERPreferencesDialog", "Preferences", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ERPreferencesDialog", "Fonts", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("ERPreferencesDialog", "Size", 0));
        label->setText(QApplication::translate("ERPreferencesDialog", "Fonts", 0));
        apply->setText(QApplication::translate("ERPreferencesDialog", "Apply", 0));
        confirm->setText(QApplication::translate("ERPreferencesDialog", "Confirm", 0));
    } // retranslateUi

};

namespace Ui {
    class ERPreferencesDialog: public Ui_ERPreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERPREFERENCESDIALOG_H
