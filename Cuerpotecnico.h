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
    int cargo;
    map<string,string> listausuario_Contrasena;
    map<string,int> listausuario_Cargo;

    CuerpoTecnico();
    void insertarUsuario(CuerpoTecnico*);
    void buscarUsuario(string,CuerpoTecnico,string);
    int buscarCargo(string,CuerpoTecnico);
};

class PrimerEntrenador:public CuerpoTecnico{
public:
    PrimerEntrenador();
    vector<int> decidir(int,vector<int>);
};

class SegundoEntrenador:public PrimerEntrenador{
public:
    SegundoEntrenador();
    int decidir(string);
};



