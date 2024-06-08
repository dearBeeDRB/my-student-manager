/********************************************************************************
** Form generated from reading UI file 'deletes.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETES_H
#define UI_DELETES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteS
{
public:
    QLabel *label;
    QLineEdit *txtSearch;
    QPushButton *deleteStu;

    void setupUi(QDialog *DeleteS)
    {
        if (DeleteS->objectName().isEmpty())
            DeleteS->setObjectName("DeleteS");
        DeleteS->resize(500, 400);
        DeleteS->setMaximumSize(QSize(500, 400));
        DeleteS->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 170, 255);"));
        label = new QLabel(DeleteS);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 71, 21));
        txtSearch = new QLineEdit(DeleteS);
        txtSearch->setObjectName("txtSearch");
        txtSearch->setGeometry(QRect(70, 20, 281, 26));
        deleteStu = new QPushButton(DeleteS);
        deleteStu->setObjectName("deleteStu");
        deleteStu->setGeometry(QRect(380, 20, 93, 29));
        deleteStu->setStyleSheet(QString::fromUtf8("background:none;"));

        retranslateUi(DeleteS);

        QMetaObject::connectSlotsByName(DeleteS);
    } // setupUi

    void retranslateUi(QDialog *DeleteS)
    {
        DeleteS->setWindowTitle(QCoreApplication::translate("DeleteS", "Delete Student", nullptr));
        label->setText(QCoreApplication::translate("DeleteS", "ID", nullptr));
        deleteStu->setText(QCoreApplication::translate("DeleteS", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteS: public Ui_DeleteS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETES_H
