#include "registrarse.h"
#include "ui_registrarse.h"
#include "fallo_registrar.h"
#include "formacion433.h"

int cargo;

Registrarse::Registrarse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registrarse)
{
    ui->setupUi(this);
}

Registrarse::~Registrarse()
{
    delete ui;
}

QString Registrarse::getUsuario(){
    QString usuario_ = ui->lineEdit_Usuario_regis->text();
    return usuario_;
}

QString Registrarse::getContrasena(){
    QString contrasena_ = ui->lineEdit_Contrasena_regis->text();
    return contrasena_;
}

QString Registrarse::getCargo(){
    QString cargo_ = ui->lineEdit_cargo_regis->text();
    return cargo_;
}

void Registrarse::on_buttonBox_accepted()
{
    cargo = ui->lineEdit_cargo_regis->text().toInt();
    if (cargo != 1 && cargo != 2)
    {
        fallo_registrar fallo;
        fallo.exec();
    }

}
