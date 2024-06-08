#include "find.h"
#include "ui_find.h"
#include <QMessageBox>

Find::Find(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Find)
    , model(nullptr)
{
    ui->setupUi(this);
}

Find::~Find()
{
    delete ui;
    if (model != nullptr) {
        delete model;
    }
}

void Find::on_btnSearch_clicked()
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

    if (model == nullptr) {
        model = new QSqlQueryModel();
    }

    QSqlQuery query(database);
    query.prepare("SELECT * FROM Students WHERE StudentID LIKE :id");
    query.bindValue(":id", "%" + id + "%");

    if (!query.exec()) {
        qDebug() << "Error executing query: " << query.lastError().text();
        QMessageBox::critical(this, "Query Error", "Error executing search query.");
        database.close();
        return;
    }

    model->setQuery(query);
    if (model->lastError().isValid()) {
        qDebug() << "Error setting query model: " << model->lastError().text();
        QMessageBox::critical(this, "Model Error", "Error setting query model.");
    } else {
        ui->resShow->setModel(model);
    }

    database.close();
    ui -> txtSearch -> clear();
}
