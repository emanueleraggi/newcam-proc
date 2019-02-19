/********************************************************************************
** Form generated from reading UI file 'additemfirstnestedtabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMFIRSTNESTEDTABLEDIALOG_H
#define UI_ADDITEMFIRSTNESTEDTABLEDIALOG_H

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
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_addItemFirstNestedTableDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *imLineEdit_2;
    QLineEdit *imLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *imageLineEdit;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *roiLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addItemFirstNestedTableDialog)
    {
        if (addItemFirstNestedTableDialog->objectName().isEmpty())
            addItemFirstNestedTableDialog->setObjectName(QStringLiteral("addItemFirstNestedTableDialog"));
        addItemFirstNestedTableDialog->resize(403, 214);
        gridLayout = new QGridLayout(addItemFirstNestedTableDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(addItemFirstNestedTableDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        nameLineEdit = new QLineEdit(addItemFirstNestedTableDialog);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout->addWidget(nameLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        imLineEdit_2 = new QLabel(addItemFirstNestedTableDialog);
        imLineEdit_2->setObjectName(QStringLiteral("imLineEdit_2"));

        horizontalLayout_2->addWidget(imLineEdit_2);

        imLineEdit = new QLineEdit(addItemFirstNestedTableDialog);
        imLineEdit->setObjectName(QStringLiteral("imLineEdit"));

        horizontalLayout_2->addWidget(imLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(addItemFirstNestedTableDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        imageLineEdit = new QLineEdit(addItemFirstNestedTableDialog);
        imageLineEdit->setObjectName(QStringLiteral("imageLineEdit"));

        horizontalLayout_3->addWidget(imageLineEdit);

        toolButton = new QToolButton(addItemFirstNestedTableDialog);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral("images.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);

        horizontalLayout_3->addWidget(toolButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(addItemFirstNestedTableDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        roiLineEdit = new QLineEdit(addItemFirstNestedTableDialog);
        roiLineEdit->setObjectName(QStringLiteral("roiLineEdit"));

        horizontalLayout_4->addWidget(roiLineEdit);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(addItemFirstNestedTableDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);


        retranslateUi(addItemFirstNestedTableDialog);

        QMetaObject::connectSlotsByName(addItemFirstNestedTableDialog);
    } // setupUi

    void retranslateUi(QDialog *addItemFirstNestedTableDialog)
    {
        addItemFirstNestedTableDialog->setWindowTitle(QApplication::translate("addItemFirstNestedTableDialog", "Dialog", 0));
        label->setText(QApplication::translate("addItemFirstNestedTableDialog", "name", 0));
        imLineEdit_2->setText(QApplication::translate("addItemFirstNestedTableDialog", "image", 0));
        label_3->setText(QApplication::translate("addItemFirstNestedTableDialog", "images", 0));
        toolButton->setText(QApplication::translate("addItemFirstNestedTableDialog", "...", 0));
        label_2->setText(QApplication::translate("addItemFirstNestedTableDialog", "roi", 0));
    } // retranslateUi

};

namespace Ui {
    class addItemFirstNestedTableDialog: public Ui_addItemFirstNestedTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMFIRSTNESTEDTABLEDIALOG_H
