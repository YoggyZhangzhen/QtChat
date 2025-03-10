/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *show_TE;
    QHBoxLayout *horizontalLayout;
    QLineEdit *input_LE;
    QPushButton *send_PB;

    void setupUi(QDialog *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->resize(400, 300);
        verticalLayout = new QVBoxLayout(Chat);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        show_TE = new QTextEdit(Chat);
        show_TE->setObjectName(QString::fromUtf8("show_TE"));
        show_TE->setReadOnly(true);

        verticalLayout->addWidget(show_TE);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        input_LE = new QLineEdit(Chat);
        input_LE->setObjectName(QString::fromUtf8("input_LE"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        input_LE->setFont(font);

        horizontalLayout->addWidget(input_LE);

        send_PB = new QPushButton(Chat);
        send_PB->setObjectName(QString::fromUtf8("send_PB"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(14);
        send_PB->setFont(font1);

        horizontalLayout->addWidget(send_PB);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QDialog *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Dialog", nullptr));
        send_PB->setText(QCoreApplication::translate("Chat", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
