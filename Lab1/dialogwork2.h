#ifndef DIALOGWORK2_H
#define DIALOGWORK2_H

#include <QDialog>

namespace Ui {
class DialogWork2;
}

class DialogWork2 : public QDialog
{
    Q_OBJECT

public:
    explicit DialogWork2(QWidget *parent = nullptr);
    ~DialogWork2();
    QString getSelectedGroup() const;
private slots:
    void on_btnCancelWork2_clicked();
    void on_btnYesWork2_clicked();

private:
    Ui::DialogWork2 *ui;
};

#endif // DIALOGWORK2_H
