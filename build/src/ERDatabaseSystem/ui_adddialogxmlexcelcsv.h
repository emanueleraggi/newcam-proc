/********************************************************************************
** Form generated from reading UI file 'adddialogxmlexcelcsv.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOGXMLEXCELCSV_H
#define UI_ADDDIALOGXMLEXCELCSV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addDialogXmlExcelCsv
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *idLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *imageLineEdit;
    QLineEdit *roiLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addDialogXmlExcelCsv)
    {
        if (addDialogXmlExcelCsv->objectName().isEmpty())
            addDialogXmlExcelCsv->setObjectName(QStringLiteral("addDialogXmlExcelCsv"));
        addDialogXmlExcelCsv->resize(518, 183);
        gridLayout = new QGridLayout(addDialogXmlExcelCsv);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(addDialogXmlExcelCsv);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(addDialogXmlExcelCsv);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(addDialogXmlExcelCsv);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(addDialogXmlExcelCsv);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        idLineEdit = new QLineEdit(addDialogXmlExcelCsv);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));

        verticalLayout_2->addWidget(idLineEdit);

        nameLineEdit = new QLineEdit(addDialogXmlExcelCsv);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        verticalLayout_2->addWidget(nameLineEdit);

        imageLineEdit = new QLineEdit(addDialogXmlExcelCsv);
        imageLineEdit->setObjectName(QStringLiteral("imageLineEdit"));

        verticalLayout_2->addWidget(imageLineEdit);

        roiLineEdit = new QLineEdit(addDialogXmlExcelCsv);
        roiLineEdit->setObjectName(QStringLiteral("roiLineEdit"));

        verticalLayout_2->addWidget(roiLineEdit);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(addDialogXmlExcelCsv);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(addDialogXmlExcelCsv);

        QMetaObject::connectSlotsByName(addDialogXmlExcelCsv);
    } // setupUi

    void retranslateUi(QDialog *addDialogXmlExcelCsv)
    {
        addDialogXmlExcelCsv->setWindowTitle(QApplication::translate("addDialogXmlExcelCsv", "Dialog", 0));
        label->setText(QApplication::translate("addDialogXmlExcelCsv", "id", 0));
        label_2->setText(QApplication::translate("addDialogXmlExcelCsv", "name", 0));
        label_3->setText(QApplication::translate("addDialogXmlExcelCsv", "image", 0));
        label_4->setText(QApplication::translate("addDialogXmlExcelCsv", "roi", 0));
    } // retranslateUi

};

namespace Ui {
    class addDialogXmlExcelCsv: public Ui_addDialogXmlExcelCsv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOGXMLEXCELCSV_H
