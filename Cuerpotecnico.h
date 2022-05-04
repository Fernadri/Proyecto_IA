#include <iostream>
#include <string>
#include <map>

using namespace std;

class Cuerpotecnico{
public:
    string usuario;
    string contrasena;
    string cargo;
    map<string,string> listausuario;

    Cuerpotecnico();
    void insertarUsuario(string,string,string);
    void buscarUsuario(string,string,string);
};
