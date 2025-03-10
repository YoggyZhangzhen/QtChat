/********************************************************************************
** Form generated from reading UI file 'sharefile.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREFILE_H
#define UI_SHAREFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShareFile
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *allSelected_PB;
    QPushButton *cancleSelected_PB;
    QSpacerItem *verticalSpacer;
    QPushButton *ok_PB;

    void setupUi(QDialog *ShareFile)
    {
        if (ShareFile->objectName().isEmpty())
            ShareFile->setObjectName(QString::fromUtf8("ShareFile"));
        ShareFile->resize(400, 300);
        horizontalLayout = new QHBoxLayout(ShareFile);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(ShareFile);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        allSelected_PB = new QPushButton(ShareFile);
        allSelected_PB->setObjectName(QString::fromUtf8("allSelected_PB"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        allSelected_PB->setFont(font);

        verticalLayout->addWidget(allSelected_PB);

        cancleSelected_PB = new QPushButton(ShareFile);
        cancleSelected_PB->setObjectName(QString::fromUtf8("cancleSelected_PB"));
        cancleSelected_PB->setFont(font);

        verticalLayout->addWidget(cancleSelected_PB);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        ok_PB = new QPushButton(ShareFile);
        ok_PB->setObjectName(QString::fromUtf8("ok_PB"));
        ok_PB->setFont(font);

        verticalLayout->addWidget(ok_PB);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ShareFile);

        QMetaObject::connectSlotsByName(ShareFile);
    } // setupUi

    void retranslateUi(QDialog *ShareFile)
    {
        ShareFile->setWindowTitle(QCoreApplication::translate("ShareFile", "Dialog", nullptr));
        allSelected_PB->setText(QCoreApplication::translate("ShareFile", "\345\205\250\351\200\211", nullptr));
        cancleSelected_PB->setText(QCoreApplication::translate("ShareFile", "\345\217\226\346\266\210\345\205\250\351\200\211", nullptr));
        ok_PB->setText(QCoreApplication::translate("ShareFile", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShareFile: public Ui_ShareFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREFILE_H
