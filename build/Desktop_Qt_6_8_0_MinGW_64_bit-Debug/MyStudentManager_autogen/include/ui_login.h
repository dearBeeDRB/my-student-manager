/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtUsername;
    QLabel *label_2;
    QLineEdit *txtPassword;
    QPushButton *btnLogin;
    QLabel *label_3;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(500, 400);
        Login->setMaximumSize(QSize(500, 400));
        Login->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 170, 255);"));
        formLayoutWidget = new QWidget(Login);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 140, 461, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtUsername = new QLineEdit(formLayoutWidget);
        txtUsername->setObjectName("txtUsername");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtUsername);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPassword);

        btnLogin = new QPushButton(Login);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(200, 250, 93, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        btnLogin->setFont(font);
        btnLogin->setStyleSheet(QString::fromUtf8("background:none;"));
        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 60, 361, 31));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label_3->setFont(font1);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Login", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password", nullptr));
        btnLogin->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Enter Username and Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
