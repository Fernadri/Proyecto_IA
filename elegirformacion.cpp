#include "elegirformacion.h"
#include "ui_elegirformacion.h"
#include <string>
#include "fallo_registrar.h"
#include "formacion433.h"
#include "formacion442.h"
#include "Equipo.h"

using namespace std;
Equipo myteam;

elegirFormacion::elegirFormacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::elegirFormacion)
{
    ui->setupUi(this);
}

elegirFormacion::~elegirFormacion()
{
    delete ui;
}

void elegirFormacion::on_pushButton_433_clicked()
{
    formacion433 form433;
    myteam.nombre_equipo = ui->lineEdit_nombre_equipo->text().toStdString();
    form433.exec();
}

void elegirFormacion::on_pushButton_442_clicked()
{
    formacion442 form442;
    myteam.nombre_equipo = ui->lineEdit_nombre_equipo->text().toStdString();
    form442.exec();
}



