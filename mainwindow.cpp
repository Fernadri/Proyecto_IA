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
extern int cargo_;

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
    cuerp.insertarUsuario(&cuerp);
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
    cuerp.usuario = ui->lineEdit_Usuario->text().toStdString();
    cuerp.contrasena = ui->lineEdit_2->text().toStdString();
    cuerp.cargo = cuerp.buscarCargo(cuerp.usuario,cuerp);
    cuerp.buscarUsuario(cuerp.usuario,cuerp,cuerp.contrasena);
}
