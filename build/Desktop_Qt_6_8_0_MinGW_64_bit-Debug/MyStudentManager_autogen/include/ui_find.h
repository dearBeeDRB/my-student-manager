/********************************************************************************
** Form generated from reading UI file 'find.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_H
#define UI_FIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Find
{
public:
    QLabel *label;
    QLineEdit *txtSearch;
    QPushButton *btnSearch;
    QTableView *resShow;

    void setupUi(QDialog *Find)
    {
        if (Find->objectName().isEmpty())
            Find->setObjectName("Find");
        Find->resize(500, 400);
        Find->setMaximumSize(QSize(500, 400));
        Find->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 170, 255);"));
        label = new QLabel(Find);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 51, 31));
        txtSearch = new QLineEdit(Find);
        txtSearch->setObjectName("txtSearch");
        txtSearch->setGeometry(QRect(62, 30, 291, 26));
        btnSearch = new QPushButton(Find);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(380, 30, 93, 29));
        btnSearch->setStyleSheet(QString::fromUtf8("background:none;"));
        resShow = new QTableView(Find);
        resShow->setObjectName("resShow");
        resShow->setGeometry(QRect(10, 110, 481, 251));
        resShow->setStyleSheet(QString::fromUtf8("background:none;"));

        retranslateUi(Find);

        QMetaObject::connectSlotsByName(Find);
    } // setupUi

    void retranslateUi(QDialog *Find)
    {
        Find->setWindowTitle(QCoreApplication::translate("Find", "Find Student", nullptr));
        label->setText(QCoreApplication::translate("Find", "ID", nullptr));
        btnSearch->setText(QCoreApplication::translate("Find", "SEARCH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Find: public Ui_Find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_H
