#include <iostream>
#include <string>
#include <QString>
#include <map>

using namespace std;

class CuerpoTecnico{
public:
    string usuario;
    string contrasena;
    string cargo;
    map<string,string> listausuario_Contrasena;
    map<string,string> listausuario_Cargo;

    CuerpoTecnico();
    void insertarUsuario(string,string,string);
    void buscarUsuario(string,string);
};

class SegundoEntrenador:public CuerpoTecnico{
public:
    SegundoEntrenador();
    //void meterJugador();
    //void quitarJugador();
};

class PrimerEntrenador:public SegundoEntrenador{
public:
    PrimerEntrenador();
    //void decidirFormacion();
    //void meterJugador();
    //void quitarJugador();
};


