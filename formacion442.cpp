#include "formacion442.h"
#include "ui_formacion442.h"

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
