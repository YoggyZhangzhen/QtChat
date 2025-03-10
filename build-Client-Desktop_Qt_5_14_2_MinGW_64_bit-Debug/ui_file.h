/********************************************************************************
** Form generated from reading UI file 'file.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_File
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QGridLayout *gridLayout;
    QPushButton *return_PB;
    QPushButton *flushFile_PB;
    QPushButton *mkdir_PB;
    QPushButton *rename_PB;
    QPushButton *rmdir_PB;
    QPushButton *share_PB;
    QPushButton *remove_PB;
    QPushButton *download_PB;
    QPushButton *mv_PB;
    QPushButton *upload_PB;

    void setupUi(QDialog *File)
    {
        if (File->objectName().isEmpty())
            File->setObjectName(QString::fromUtf8("File"));
        File->resize(400, 300);
        horizontalLayout = new QHBoxLayout(File);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(File);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(listWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        return_PB = new QPushButton(File);
        return_PB->setObjectName(QString::fromUtf8("return_PB"));

        gridLayout->addWidget(return_PB, 0, 0, 1, 1);

        flushFile_PB = new QPushButton(File);
        flushFile_PB->setObjectName(QString::fromUtf8("flushFile_PB"));

        gridLayout->addWidget(flushFile_PB, 0, 1, 1, 1);

        mkdir_PB = new QPushButton(File);
        mkdir_PB->setObjectName(QString::fromUtf8("mkdir_PB"));

        gridLayout->addWidget(mkdir_PB, 1, 0, 1, 1);

        rename_PB = new QPushButton(File);
        rename_PB->setObjectName(QString::fromUtf8("rename_PB"));

        gridLayout->addWidget(rename_PB, 1, 1, 1, 1);

        rmdir_PB = new QPushButton(File);
        rmdir_PB->setObjectName(QString::fromUtf8("rmdir_PB"));

        gridLayout->addWidget(rmdir_PB, 2, 0, 1, 1);

        share_PB = new QPushButton(File);
        share_PB->setObjectName(QString::fromUtf8("share_PB"));

        gridLayout->addWidget(share_PB, 2, 1, 1, 1);

        remove_PB = new QPushButton(File);
        remove_PB->setObjectName(QString::fromUtf8("remove_PB"));

        gridLayout->addWidget(remove_PB, 3, 0, 1, 1);

        download_PB = new QPushButton(File);
        download_PB->setObjectName(QString::fromUtf8("download_PB"));

        gridLayout->addWidget(download_PB, 3, 1, 1, 1);

        mv_PB = new QPushButton(File);
        mv_PB->setObjectName(QString::fromUtf8("mv_PB"));

        gridLayout->addWidget(mv_PB, 4, 0, 1, 1);

        upload_PB = new QPushButton(File);
        upload_PB->setObjectName(QString::fromUtf8("upload_PB"));

        gridLayout->addWidget(upload_PB, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(File);

        QMetaObject::connectSlotsByName(File);
    } // setupUi

    void retranslateUi(QDialog *File)
    {
        File->setWindowTitle(QCoreApplication::translate("File", "Dialog", nullptr));
        return_PB->setText(QCoreApplication::translate("File", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
        flushFile_PB->setText(QCoreApplication::translate("File", "\345\210\267\346\226\260\346\226\207\344\273\266", nullptr));
        mkdir_PB->setText(QCoreApplication::translate("File", "\345\210\233\345\273\272\346\226\207\344\273\266\345\244\271", nullptr));
        rename_PB->setText(QCoreApplication::translate("File", "\351\207\215\345\221\275\345\220\215", nullptr));
        rmdir_PB->setText(QCoreApplication::translate("File", "\345\210\240\351\231\244\346\226\207\344\273\266\345\244\271", nullptr));
        share_PB->setText(QCoreApplication::translate("File", "\345\210\206\344\272\253\346\226\207\344\273\266", nullptr));
        remove_PB->setText(QCoreApplication::translate("File", "\345\210\240\351\231\244\346\226\207\344\273\266", nullptr));
        download_PB->setText(QCoreApplication::translate("File", "\344\270\213\350\275\275\346\226\207\344\273\266", nullptr));
        mv_PB->setText(QCoreApplication::translate("File", "\347\247\273\345\212\250\346\226\207\344\273\266", nullptr));
        upload_PB->setText(QCoreApplication::translate("File", "\344\270\212\344\274\240\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class File: public Ui_File {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
