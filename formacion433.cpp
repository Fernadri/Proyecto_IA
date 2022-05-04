#include "formacion433.h"
#include "ui_formacion433.h"
#include "elegirformacion.h"
#include "Equipo.h"
#include "mainwindow.h"
#include "Cuerpotecnico.h"
#include <string>

CuerpoTecnico cuerp;
extern Equipo myteam;
extern string nombre_;

formacion433::formacion433(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formacion433)
{
    ui->setupUi(this);
}

formacion433::~formacion433()
{
    delete ui;
}

void formacion433::on_pushButton_mostrar_clicked()
{
    ui->lineEdit_nombre_equipo_433->setText(QString::fromStdString(nombre_));
}

void formacion433::on_pushButton_portero_clicked()
{

}
