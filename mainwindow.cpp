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
#include "QProgressDialog"

CuerpoTecnico cuerp;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_Registrarse_clicked(){
    Registrarse r;
    if (r.exec()){
        cuerp.listausuario_Contrasena.insert(make_pair(r.getUsuario().toStdString(),r.getContrasena().toStdString()));
        //cuerp.listausuario_Cargo.insert(make_pair(r.getUsuario().toStdString(),r.getCargo().toStdString()));
    }
}

void MainWindow::on_commandLinkButton_clicked(){
    MainWindow::close();
}

void MainWindow::on_pushButton_clicked()
{
    string contra;
    QString ProgressBar="Barra de progreso";
    QString cancel="Cancelar";

    int numTasks = 1000;
    QProgressDialog progress("Iniciando sesion...","Cancelar",0,numTasks,this);
    progress.setWindowModality(Qt::WindowModal);

    for (int i=0; i < numTasks;i++){
        progress.setValue(i);
        _sleep(6);
        if(progress.wasCanceled())
            break;
    }
    progress.setValue(numTasks);
    progress.setValue(100);
    progress.accept();
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
