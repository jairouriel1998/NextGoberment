#ifndef REGISTRARSE_H
#define REGISTRARSE_H

#include "controller.h"

#include <QMainWindow>

namespace Ui {
class registrarse;
}

class registrarse : public QMainWindow{
    Q_OBJECT

public:
    explicit registrarse(QWidget *parent = 0);
    ~registrarse();

private:
    controller *control;

private slots:
    void on_regresar_clicked();

    void on_registrar_clicked();

private:
    Ui::registrarse *ui;
};

#endif // REGISTRARSE_H
