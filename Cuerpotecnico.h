#include <iostream>
#include <string>
#include <QString>
#include <map>
#include <vector>

using namespace std;

class CuerpoTecnico{
public:
    string usuario;
    string contrasena;
    string cargo;
    map<string,string> listausuario_Contrasena;

    CuerpoTecnico();
    void insertarUsuario(string,string,string);
    void buscarUsuario(string,string);
};

class SegundoEntrenador:public CuerpoTecnico{
public:
    SegundoEntrenador();
    int decidir(string);
};

class PrimerEntrenador:public SegundoEntrenador{
public:
    PrimerEntrenador();
    vector<int> decidir(int,vector<int>);
};


