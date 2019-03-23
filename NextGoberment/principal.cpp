#include "principal.h"
#include "ui_principal.h"
#include "inicio.h"
#include "ui_inicio.h"
#include "presidenciales.h"
#include "ui_presidenciales.h"
#include <QMessageBox>
#include <Usuarios.h>
#include <QString>


principal::principal(QWidget *parent) : QMainWindow(parent), ui(new Ui::principal){
    ui->setupUi(this);
    control = new controller();

}

principal::~principal(){
    delete ui;
}

void principal::setSesion(int sesionCode){
    this->codigo_sesion = sesionCode;
    act = control->Actual(codigo_sesion);
    QString nombre;
    QString identidad;
    QString departamento;
    QString municipio;
    ui->s_nombre->setText(nombre.fromStdString(act.getNombre()));
    ui->s_identidad->setText(identidad.fromStdString(act.getIdentidad()));
    ui->s_departamento->setText(departamento.fromStdString(act.getDepartamento()));
    ui->s_municipio->setText(municipio.fromStdString(act.getMunicipio()));

}

int principal::getSesion(){
    return this->codigo_sesion;
}

void principal::on_salir_clicked(){
    QMessageBox::information(this, tr("Cerrando Sesion"),tr("Sesion Cerrada exitosamente."),QMessageBox::Ok );
    inicio *i = new inicio();
    i->show();
    this->close();
}

void principal::on_informacion_clicked(){
    QMessageBox::information(this, tr("About"),tr("Este software ha sido desarrollado unicamente como medio para ejercer el sufragio, la compañía no se hace responsable por los daños y prejuicios que puedan ser causados por el mal uso del mismo, además, cabe mencionar que no está hecho para resistir las caídas de sistemas provocadas por Batson.\n\n\nAtte: Desarrolladores y Asosiados DUBON S.A.\n\nSoftware desarrollado por: Jairo Medrano & Katy Casco"),QMessageBox::Ok );
}

void principal::on_ir_presidente_clicked(){
    presidenciales *pre = new presidenciales();
    pre->setSesion(codigo_sesion);
    pre->show();
    this->close();
}

void principal::on_ir_diputados_clicked(){
    QMessageBox::warning(this, tr("Aviso"), tr("El sistema de votos para diputados aún no está disponible."),QMessageBox::Ok);
}

void principal::on_ir_alcaldes_clicked(){
    QMessageBox::warning(this, tr("Aviso"), tr("El sistema de votos para alcaldes aún no está disponible."),QMessageBox::Ok);
}

void principal::on_ir_resultados_clicked(){
    QMessageBox::warning(this, tr("Aviso"), tr("Los resultados actuales aún no están disponibles."),QMessageBox::Ok);
}
