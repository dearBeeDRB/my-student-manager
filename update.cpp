#include "update.h"
#include "ui_update.h"
#include <QMessageBox>

Update::Update(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Update)
{
    ui->setupUi(this);
}

Update::~Update()
{
    delete ui;
}



void Update::on_updateBtn_clicked()
{
    QString studentID = ui->txtId->text();
    QString studentName = ui->txtName->text();
    QString studentDept = ui->txtDept->text();
    QString studentBirth = ui->txtBirth->text();

    qDebug() << "Student ID : " << studentID << "\n";

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/HP/OneDrive/Documents/Database/StudentsData.db");

    if (!database.open()) {
        qDebug() << "ERROR: Unable to open database.\n";
        QMessageBox::critical(this, "Database Error", "Unable to open database.");
        return;
    } else {
        qDebug() << "Database opened successfully.\n";
    }

    QSqlQuery query(database);
    query.prepare("UPDATE Students SET StudentName = :name, Department = :dept, DateOfBirth = :birth WHERE StudentID = :id");
    query.bindValue(":name", studentName);
    query.bindValue(":dept", studentDept);
    query.bindValue(":birth", studentBirth);
    query.bindValue(":id", studentID);

    if (!query.exec()) {
        qDebug() << "Error updating table: " << query.lastError().text();
        QMessageBox::critical(this, "Update Error", "Error updating student in the database.");
    } else {
        qDebug() << "Student updated successfully.\n";
        QMessageBox::information(this, "Update Success", "Student updated successfully.");
    }

    database.close();
    ui->txtName->clear();
    ui->txtId->clear();
    ui->txtDept->clear();
    ui->txtBirth->clear();
}

