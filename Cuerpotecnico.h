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
    map<QString,QString> listausuario_Contrasena;
    map<QString,QString> listausuario_Cargo;

    CuerpoTecnico();
    void insertarUsuario(string,string,string);
    void buscarUsuario(string,string);
};

class PrimerEntrenador:public CuerpoTecnico{
public:
    PrimerEntrenador();
    //void decidirFormacion();
    //void meterJugador();
    //void quitarJugador();
};

class SegundoEntrenador:public CuerpoTecnico{
public:
    SegundoEntrenador();
    //void meterJugador();
    //void quitarJugador();
};
