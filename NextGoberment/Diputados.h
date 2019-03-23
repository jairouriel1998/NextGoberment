#ifndef DIPUTADOS_H
#define DIPUTADOS_H

#include "Candidato.h"
#include <iostream>

using std::string;

class Diputados : public Candidato{
private: 
    string Suplente, Codigo_depto, Casilla, Votos;
public:
	Diputados();
    Diputados(string, string, string, string, string, string);
	~Diputados();
	
	void setSuplente(string);
	string getSuplente();
	
	void setCodigo_depto(string);
	string getCodigo_depto();
	
	void setCasilla(string);
	string getCasilla();

    void setVotos(string);
    string getVotos();
	
	void soy();
	void imprimir();
};

Diputados::Diputados() : Candidato(){
	Diputados::setSuplente("");
    Diputados::setCodigo_depto("");
    Diputados::setCasilla("");
    Diputados::setVotos("");
}

Diputados::Diputados(string nombre, string partido, string cargo, string suplente, string codigo_depto, string casilla) : Candidato(nombre, partido, cargo){
	Diputados::setSuplente(suplente);
	Diputados::setCodigo_depto(codigo_depto);
	Diputados::setCasilla(casilla);
    Diputados::setVotos("0");
}

Diputados::~Diputados(){}

void Diputados::setSuplente(string suplente){this->Suplente = suplente;}
string Diputados::getSuplente(){return this->Suplente;}

void Diputados::setCodigo_depto(string codigo_depto){this->Codigo_depto = codigo_depto;}
string Diputados::getCodigo_depto(){return this->Codigo_depto;}

void Diputados::setCasilla(string casilla){this->Casilla = casilla;}
string Diputados::getCasilla(){return this->Casilla;}

void Diputados::setVotos(string votos){this->Votos = votos;}
string Diputados::getVotos(){return this->Votos;}

void Diputados::soy(){
	Candidato::soy();
	cout<<"El cargo por el que estoy optando es: Diputado.\n"
		<<"Mi suplente es: "<<Diputados::getSuplente()<<"\n"
		<<"El codigo de mi departamento es: "<<Diputados::getCodigo_depto()<<"\n"
		<<"La casilla en la que estoy es la: "<<Diputados::getCasilla()<<"\n";
}

void Diputados::imprimir(){
	Candidato::imprimir();
	cout<<"|"<<setfill(' ')<<setw(40)<<Diputados::getSuplente()<<" "
		<<"|"<<setfill(' ')<<setw(5)<<Diputados::getCodigo_depto()<<" "
		<<"|"<<setfill(' ')<<setw(5)<<Diputados::getCasilla()<<"|";
}
#endif
