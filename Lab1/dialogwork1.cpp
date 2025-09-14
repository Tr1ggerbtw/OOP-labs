#include "dialogwork1.h"
#include "ui_dialogwork1.h"

#include "nextdialogwork1.h"

DialogWork1::DialogWork1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogWork1)
{
    ui->setupUi(this);
    setWindowTitle("First dialogue of Work1");
}

DialogWork1::~DialogWork1()
{
    delete ui;
}

void DialogWork1::on_btnCancelWork1_clicked()
{
    this->close();
}


void DialogWork1::on_btnNextWork1_clicked()
{
    this->hide();
    nextDialogwork1* nextDialog = new nextDialogwork1(this);
    int result = nextDialog->exec();

    if (result == QDialog::Accepted) {
        this->accept();
    }
    else if (result == 2) {
        this->show();
    }
    else {
        this->accept();
    }

    delete nextDialog;
}

