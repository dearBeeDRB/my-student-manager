/********************************************************************************
** Form generated from reading UI file 'delete.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Delete
{
public:
    QLabel *label;
    QLineEdit *txtId;
    QPushButton *pushButton;

    void setupUi(QDialog *Delete)
    {
        if (Delete->objectName().isEmpty())
            Delete->setObjectName("Delete");
        Delete->resize(500, 399);
        Delete->setMaximumSize(QSize(500, 400));
        label = new QLabel(Delete);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 71, 21));
        txtId = new QLineEdit(Delete);
        txtId->setObjectName("txtId");
        txtId->setGeometry(QRect(90, 20, 231, 26));
        pushButton = new QPushButton(Delete);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 20, 93, 29));

        retranslateUi(Delete);

        QMetaObject::connectSlotsByName(Delete);
    } // setupUi

    void retranslateUi(QDialog *Delete)
    {
        Delete->setWindowTitle(QCoreApplication::translate("Delete", "Delete Student", nullptr));
        label->setText(QCoreApplication::translate("Delete", "ID", nullptr));
        pushButton->setText(QCoreApplication::translate("Delete", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete: public Ui_Delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H
