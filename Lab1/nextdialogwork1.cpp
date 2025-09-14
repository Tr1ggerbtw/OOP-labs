#include "nextdialogwork1.h"
#include "ui_nextdialogwork1.h"

nextDialogwork1::nextDialogwork1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::nextDialogwork1)
{
    ui->setupUi(this);
    setWindowTitle("Next dialogue of Work1");
}

nextDialogwork1::~nextDialogwork1()
{
    delete ui;
}

void nextDialogwork1::on_btnBackwards_clicked()
{
    this->done(2);
}

void nextDialogwork1::on_btnCancel_clicked()
{
    this->reject();
}

void nextDialogwork1::on_btnYes_clicked()
{
    this->accept();
}



