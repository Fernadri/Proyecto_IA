#include "formacion433.h"
#include "ui_formacion433.h"
#include "elegirformacion.h"
#include "Equipo.h"
#include "mainwindow.h"
#include "Cuerpotecnico.h"
#include <string>
#include "registrarse.h"
#include <vector>

extern Equipo myteam;
extern string nombre_;
extern int cargo;
string nivel1;
SegundoEntrenador entre2;
PrimerEntrenador entre1;
int porcen;
vector<int> convocados(25);
string saltolinea = "\n";
string cadena = "";

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
        ui->progressBar->setValue(50);
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
    //inicializamos la lista con los 23 jugadores
    for (int i = 1; i <= 25; i++){
        convocados.at(i-1) = i;
    }
    for (int i=0; i<=24; i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);

        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}

void formacion433::on_pushButtonOFENSIVA_clicked()
{
    nivel1 = "Ofensiva";
    porcen = entre2.decidir(nivel1);
    ui->progressBar->setValue(porcen);
}

void formacion433::on_pushButton_EQUILIBRADA_clicked()
{
    nivel1 = "Equilibrada";
    porcen = entre2.decidir(nivel1);
    ui->progressBar->setValue(porcen);
}

void formacion433::on_pushButton_DEFENSIVA_clicked()
{
    nivel1 = "Defensiva";
    porcen = entre2.decidir(nivel1);
    ui->progressBar->setValue(porcen);
}



void formacion433::on_pushButton_portero_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_portero_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}

void formacion433::on_pushButton_central_d_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_DFD_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}

void formacion433::on_pushButton_lateral_d_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_LD_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}

void formacion433::on_pushButton_central_i_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_DFI_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}


void formacion433::on_pushButton_lateral_i_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_LI_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}


void formacion433::on_pushButton_lateral_mcd_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_MCD_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}


void formacion433::on_pushButton_lateral_mcc_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_MCC_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}

void formacion433::on_pushButton_lateral_mci_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_MCI_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}

void formacion433::on_pushButton_lateral_ed_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_ED_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}

void formacion433::on_pushButton_lateral_DC_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_DC_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}

void formacion433::on_pushButton_lateral_ei_clicked()
{
    convocados=entre1.decidir(ui->lineEdit_dorsal_EI_ali->text().toInt(),convocados);
    cadena="";
    for(unsigned int i=0; i < convocados.size(); i++){
        cadena = cadena + saltolinea + to_string(convocados[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena));
    }
}
