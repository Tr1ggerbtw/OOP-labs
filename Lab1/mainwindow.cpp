#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dialogwork1.h"
#include "dialogwork2.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Main menu");
    ui->lineEditResult->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::enableMainWindow()
{
    this->setEnabled(true);
}

void MainWindow::on_actionWork1_triggered()
{
    this->setEnabled(false);

    DialogWork1 *wndDialogWork1 = new DialogWork1(this);

    connect(wndDialogWork1, SIGNAL(finished(int)), this, SLOT(enableMainWindow()));
    wndDialogWork1->setAttribute(Qt::WA_DeleteOnClose);
    wndDialogWork1->show();
}

void MainWindow::on_actionWork2_triggered()
{
    DialogWork2 wndDialogWork2(this);
    if(wndDialogWork2.exec() == QDialog::Accepted)
    {
        QString selectedGroup = wndDialogWork2.getSelectedGroup();
        ui->lineEditResult->setText("Chosen group: " + selectedGroup);
    }
}


