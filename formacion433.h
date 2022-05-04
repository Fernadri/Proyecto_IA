#ifndef FORMACION433_H
#define FORMACION433_H

#include <QDialog>

namespace Ui {
class formacion433;
}

class formacion433 : public QDialog
{
    Q_OBJECT

public:
    explicit formacion433(QWidget *parent = nullptr);
    ~formacion433();

private slots:

    void on_pushButton_mostrar_clicked();

    void on_pushButtonOFENSIVA_clicked();

    void on_pushButton_EQUILIBRADA_clicked();

    void on_pushButton_DEFENSIVA_clicked();

private:
    Ui::formacion433 *ui;
};

#endif // FORMACION433_H
