#ifndef USUARIOS_H
#define USUARIOS_H

#include <iostream>

using std::string;

class Usuarios{
    private:
        string Nombre, Identidad, Departamento, Municipio;
    public:
        Usuarios();
        Usuarios(string,string,string,string);
        ~Usuarios();


        void setNombre(string);
        string getNombre();

        void setIdentidad(string);
        string getIdentidad();

        void setDepartamento(string);
        string getDepartamento();

        void setMunicipio(string);
        string getMunicipio();

};

#endif // USUARIOS_H
