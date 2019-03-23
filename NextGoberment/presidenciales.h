#ifndef PRESIDENCIALES_H
#define PRESIDENCIALES_H

#include <QMainWindow>
#include "controller.h"
#include "Usuarios.h"

namespace Ui {
class presidenciales;
}

class presidenciales : public QMainWindow
{
    Q_OBJECT

public:
    explicit presidenciales(QWidget *parent = 0);
    ~presidenciales();
    Usuarios act;
    int codigo_sesion, votos_joh, votos_sn, votos_lz;
    bool yo_voto = false;
    void setSesion(int);
    int getSesion();
    void actualizar_votos();

private:
    controller *control;

private slots:
    void on_regresar_clicked();

    void on_info_clicked();

    void on_info2_clicked();

    void on_info3_clicked();

    void on_votar_joh_clicked();

    void on_votar_nasralla_clicked();

    void on_votar_luis_clicked();

private:
    Ui::presidenciales *ui;
};

#endif // PRESIDENCIALES_H
