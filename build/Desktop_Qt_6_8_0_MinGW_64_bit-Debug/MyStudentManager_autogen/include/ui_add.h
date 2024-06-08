/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *txtName;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtId;
    QLabel *label_3;
    QLineEdit *txtDept;
    QLabel *label_4;
    QLineEdit *txtBirth;
    QPushButton *btnSave;

    void setupUi(QDialog *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName("Add");
        Add->resize(500, 400);
        Add->setMaximumSize(QSize(500, 400));
        Add->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 170, 255);"));
        formLayoutWidget = new QWidget(Add);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 481, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtName = new QLineEdit(formLayoutWidget);
        txtName->setObjectName("txtName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtName);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtId = new QLineEdit(formLayoutWidget);
        txtId->setObjectName("txtId");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtId);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtDept = new QLineEdit(formLayoutWidget);
        txtDept->setObjectName("txtDept");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtDept);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtBirth = new QLineEdit(formLayoutWidget);
        txtBirth->setObjectName("txtBirth");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtBirth);

        btnSave = new QPushButton(Add);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(190, 190, 101, 41));
        btnSave->setStyleSheet(QString::fromUtf8("background:none;"));

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QDialog *Add)
    {
        Add->setWindowTitle(QCoreApplication::translate("Add", "Add Student", nullptr));
        label->setText(QCoreApplication::translate("Add", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Add", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("Add", "Dept.", nullptr));
        label_4->setText(QCoreApplication::translate("Add", "Birth Date", nullptr));
        btnSave->setText(QCoreApplication::translate("Add", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
