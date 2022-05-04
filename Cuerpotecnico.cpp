#include "Cuerpotecnico.h"

using namespace std;

CuerpoTecnico::CuerpoTecnico(){

}

PrimerEntrenador::PrimerEntrenador():CuerpoTecnico(){

}

SegundoEntrenador::SegundoEntrenador():CuerpoTecnico(){

}

void CuerpoTecnico::insertarUsuario(string nom, string contra, string rango){
    usuario=nom;
    contrasena=contra;
    cargo=rango;
}

void CuerpoTecnico::buscarUsuario(string nom, string contra){
    usuario=nom;
    contrasena=contra;
}
