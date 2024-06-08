/********************************************************************************
** Form generated from reading UI file 'update.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_H
#define UI_UPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Update
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtName;
    QLabel *label_2;
    QLineEdit *txtId;
    QLabel *label_3;
    QLineEdit *txtDept;
    QLabel *label_4;
    QLineEdit *txtBirth;
    QPushButton *updateBtn;

    void setupUi(QDialog *Update)
    {
        if (Update->objectName().isEmpty())
            Update->setObjectName("Update");
        Update->resize(500, 400);
        Update->setMaximumSize(QSize(500, 400));
        Update->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 170, 255);"));
        formLayoutWidget = new QWidget(Update);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 19, 461, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtName = new QLineEdit(formLayoutWidget);
        txtName->setObjectName("txtName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtName);

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

        updateBtn = new QPushButton(Update);
        updateBtn->setObjectName("updateBtn");
        updateBtn->setGeometry(QRect(190, 200, 93, 31));
        updateBtn->setStyleSheet(QString::fromUtf8("background:none;"));

        retranslateUi(Update);

        QMetaObject::connectSlotsByName(Update);
    } // setupUi

    void retranslateUi(QDialog *Update)
    {
        Update->setWindowTitle(QCoreApplication::translate("Update", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Update", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Update", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("Update", "Dept.", nullptr));
        label_4->setText(QCoreApplication::translate("Update", "Date of Birth", nullptr));
        updateBtn->setText(QCoreApplication::translate("Update", "UPDATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Update: public Ui_Update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_H
