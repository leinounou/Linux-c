/********************************************************************************
** Form generated from reading UI file 'addressbook.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOK_H
#define UI_ADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookClass
{
public:
    QGridLayout *gridLayout;
    QLabel *emailLabel;
    QLabel *nameLabel;
    QVBoxLayout *vboxLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QSpacerItem *spacerItem;
    QListWidget *addressList;

    void setupUi(QWidget *AddressBookClass)
    {
        if (AddressBookClass->objectName().isEmpty())
            AddressBookClass->setObjectName(QStringLiteral("AddressBookClass"));
        AddressBookClass->resize(411, 213);
        gridLayout = new QGridLayout(AddressBookClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        emailLabel = new QLabel(AddressBookClass);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        gridLayout->addWidget(emailLabel, 2, 0, 1, 2);

        nameLabel = new QLabel(AddressBookClass);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        addButton = new QPushButton(AddressBookClass);
        addButton->setObjectName(QStringLiteral("addButton"));

        vboxLayout->addWidget(addButton);

        deleteButton = new QPushButton(AddressBookClass);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        vboxLayout->addWidget(deleteButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        gridLayout->addLayout(vboxLayout, 0, 1, 1, 1);

        addressList = new QListWidget(AddressBookClass);
        addressList->setObjectName(QStringLiteral("addressList"));

        gridLayout->addWidget(addressList, 0, 0, 1, 1);


        retranslateUi(AddressBookClass);

        QMetaObject::connectSlotsByName(AddressBookClass);
    } // setupUi

    void retranslateUi(QWidget *AddressBookClass)
    {
        AddressBookClass->setWindowTitle(QApplication::translate("AddressBookClass", "AddressBook", 0));
        emailLabel->setText(QString());
        nameLabel->setText(QApplication::translate("AddressBookClass", "<No item selected>", 0));
        addButton->setText(QApplication::translate("AddressBookClass", "Add", 0));
        deleteButton->setText(QApplication::translate("AddressBookClass", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class AddressBookClass: public Ui_AddressBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOK_H
