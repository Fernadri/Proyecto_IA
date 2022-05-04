#include "error_registrarse.h"
#include "ui_error_registrarse.h"

error_registrarse::error_registrarse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::error_registrarse)
{
    ui->setupUi(this);
}

error_registrarse::~error_registrarse()
{
    delete ui;
}
