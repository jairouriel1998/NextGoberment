#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <cppconn/connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <iostream>

#include <Usuarios.h>

using namespace std;
using namespace sql;

class controller{
    private:
        Driver *driver;
        Connection *connection;
    public:
        controller();
        ~controller();
        int Sesion(string, string);
        int Registrar(string, string, string, string, string);
        Usuarios Actual(int);
        int votar(int);
        int obtener_votos(int);
        void closeConnection();
};


#endif // CONTROLLER_H
