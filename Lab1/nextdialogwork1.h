#ifndef NEXTDIALOGWORK1_H
#define NEXTDIALOGWORK1_H

#include <QDialog>

namespace Ui {
class nextDialogwork1;
}

class nextDialogwork1 : public QDialog
{
    Q_OBJECT

public:
    explicit nextDialogwork1(QWidget *parent = nullptr);
    ~nextDialogwork1();

private slots:
    void on_btnBackwards_clicked();
    void on_btnYes_clicked();
    void on_btnCancel_clicked();

private:
    Ui::nextDialogwork1 *ui;
};

#endif // NEXTDIALOGWORK1_H
