#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include "controller.h"
#include "Usuarios.h"

namespace Ui {
class principal;
}

class principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = 0);
    ~principal();
    Usuarios act;
    int codigo_sesion;
    void setSesion(int);
    int getSesion();

private:
    controller *control;

private slots:
    void on_salir_clicked();

    void on_informacion_clicked();

    void on_ir_presidente_clicked();

    void on_ir_diputados_clicked();

    void on_ir_alcaldes_clicked();

    void on_ir_resultados_clicked();

private:
    Ui::principal *ui;
};

#endif // PRINCIPAL_H
