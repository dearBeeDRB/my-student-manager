#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnLogin_clicked()
{
    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/HP/OneDrive/Documents/Database/StudentsData.db");

    if (!database.open()) {
        qDebug() << "ERROR: Unable to open database.\n";
        QMessageBox::critical(this, "Database Error", "Unable to open database.");
        return;
    }

    QSqlQuery query(database);
    query.prepare("SELECT * FROM Users WHERE Username = :username AND Password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "Error executing query: " << query.lastError().text();
        QMessageBox::critical(this, "Query Error", "Error executing login query.");
        return;
    }

    if (query.next()) {
        accept();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
    }

    database.close();
}
