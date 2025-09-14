#include "dialogwork2.h"
#include "ui_dialogwork2.h"

DialogWork2::DialogWork2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogWork2)
{
    ui->setupUi(this);

    ui->listWidgetWork2->addItem("IM-41");
    ui->listWidgetWork2->addItem("IM-42");
    ui->listWidgetWork2->addItem("IM-43");
    ui->listWidgetWork2->addItem("IM-44");
    ui->listWidgetWork2->addItem("IM-45");
}

DialogWork2::~DialogWork2()
{
    delete ui;
}

void DialogWork2::on_btnCancelWork2_clicked()
{
    this->reject();
}

void DialogWork2::on_btnYesWork2_clicked()
{
    if(ui->listWidgetWork2->currentItem()) {
        this->accept();
    }
}

QString DialogWork2::getSelectedGroup() const
{
    if(ui->listWidgetWork2->currentItem()) {
        return ui->listWidgetWork2->currentItem()->text();
    }
    return QString();
}


