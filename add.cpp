#include "add.h"
#include "ui_add.h"
#include <QMessageBox>

Add::Add(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Add)
{
    ui->setupUi(this);
}

Add::~Add()
{
    delete ui;
}

void Add::on_btnSave_clicked()
{
    QString studentName = ui->txtName->text();
    QString studentID = ui->txtId->text();
    QString studentDept = ui->txtDept->text();
    QString studentBirth = ui->txtBirth->text();

    qDebug() << studentName << " " << studentID << " " << studentDept << " " << studentBirth << "\n";

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/HP/OneDrive/Documents/Database/StudentsData.db");

    if (!QFile::exists("C:/Users/HP/OneDrive/Documents/Database/StudentsData.db")) {
        qDebug() << "Database file doesn't exist\n";
        QMessageBox::critical(this, "Database Error", "Database file doesn't exist.");
        return;
    }

    if (!database.open()) {
        qDebug() << "ERROR: Unable to open database.\n";
        QMessageBox::critical(this, "Database Error", "Unable to open database.");
        return;
    } else {
        qDebug() << "Database opened successfully.\n";
    }

    QSqlQuery query(database);
    query.prepare("INSERT INTO Students (StudentName, StudentID, Department, DateOfBirth) "
                  "VALUES (:studentName, :studentID, :studentDept, :studentBirth)");
    query.bindValue(":studentName", studentName);
    query.bindValue(":studentID", studentID);
    query.bindValue(":studentDept", studentDept);
    query.bindValue(":studentBirth", studentBirth);

    if (!query.exec()) {
        qDebug() << "Error inserting into table: " << query.lastError().text();
        QMessageBox::critical(this, "Insert Error", "Error inserting data into the database.");
    } else {
        qDebug() << "Data inserted successfully.\n";
        QMessageBox::information(this, "Insertion Success", "Student added successfully.");
        ui->txtName->clear();
        ui->txtId->clear();
        ui->txtDept->clear();
        ui->txtBirth->clear();
    }

    database.close();
}
