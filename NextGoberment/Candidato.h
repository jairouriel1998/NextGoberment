#ifndef CANDIDATO_H
#define CANDIDATO_H

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::string;
using std::setfill;
using std::setw;

class Candidato{
private:
    string Nombre, Partido, Cargo;

public:
    Candidato();
	Candidato(string, string);
	~Candidato();
	
	void setNombre(string);
	string getNombre();
	
	void setPartido(string);
	string getPartido();

    void setCargo(string);
    string getCargo();
	
	virtual void soy();
	virtual void imprimir();
};

Candidato::Candidato(){
	Candidato::setNombre("");
	Candidato::setPartido("");
}

Candidato::Candidato(string nombre, string partido){
	Candidato::setNombre(nombre);
	Candidato::setPartido(partido);
}

Candidato::~Candidato(){}

void Candidato::setNombre(string nombre){this->Nombre = nombre;}
string Candidato::getNombre(){return this->Nombre;}

void Candidato::setPartido(string partido){this->Partido = partido;}
string Candidato::getPartido(){return this->Partido;}

void Candidato::setCargo(string cargo){this->Cargo = cargo;}
string Candidato::getCargo(){return this->Cargo;}

void Candidato::soy(){
	cout<<"Mi nombre es: "<<Candidato::getNombre()<<"\n"
		<<"Mi partido es: "<<Candidato::getPartido()<<"\n";
}

void Candidato::imprimir(){
	cout<<"|"<<setfill(' ')<<setw(40)<<Candidato::getNombre()<<" "
		<<"|"<<setfill(' ')<<setw(30)<<Candidato::getPartido()<<" ";
}
#endif
