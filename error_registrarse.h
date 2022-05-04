#ifndef ERROR_REGISTRARSE_H
#define ERROR_REGISTRARSE_H

#include <QDialog>

namespace Ui {
class error_registrarse;
}

class error_registrarse : public QDialog
{
    Q_OBJECT

public:
    explicit error_registrarse(QWidget *parent = nullptr);
    ~error_registrarse();

private:
    Ui::error_registrarse *ui;
};

#endif // ERROR_REGISTRARSE_H
