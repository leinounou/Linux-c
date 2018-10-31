/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddDialogClass
{
public:
    QGridLayout *gridLayout;
    QLineEdit *emailEdit;
    QLineEdit *nameEdit;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QLabel *nameText;
    QLabel *emailText;

    void setupUi(QDialog *AddDialogClass)
    {
        if (AddDialogClass->objectName().isEmpty())
            AddDialogClass->setObjectName(QStringLiteral("AddDialogClass"));
        AddDialogClass->resize(275, 111);
        gridLayout = new QGridLayout(AddDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        emailEdit = new QLineEdit(AddDialogClass);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));

        gridLayout->addWidget(emailEdit, 1, 1, 1, 2);

        nameEdit = new QLineEdit(AddDialogClass);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 2);

        spacerItem = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 3, 0, 1, 2);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 2, 1, 1, 1);

        okButton = new QPushButton(AddDialogClass);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 3, 2, 1, 1);

        nameText = new QLabel(AddDialogClass);
        nameText->setObjectName(QStringLiteral("nameText"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameText->sizePolicy().hasHeightForWidth());
        nameText->setSizePolicy(sizePolicy);

        gridLayout->addWidget(nameText, 0, 0, 1, 1);

        emailText = new QLabel(AddDialogClass);
        emailText->setObjectName(QStringLiteral("emailText"));

        gridLayout->addWidget(emailText, 1, 0, 1, 1);

        QWidget::setTabOrder(nameEdit, emailEdit);
        QWidget::setTabOrder(emailEdit, okButton);

        retranslateUi(AddDialogClass);
        QObject::connect(okButton, SIGNAL(clicked()), AddDialogClass, SLOT(accept()));

        QMetaObject::connectSlotsByName(AddDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AddDialogClass)
    {
        AddDialogClass->setWindowTitle(QApplication::translate("AddDialogClass", "Add Address", 0));
        okButton->setText(QApplication::translate("AddDialogClass", "OK", 0));
        nameText->setText(QApplication::translate("AddDialogClass", "Name:", 0));
        emailText->setText(QApplication::translate("AddDialogClass", "Email:", 0));
    } // retranslateUi

};

namespace Ui {
    class AddDialogClass: public Ui_AddDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
