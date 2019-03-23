#include "registrarse.h"
#include "ui_registrarse.h"
#include "inicio.h"
#include "ui_inicio.h"
#include <QMessageBox>


registrarse::registrarse(QWidget *parent) :  QMainWindow(parent), ui(new Ui::registrarse){
    ui->setupUi(this);
    control = new controller();
}

registrarse::~registrarse(){
    delete ui;
}

void registrarse::on_regresar_clicked(){
    inicio *ir_inicio = new inicio();
    ir_inicio->show();
    this->close();
}

void registrarse::on_registrar_clicked(){
    string code = ui->codigo->text().toStdString();
    string name = ui->nombre->text().toStdString();
    string id = ui->identidad->text().toStdString();
    string cont = ui->contrasena->text().toStdString();
    string reg = ui->region->text().toStdString();
    int result = control->Registrar(code,name,id,cont,reg);
    if(result==1)
       QMessageBox::information(this, tr("Registro exitoso"),tr("El nuevo usuario ha sido registrado extitosamente"),QMessageBox::Ok );
    else
       QMessageBox::warning(this, tr("Registro no realizado"),tr("No se ha registrado el nuevo usuario, pongase en contacto con el administrador para intentar solucionar el problema."),QMessageBox::Ok );

}
