#ifndef ELEGIRFORMACION_H
#define ELEGIRFORMACION_H

#include <QDialog>

namespace Ui {
class elegirFormacion;
}

class elegirFormacion : public QDialog
{
    Q_OBJECT

public:
    explicit elegirFormacion(QWidget *parent = nullptr);
    ~elegirFormacion();

private slots:

    void on_pushButton_433_clicked();

    void on_pushButton_442_clicked();

private:
    Ui::elegirFormacion *ui;
};

#endif // ELEGIRFORMACION_H
