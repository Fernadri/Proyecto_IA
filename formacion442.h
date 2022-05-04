#ifndef FORMACION442_H
#define FORMACION442_H

#include <QDialog>

namespace Ui {
class formacion442;
}

class formacion442 : public QDialog
{
    Q_OBJECT

public:
    explicit formacion442(QWidget *parent = nullptr);
    ~formacion442();

private slots:
    void on_pushButton_mostrar_442_clicked();

    void on_pushButton_portero_clicked();

    void on_pushButton_lateral_d_clicked();

    void on_pushButton_central_d_clicked();

    void on_pushButton_central_i_clicked();

    void on_pushButton_lateral_i_clicked();

    void on_pushButton_lateral_md_clicked();

    void on_pushButton_lateral_mcd_2_clicked();

    void on_pushButton_lateral_mci_clicked();

    void on_pushButton_lateral_mi_clicked();

    void on_pushButton_lateral_dcd_clicked();

    void on_pushButton_lateral_DCi_clicked();

    void on_pushButtonOFENSIVA_clicked();

    void on_pushButtonEQUILIBRADA_clicked();

    void on_pushButtonDEFENSIVA_clicked();

private:
    Ui::formacion442 *ui;
};

#endif // FORMACION442_H
