#include "inicio.h"
#include "ui_inicio.h"
#include "principal.h"
#include "ui_inicio.h"
#include "registrarse.h"
#include "ui_registrarse.h"
#include "controller.h"

#include <QMessageBox>

#include <iostream>


inicio::inicio(QWidget *parent) : QMainWindow(parent),ui(new Ui::inicio){
    ui->setupUi(this);
    control = new controller();
}

inicio::~inicio(){
    control->closeConnection();
    delete control;
    delete ui;
}

void inicio::on_iniciar_sesion_clicked(){
    int sesion = 0;
    string id = ui->identidad_inicio->text().toStdString();
    string con = ui->contrasena_inicio->text().toStdString();
    sesion = control->Sesion(id,con);
    if(sesion >= 1){
            principal *p = new principal();
            p->show();
            p->setSesion(sesion);
            this->close();
    }else{
        QMessageBox::warning(this, tr("Error de Autenticación!!"),tr("El numero de identidad y/o contraseña son inválidos"),QMessageBox::Ok );
    }
}

void inicio::on_ir_registrarse_clicked(){
    registrarse *registro = new registrarse();
    registro->show();
    this->close();
}
