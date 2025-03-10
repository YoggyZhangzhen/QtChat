/********************************************************************************
** Form generated from reading UI file 'onlineuser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONLINEUSER_H
#define UI_ONLINEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_OnlineUser
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *OnlineUser)
    {
        if (OnlineUser->objectName().isEmpty())
            OnlineUser->setObjectName(QString::fromUtf8("OnlineUser"));
        OnlineUser->resize(400, 300);
        horizontalLayout = new QHBoxLayout(OnlineUser);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(OnlineUser);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);


        retranslateUi(OnlineUser);

        QMetaObject::connectSlotsByName(OnlineUser);
    } // setupUi

    void retranslateUi(QDialog *OnlineUser)
    {
        OnlineUser->setWindowTitle(QCoreApplication::translate("OnlineUser", "\345\234\250\347\272\277\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OnlineUser: public Ui_OnlineUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONLINEUSER_H
