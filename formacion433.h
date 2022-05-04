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

    void on_pushButton_portero_clicked();

    void on_pushButton_central_d_clicked();

    void on_pushButton_lateral_d_clicked();

    void on_pushButton_central_i_clicked();

    void on_pushButton_lateral_i_clicked();

    void on_pushButton_lateral_mcd_clicked();

    void on_pushButton_lateral_mcc_clicked();

    void on_pushButton_lateral_mci_clicked();

    void on_pushButton_lateral_ed_clicked();

    void on_pushButton_lateral_DC_clicked();

    void on_pushButton_lateral_ei_clicked();

private:
    Ui::formacion433 *ui;
};

#endif // FORMACION433_H
