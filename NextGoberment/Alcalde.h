#ifndef ALCALDE_H
#define ALCALDE_H

#include "Candidato.h"
#include <iostream>

using std::string;

class Alcalde : public Candidato{
private:
    string ViceAlcalde, Codigo_depto, Codigo_municipio, Votos;
public:
	Alcalde();
    Alcalde(string, string, string, string, string, string);
	~Alcalde();
	
	void setVicealcalde(string);
	string getVicealcalde();
	
	void setCodigo_depto(string);
	string getCodigo_depto();
	
	void setCodigo_municipio(string);
	string getCodigo_municipio();
	
    void setVotos(string);
    string getVotos();

	void soy();
	void imprimir();
	
};

Alcalde::Alcalde() : Candidato(){
	Alcalde::setVicealcalde("");
    Alcalde::setCodigo_depto("");
    Alcalde::setCodigo_municipio("");
    Alcalde::setVotos("");
}

Alcalde::Alcalde(string nombre, string partido, string cargo, string vicealcalde, string codigo_depto, string codigo_municipio) : Candidato(nombre, partido, cargo){
	Alcalde::setVicealcalde(vicealcalde);
	Alcalde::setCodigo_depto(codigo_depto);
	Alcalde::setCodigo_municipio(codigo_municipio);
    Alcalde::setVotos("0");
}

Alcalde::~Alcalde(){}

void Alcalde::setVicealcalde(string vice){this->ViceAlcalde = vice;}
string Alcalde::getVicealcalde(){return this->ViceAlcalde;}

void Alcalde::setCodigo_depto(string codigo_depto){this->Codigo_depto = codigo_depto;}
string Alcalde::getCodigo_depto(){return this->Codigo_depto;}

void Alcalde::setCodigo_municipio(string codigo_municipio){this->Codigo_municipio = codigo_municipio;}
string Alcalde::getCodigo_municipio(){return this->Codigo_municipio;}

void Alcalde::setVotos(string votos){this->Votos = votos;}
string Alcalde::getVotos(){return this->Votos;}

void Alcalde::soy(){
	Candidato::soy();
	cout<<"El cargo por el que estoy optando es: Alcalde.\n"
		<<"Mi vicealcalde es: "<<Alcalde::getVicealcalde()<<"\n"
		<<"El codigo de mi departamento es: "<<Alcalde::getCodigo_depto()<<"\n"
		<<"El codigo de mi municipio es: "<<Alcalde::getCodigo_municipio()<<"\n";
}

void Alcalde::imprimir(){
	Candidato::imprimir();
	cout<<"|"<<setfill(' ')<<setw(30)<<Alcalde::getVicealcalde()
		<<"|"<<setfill(' ')<<setw(30)<<Alcalde::getCodigo_depto()
		<<"|"<<setfill(' ')<<setw(30)<<Alcalde::getCodigo_municipio()<<"|";
}
#endif
