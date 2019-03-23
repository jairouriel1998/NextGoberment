#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>
#include "controller.h"

namespace Ui {
class inicio;
}

class inicio : public QMainWindow{
    Q_OBJECT

public:
    explicit inicio(QWidget *parent = 0);
    ~inicio();

private:
    controller *control;

private slots:
    void on_iniciar_sesion_clicked();

    void on_ir_registrarse_clicked();

private:
    Ui::inicio *ui;
};

#endif // INICIO_H
