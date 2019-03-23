#ifndef PRESIDENCIAL_H
#define PRESIDENCIAL_H

#include "Candidato.h"
#include <iostream>

using std::string;

class Presidencial : public Candidato{
private:
    string Designado1, Designado2, Designado3, Votos;
public:
	Presidencial();
    Presidencial(string, string, string, string, string, string);
	~Presidencial();
	
	void setDesignado1(string);
	string getDesignado1();
	
	void setDesignado2(string);
	string getDesignado2();
	
	void setDesignado3(string);
	string getDesignado3();

    void setVotos(string);
    string getVotos();
	
	void soy();
	void imprimir();
};

Presidencial::Presidencial() : Candidato(){
	Presidencial::setDesignado1("");
	Presidencial::setDesignado2("");
	Presidencial::setDesignado3("");
    Presidencial::setVotos("");
}

Presidencial::Presidencial(string nombre, string partido, string cargo, string designado1, string designado2, string designado3) : Candidato(nombre, partido, cargo){
	Presidencial::setDesignado1(designado1);
	Presidencial::setDesignado2(designado2);
	Presidencial::setDesignado3(designado3);
    Presidencial::setVotos("0");
}

Presidencial::~Presidencial(){}

void Presidencial::setDesignado1(string d1){this->Designado1 = d1;}
string Presidencial::getDesignado1(){return this->Designado1;}

void Presidencial::setDesignado2(string d2){this->Designado2 = d2;}
string Presidencial::getDesignado2(){return this->Designado2;}

void Presidencial::setDesignado3(string d3){this->Designado3 = d3;}
string Presidencial::getDesignado3(){return this->Designado3;}

void Presidencial::setVotos(string votos){this->Votos = votos;}
string Presidencial::getVotos(){return this->Votos;}

void Presidencial::soy(){
	Candidato::soy();
	cout<<"El cargo por el que estoy optando es: Presidente de la Republica.\n"
		<<"Mi primer designado es: "<<Presidencial::getDesignado1()<<"\n"
		<<"Mi segundo designado es: "<<Presidencial::getDesignado2()<<"\n"
		<<"Mi tercer designado es: "<<Presidencial::getDesignado3()<<"\n";
}

void Presidencial::imprimir(){
	Candidato::imprimir();
	cout<<"|"<<setfill(' ')<<setw(30)<<Presidencial::getDesignado1()
		<<"|"<<setfill(' ')<<setw(30)<<Presidencial::getDesignado2()
		<<"|"<<setfill(' ')<<setw(30)<<Presidencial::getDesignado3()<<"|";
}
#endif
