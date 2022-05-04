#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registrarse.h"
#include "Cuerpotecnico.h"
#include "Equipo.h"
#include "Jugador.h"
#include <string>
#include <map>
#include "fallo_registrar.h"
#include "elegirformacion.h"

CuerpoTecnico cuerp;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_Registrarse_clicked(){
    Registrarse r;
    if (r.exec()){
        cuerp.listausuario_Contrasena.insert(make_pair(r.getUsuario().toStdString(),r.getContrasena().toStdString()));
        cuerp.listausuario_Cargo.insert(make_pair(r.getUsuario().toStdString(),r.getCargo().toStdString()));
    }
}

void MainWindow::on_commandLinkButton_clicked(){
    MainWindow::close();
}

void MainWindow::on_pushButton_clicked()
{
    string contra;
    try {
        contra = cuerp.listausuario_Contrasena.at(ui->lineEdit_Usuario->text().toStdString());
        if (contra == ui->lineEdit_2->text().toStdString())
        {
            elegirFormacion Formaci;
            if (Formaci.exec()){

            }
        }else{
            fallo_registrar fallo;
            fallo.exec();
        }
    } catch (const out_of_range error) {
        fallo_registrar fallo;
        fallo.exec();
    }
}
