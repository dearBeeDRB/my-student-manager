#include "deletes.h"
#include "ui_deletes.h"
#include <QMessageBox>

DeleteS::DeleteS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteS)
{
    ui->setupUi(this);
}

DeleteS::~DeleteS()
{
    delete ui;
}

void DeleteS::on_deleteStu_clicked()
{
    QString id = ui->txtSearch->text();
    qDebug() << "Student ID : " << id << "\n";

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
    query.prepare("DELETE FROM Students WHERE StudentID = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Error deleting from table: " << query.lastError().text();
        QMessageBox::critical(this, "Delete Error", "Error deleting student from the database.");
    } else {
        qDebug() << "Student deleted successfully.\n";
        QMessageBox::information(this, "Delete Success", "Student deleted successfully.");
    }

    database.close();
    ui -> txtSearch -> clear();
}
