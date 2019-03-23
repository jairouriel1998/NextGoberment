#include "controller.h"

#include <iostream>

#include <Usuarios.h>
#include <QString>

using std::string;
using std::cout;

controller::controller(){
    try{
       driver = get_driver_instance();
       connection=driver->connect("localhost", "root", "");
       connection->setAutoCommit(0);
       connection->setSchema("NextGoberment_database");
    }catch(SQLException &ex){
       cout<<"Exception occurred"<<ex.getErrorCode()<<endl;
    }
}


controller::~controller(){
    delete connection;
}

int controller::Sesion(string identidad, string contrasena){
    int Codigo_sesion = 0;
    ResultSet *resultSet = NULL;
    PreparedStatement *pstmt = connection->prepareStatement("SELECT * FROM Registro WHERE Identidad = \""+identidad+"\" AND Contrasena = \""+contrasena+"\"");
    try{
          resultSet = pstmt->executeQuery();
          while(resultSet->next()){
             Codigo_sesion = resultSet->getInt("Codigo");
          }
       }catch(SQLException &ex){
          cout<<"Exception occurred"<<ex.getErrorCode()<<endl;
       }
    resultSet->close();
    pstmt->close();
    delete pstmt;
    delete resultSet;
    return Codigo_sesion;
}

int controller::Registrar(string codigo, string nombre, string identidad, string contrasena, string region){
    int result = 0;
    PreparedStatement *pstmt = connection->prepareStatement("INSERT INTO Registro VALUES (\""+codigo+"\",\""+nombre+"\",\""+identidad+"\",\""+contrasena+"\",\""+region+"\", \"0\",\"0\",\"0\")");
    try{
          result = pstmt->executeUpdate();
           connection->commit();
       }catch(SQLException &ex){
          cout<<"Exception occurred"<<ex.getErrorCode()<<endl;
       }
    pstmt->close();
    delete pstmt;
    return result;
}

Usuarios controller::Actual(int sesionCode){
    Usuarios datos;
    QString data;
    data = data.number(sesionCode);
    string codigo = data.toStdString();
    ResultSet *resultSet = NULL;
    PreparedStatement *pstmt = connection->prepareStatement("SELECT Nombre, Identidad, Departamento, Municipio FROM Registro R INNER JOIN Region L WHERE R.Region = L.Id_region AND R.Codigo = \""+codigo+"\"");
    try{
          resultSet = pstmt->executeQuery();
          while(resultSet->next()){
             datos.setNombre(resultSet->getString("Nombre"));
             datos.setIdentidad(resultSet->getString("Identidad"));
             datos.setDepartamento(resultSet->getString("Departamento"));
             datos.setMunicipio(resultSet->getString("Municipio"));
          }
       }catch(SQLException &ex){
          cout<<"Exception occurred"<<ex.getErrorCode()<<endl;
       }
    resultSet->close();
    pstmt->close();
    delete pstmt;
    delete resultSet;
    return datos;
}

int controller::votar(int id_candidato){
    int result = 0;
    QString data;
    data = data.number(id_candidato);
    string id_cando = data.toStdString();
    PreparedStatement *pstmt = connection->prepareStatement("UPDATE Presidentes SET Votos_obtenidos = Votos_obtenidos+1 WHERE Id_Candidato = \""+id_cando+"\"");
    try{
          result = pstmt->executeUpdate();
           connection->commit();
       }catch(SQLException &ex){
          cout<<"Exception occurred"<<ex.getErrorCode()<<endl;
       }
    pstmt->close();
    delete pstmt;
    return result;
}

int controller::obtener_votos(int id_presi){
    int votos;
    QString data;
    data = data.number(id_presi);
    string codigo = data.toStdString();
    ResultSet *resultSet = NULL;
    PreparedStatement *pstmt = connection->prepareStatement("SELECT Votos_obtenidos FROM Presidentes WHERE Id_candidato = \""+codigo+"\"");
    try{
          resultSet = pstmt->executeQuery();
          while(resultSet->next()){
             votos = resultSet->getInt("Votos_obtenidos");
          }
       }catch(SQLException &ex){
          cout<<"Exception occurred"<<ex.getErrorCode()<<endl;
       }
    resultSet->close();
    pstmt->close();
    delete pstmt;
    delete resultSet;
    return votos;
}


void controller::closeConnection(){
    connection->close();
}
