#include "presidenciales.h"
#include "ui_presidenciales.h"
#include "principal.h"
#include "ui_principal.h"

#include <QMessageBox>

presidenciales::presidenciales(QWidget *parent) : QMainWindow(parent), ui(new Ui::presidenciales){
    ui->setupUi(this);
    control = new controller();
    presidenciales::actualizar_votos();
}

presidenciales::~presidenciales(){
    delete ui;
}

void presidenciales::actualizar_votos(){
    votos_joh = control->obtener_votos(1);
    votos_sn = control->obtener_votos(2);
    votos_lz = control->obtener_votos(3);
    QString v_joh;
    QString v_sn;
    QString v_lz;
    ui->s_votos_joh->setText(v_joh.number(votos_joh));
    ui->s_votos_sn->setText(v_sn.number(votos_sn));
    ui->s_votos_lz->setText(v_lz.number(votos_lz));
}

void presidenciales::on_regresar_clicked(){
    principal *p = new principal();
    p->setSesion(codigo_sesion);
    p->show();
    this->close();
}

void presidenciales::setSesion(int sesionCode){
    this->codigo_sesion = sesionCode;
    act = control->Actual(codigo_sesion);
    QString nombre;
    QString identidad;
    ui->s_nombre->setText(nombre.fromStdString(act.getNombre()));
    ui->s_identidad->setText(identidad.fromStdString(act.getIdentidad()));

}

int presidenciales::getSesion(){
    return this->codigo_sesion;
}

void presidenciales::on_info_clicked(){
    QMessageBox::information(this, tr("Presidentes"),tr("Para realizar la votación solo es necesario hacer clik en el boton votar que aparece bajo la información del candidato. Una vez realizado el voto, no te será permitido votar nuevamente, además solo puedes votar por un candidato."),QMessageBox::Ok );

}

void presidenciales::on_info2_clicked(){
    QMessageBox::information(this, tr("Tu voto"),tr("Tu voto será registrado en el sistema una vez realizado, no te preocupes, nadie además de nuestro personal tiene aceso al sistema, así que tu voto es secreto.\n\nEscoge bien tu candidato y !A votar¡"),QMessageBox::Ok );

}

void presidenciales::on_info3_clicked(){
    QMessageBox::warning(this, tr("Aviso"),tr("El sistema de votación solo permite votar una vez por persona. Si por alguna razón te es permitido hacer más de un voto, envianos una notificación utilozando los medios correspondientes. \n\nEl sistema asegura transparencia pero no integridad."),QMessageBox::Ok );

}

void presidenciales::on_votar_joh_clicked(){
    if(yo_voto == false){
     control->votar(1);
     QMessageBox::information(this, tr("Voto Realizado"),tr("Usted a votado por el señor Juan Orlando Hernandez."),QMessageBox::Ok );
     presidenciales::actualizar_votos();
     yo_voto = true;
    }else{
         QMessageBox::warning(this, tr("Voto no realizado"),tr("Usted ya votó anteriormente, por lo que no le es permitido votar nuevamente!!"),QMessageBox::Ok );
    }
}

void presidenciales::on_votar_nasralla_clicked(){
    if(yo_voto == false){
    control->votar(2);
    QMessageBox::information(this, tr("Voto Realizado"),tr("Usted a votado por el señor Salvador Nasralla"),QMessageBox::Ok );
    presidenciales::actualizar_votos();
    yo_voto = true;
    }else{
         QMessageBox::warning(this, tr("Voto no realizado"),tr("Usted ya votó anteriormente, por lo que no le es permitido votar nuevamente!!"),QMessageBox::Ok );
    }
}

void presidenciales::on_votar_luis_clicked(){
    if(yo_voto == false){
    control->votar(3);
    QMessageBox::information(this, tr("Voto Realizado"),tr("Usted a votado por el señor Luis Zelaya Medrano."),QMessageBox::Ok );
    presidenciales::actualizar_votos();
    yo_voto = true;
   }else{
         QMessageBox::warning(this, tr("Voto no realizado"),tr("Usted ya votó anteriormente, por lo que no le es permitido votar nuevamente!!"),QMessageBox::Ok );
    }
}
