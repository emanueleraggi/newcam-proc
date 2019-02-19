/********************************************************************************
** Form generated from reading UI file 'addroidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDROIDIALOG_H
#define UI_ADDROIDIALOG_H

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

class Ui_addRoiDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *sizeLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *threeDLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *concavityLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *colorLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *img_1_LineEdit;
    QToolButton *toolButton_img1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *img_2_LineEdit;
    QToolButton *toolButton_img2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *img_3_LineEdit;
    QToolButton *toolButton_img3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *iddeployment_lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addRoiDialog)
    {
        if (addRoiDialog->objectName().isEmpty())
            addRoiDialog->setObjectName(QStringLiteral("addRoiDialog"));
        addRoiDialog->resize(572, 327);
        gridLayout = new QGridLayout(addRoiDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(addRoiDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        sizeLineEdit = new QLineEdit(addRoiDialog);
        sizeLineEdit->setObjectName(QStringLiteral("sizeLineEdit"));

        horizontalLayout->addWidget(sizeLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(addRoiDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        threeDLineEdit = new QLineEdit(addRoiDialog);
        threeDLineEdit->setObjectName(QStringLiteral("threeDLineEdit"));

        horizontalLayout_2->addWidget(threeDLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(addRoiDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        concavityLineEdit = new QLineEdit(addRoiDialog);
        concavityLineEdit->setObjectName(QStringLiteral("concavityLineEdit"));

        horizontalLayout_3->addWidget(concavityLineEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(addRoiDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        colorLineEdit = new QLineEdit(addRoiDialog);
        colorLineEdit->setObjectName(QStringLiteral("colorLineEdit"));

        horizontalLayout_4->addWidget(colorLineEdit);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(addRoiDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        img_1_LineEdit = new QLineEdit(addRoiDialog);
        img_1_LineEdit->setObjectName(QStringLiteral("img_1_LineEdit"));

        horizontalLayout_5->addWidget(img_1_LineEdit);

        toolButton_img1 = new QToolButton(addRoiDialog);
        toolButton_img1->setObjectName(QStringLiteral("toolButton_img1"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/open_image.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_img1->setIcon(icon);

        horizontalLayout_5->addWidget(toolButton_img1);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(addRoiDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        img_2_LineEdit = new QLineEdit(addRoiDialog);
        img_2_LineEdit->setObjectName(QStringLiteral("img_2_LineEdit"));

        horizontalLayout_6->addWidget(img_2_LineEdit);

        toolButton_img2 = new QToolButton(addRoiDialog);
        toolButton_img2->setObjectName(QStringLiteral("toolButton_img2"));
        toolButton_img2->setIcon(icon);

        horizontalLayout_6->addWidget(toolButton_img2);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(addRoiDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        img_3_LineEdit = new QLineEdit(addRoiDialog);
        img_3_LineEdit->setObjectName(QStringLiteral("img_3_LineEdit"));

        horizontalLayout_7->addWidget(img_3_LineEdit);

        toolButton_img3 = new QToolButton(addRoiDialog);
        toolButton_img3->setObjectName(QStringLiteral("toolButton_img3"));
        toolButton_img3->setIcon(icon);

        horizontalLayout_7->addWidget(toolButton_img3);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(addRoiDialog);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        iddeployment_lineEdit = new QLineEdit(addRoiDialog);
        iddeployment_lineEdit->setObjectName(QStringLiteral("iddeployment_lineEdit"));

        horizontalLayout_9->addWidget(iddeployment_lineEdit);


        gridLayout->addLayout(horizontalLayout_9, 7, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        buttonBox = new QDialogButtonBox(addRoiDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_8->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout_8, 8, 0, 1, 1);


        retranslateUi(addRoiDialog);

        QMetaObject::connectSlotsByName(addRoiDialog);
    } // setupUi

    void retranslateUi(QDialog *addRoiDialog)
    {
        addRoiDialog->setWindowTitle(QApplication::translate("addRoiDialog", "Dialog", 0));
        label->setText(QApplication::translate("addRoiDialog", "Size", 0));
        label_2->setText(QApplication::translate("addRoiDialog", "3D_Location", 0));
        label_3->setText(QApplication::translate("addRoiDialog", "Concavity", 0));
        label_4->setText(QApplication::translate("addRoiDialog", "Color", 0));
        label_5->setText(QApplication::translate("addRoiDialog", "Image_1", 0));
        toolButton_img1->setText(QApplication::translate("addRoiDialog", "...", 0));
        label_6->setText(QApplication::translate("addRoiDialog", "Image_2", 0));
        toolButton_img2->setText(QApplication::translate("addRoiDialog", "...", 0));
        label_7->setText(QApplication::translate("addRoiDialog", "Image_3", 0));
        toolButton_img3->setText(QApplication::translate("addRoiDialog", "...", 0));
        label_8->setText(QApplication::translate("addRoiDialog", "iddeployment", 0));
    } // retranslateUi

};

namespace Ui {
    class addRoiDialog: public Ui_addRoiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDROIDIALOG_H
