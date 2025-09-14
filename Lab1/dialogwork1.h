#ifndef DIALOGWORK1_H
#define DIALOGWORK1_H

#include <QDialog>

namespace Ui {
class DialogWork1;
}

class DialogWork1 : public QDialog
{
    Q_OBJECT

public:
    explicit DialogWork1(QWidget *parent = nullptr);
    ~DialogWork1();
    void showDialogWork1();

private slots:
    void on_btnCancelWork1_clicked();

    void on_btnNextWork1_clicked();

private:
    Ui::DialogWork1 *ui;
};

#endif // DIALOGWORK1_H
