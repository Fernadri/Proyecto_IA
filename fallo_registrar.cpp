#include "fallo_registrar.h"
#include "ui_fallo_registrar.h"

fallo_registrar::fallo_registrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fallo_registrar)
{
    ui->setupUi(this);
}

fallo_registrar::~fallo_registrar()
{
    delete ui;
}
