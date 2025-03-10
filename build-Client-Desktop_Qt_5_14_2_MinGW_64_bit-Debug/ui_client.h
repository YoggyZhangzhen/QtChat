/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *name_LE;
    QLabel *label_2;
    QLineEdit *pwd_LE;
    QHBoxLayout *horizontalLayout;
    QPushButton *regist_PB;
    QSpacerItem *horizontalSpacer;
    QPushButton *login_PB;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(512, 318);
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        Client->setFont(font);
        verticalLayout = new QVBoxLayout(Client);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Client);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        name_LE = new QLineEdit(Client);
        name_LE->setObjectName(QString::fromUtf8("name_LE"));

        gridLayout->addWidget(name_LE, 0, 1, 1, 1);

        label_2 = new QLabel(Client);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pwd_LE = new QLineEdit(Client);
        pwd_LE->setObjectName(QString::fromUtf8("pwd_LE"));
        pwd_LE->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(pwd_LE, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        regist_PB = new QPushButton(Client);
        regist_PB->setObjectName(QString::fromUtf8("regist_PB"));

        horizontalLayout->addWidget(regist_PB);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        login_PB = new QPushButton(Client);
        login_PB->setObjectName(QString::fromUtf8("login_PB"));

        horizontalLayout->addWidget(login_PB);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "\347\231\273\345\275\225/\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("Client", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Client", "\345\257\206\347\240\201\357\274\232", nullptr));
        regist_PB->setText(QCoreApplication::translate("Client", "\346\263\250\345\206\214", nullptr));
        login_PB->setText(QCoreApplication::translate("Client", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
