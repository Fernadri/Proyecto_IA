#include "Cuerpotecnico.h"
#include "formacion433.h"
#include <vector>
#include "fallo_registrar.h"

using namespace std;
string nivel;
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

int SegundoEntrenador::decidir(string nivel){
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

vector<int> PrimerEntrenador::decidir(int number,vector<int> convocatoria){
    int cont=0;
    for(unsigned int i=0; i < convocatoria.size(); i++){
        if(number == convocatoria[i]){
            convocatoria.erase(convocatoria.begin()+i);
            cont++;
        }
    }
    if(cont==0){
        fallo_registrar fallo;
        fallo.exec();
    }
    return convocatoria;
}
