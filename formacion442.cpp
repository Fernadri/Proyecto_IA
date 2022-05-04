#include "formacion442.h"
#include "ui_formacion442.h"
#include "Equipo.h"
#include "mainwindow.h"
#include "Cuerpotecnico.h"
#include <string>
#include "registrarse.h"
#include <vector>
#include "elegirformacion.h"

extern Equipo myteam;
extern CuerpoTecnico cuerp;
string nivel2;
SegundoEntrenador entre22;
PrimerEntrenador entre11;
int porcen2;
vector<int> convocados2(25);
string saltolinea2 = "\n";
string cadena2 = "";

formacion442::formacion442(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formacion442)
{
    ui->setupUi(this);
}

formacion442::~formacion442()
{
    delete ui;
}

void formacion442::on_pushButton_mostrar_442_clicked(){
    ui->lineEdit_nombre_equipo_442->setText(QString::fromStdString(myteam.nombre_equipo));
    if (cuerp.cargo == 1){
        ui->pushButtonOFENSIVA->setEnabled(0);
        ui->pushButtonEQUILIBRADA->setEnabled(0);
        ui->pushButtonDEFENSIVA->setEnabled(0);
        ui->progressBar->setValue(50);
    }else{
        ui->pushButton_central_d->setEnabled(0);
        ui->pushButton_central_i->setEnabled(0);
        ui->pushButton_lateral_d->setEnabled(0);
        ui->pushButton_lateral_i->setEnabled(0);
        ui->pushButton_lateral_DCi->setEnabled(0);
        ui->pushButton_lateral_md->setEnabled(0);
        ui->pushButton_lateral_mi->setEnabled(0);
        ui->pushButton_lateral_dcd->setEnabled(0);
        ui->pushButton_lateral_mci->setEnabled(0);
        ui->pushButton_lateral_mcd_2->setEnabled(0);
        ui->pushButton_portero->setEnabled(0);
}
    //inicializamos la lista con los 23 jugadores
    for (int i = 1; i <= 25; i++){
        convocados2.at(i-1) = i;
    }
    for (int i=0; i<=24; i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);

        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}


void formacion442::on_pushButton_portero_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_portero->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}

void formacion442::on_pushButton_lateral_d_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_lateral_d->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}

void formacion442::on_pushButton_central_d_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_central_d->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}

void formacion442::on_pushButton_central_i_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_central_i->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}

void formacion442::on_pushButton_lateral_i_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_lateral_i->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}

void formacion442::on_pushButton_lateral_md_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_mD->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}

void formacion442::on_pushButton_lateral_mcd_2_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_mcd_2->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}

void formacion442::on_pushButton_lateral_mci_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_mci->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}

void formacion442::on_pushButton_lateral_mi_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_mi->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}

void formacion442::on_pushButton_lateral_dcd_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_dcd->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}

void formacion442::on_pushButton_lateral_DCi_clicked()
{
    convocados2=entre11.decidir(ui->lineEdit_dorsal_dci->text().toInt(),convocados2);
    cadena2="";
    for(unsigned int i=0; i < convocados2.size(); i++){
        cadena2 = cadena2 + saltolinea2 + to_string(convocados2[i]);
        ui->plainTextEdit->lineWrapMode();
        ui->plainTextEdit->setPlainText(QString::fromStdString(cadena2));
    }
}


void formacion442::on_pushButtonOFENSIVA_clicked()
{
    nivel2 = "Ofensiva";
    porcen2 = entre22.decidir(nivel2);
    ui->progressBar->setValue(porcen2);
}

void formacion442::on_pushButtonEQUILIBRADA_clicked()
{
    nivel2 = "Equilibrada";
    porcen2 = entre22.decidir(nivel2);
    ui->progressBar->setValue(porcen2);
}

void formacion442::on_pushButtonDEFENSIVA_clicked()
{
    nivel2 = "Defensiva";
    porcen2 = entre22.decidir(nivel2);
    ui->progressBar->setValue(porcen2);
}
