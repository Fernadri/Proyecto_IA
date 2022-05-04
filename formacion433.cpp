#include "formacion433.h"
#include "ui_formacion433.h"
#include "elegirformacion.h"
#include "Equipo.h"
#include "mainwindow.h"
#include "Cuerpotecnico.h"
#include <string>
#include "registrarse.h"

extern Equipo myteam;
extern string nombre_;
extern int cargo;
string nivel;
SegundoEntrenador entre2;
int porcen;

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
    if (cargo == 1){
        ui->pushButtonOFENSIVA->setEnabled(0);
        ui->pushButton_EQUILIBRADA->setEnabled(0);
        ui->pushButton_DEFENSIVA->setEnabled(0);
    }else{
        ui->pushButton_central_d->setEnabled(0);
        ui->pushButton_central_i->setEnabled(0);
        ui->pushButton_lateral_d->setEnabled(0);
        ui->pushButton_lateral_i->setEnabled(0);
        ui->pushButton_lateral_DC->setEnabled(0);
        ui->pushButton_lateral_ed->setEnabled(0);
        ui->pushButton_lateral_ei->setEnabled(0);
        ui->pushButton_lateral_mcc->setEnabled(0);
        ui->pushButton_lateral_mcd->setEnabled(0);
        ui->pushButton_lateral_mci->setEnabled(0);
        ui->pushButton_portero->setEnabled(0);
    }

}

void formacion433::on_pushButtonOFENSIVA_clicked()
{
    nivel = "Ofensiva";
    porcen = entre2.decidir(nivel);
    ui->progressBar->setValue(porcen);
}

void formacion433::on_pushButton_EQUILIBRADA_clicked()
{
    nivel = "Equilibrada";
    porcen = entre2.decidir(nivel);
    ui->progressBar->setValue(porcen);
}

void formacion433::on_pushButton_DEFENSIVA_clicked()
{
    nivel = "Defensiva";
    porcen = entre2.decidir(nivel);
    ui->progressBar->setValue(porcen);
}


