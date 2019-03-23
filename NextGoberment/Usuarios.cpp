
#include "Usuarios.h"
#include <iostream>

using std::string;

Usuarios::Usuarios(){
    Usuarios::setNombre("");
    Usuarios::setIdentidad("");
    Usuarios::setDepartamento("");
    Usuarios::setMunicipio("");
}

Usuarios::Usuarios(string nombre, string identidad, string depto, string munpio){
    Usuarios::setNombre(nombre);
    Usuarios::setIdentidad(identidad);
    Usuarios::setDepartamento(depto);
    Usuarios::setMunicipio(munpio);
}

Usuarios::~Usuarios(){}

void Usuarios::setNombre(string nombre){this->Nombre = nombre;}
string Usuarios::getNombre(){return this->Nombre;}

void Usuarios::setIdentidad(string identidad){this->Identidad = identidad;}
string Usuarios::getIdentidad(){return this->Identidad;}

void Usuarios::setDepartamento(string depto){this->Departamento = depto;}
string Usuarios::getDepartamento(){return this->Departamento;}

void Usuarios::setMunicipio(string munpio){this->Municipio = munpio;}
string Usuarios::getMunicipio(){return this->Municipio;}


