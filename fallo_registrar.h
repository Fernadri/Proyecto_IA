#ifndef FALLO_REGISTRAR_H
#define FALLO_REGISTRAR_H

#include <QDialog>

namespace Ui {
class fallo_registrar;
}

class fallo_registrar : public QDialog
{
    Q_OBJECT

public:
    explicit fallo_registrar(QWidget *parent = nullptr);
    ~fallo_registrar();

private:
    Ui::fallo_registrar *ui;
};

#endif // FALLO_REGISTRAR_H
