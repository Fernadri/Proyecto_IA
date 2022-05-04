#include "Cuerpotecnico.h"
#include "formacion433.h"

using namespace std;
extern string nivel;
int porcentaje;
CuerpoTecnico::CuerpoTecnico(){

}

PrimerEntrenador::PrimerEntrenador():SegundoEntrenador(){

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

int SegundoEntrenador::decidir(string){
    if (nivel == "Ofensiva"){
        porcentaje = 90;
        return porcentaje;
    }else if(nivel == "Equilibrada"){
        porcentaje = 50;
        return porcentaje;
    }else{
        porcentaje = 10;
        return porcentaje;
    }
}

void PrimerEntrenador::decidir(int){

}
