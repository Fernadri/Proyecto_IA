#ifndef FORMACION442_H
#define FORMACION442_H

#include <QDialog>

namespace Ui {
class formacion442;
}

class formacion442 : public QDialog
{
    Q_OBJECT

public:
    explicit formacion442(QWidget *parent = nullptr);
    ~formacion442();

private:
    Ui::formacion442 *ui;
};

#endif // FORMACION442_H
