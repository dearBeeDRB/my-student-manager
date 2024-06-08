#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrAdd = new Add();
    ptrFind = new Find();
    ptrDeletes = new DeleteS();
    ptrUpdate = new Update();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrAdd;
    delete ptrFind;
    delete ptrDeletes;
    delete ptrUpdate;
}

void MainWindow::on_pushButton_clicked()
{
    ptrAdd -> show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrFind -> show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ptrDeletes -> show();
}


void MainWindow::on_pushButton_4_clicked()
{
    ptrUpdate -> show();
}

