#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registrarse.h"
#include "Cuerpotecnico.h"
#include "Equipo.h"
#include "Jugador.h"

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



void MainWindow::on_pushButton_Registrarse_clicked()
{
    Registrarse r;
    if (r.exec()){
        cuerp.listausuario_Contrasena.insert(make_pair(r.getUsuario(),r.getContrasena()));
        cuerp.listausuario_Cargo.insert(make_pair(r.getUsuario(),r.getCargo()));
    }
}
