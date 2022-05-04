#ifndef REGISTRARSE_H
#define REGISTRARSE_H

#include <QDialog>
#include <string>


namespace Ui {
class Registrarse;
}

class Registrarse : public QDialog
{
    Q_OBJECT

public:
    explicit Registrarse(QWidget *parent = nullptr);
    ~Registrarse();
    QString getUsuario();
    QString getContrasena();
    QString getCargo();
private slots:
    void on_buttonBox_accepted();

private:
    Ui::Registrarse *ui;
};

#endif // REGISTRARSE_H
