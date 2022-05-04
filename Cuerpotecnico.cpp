#include "Cuerpotecnico.h"
#include "formacion433.h"
#include <vector>
#include "fallo_registrar.h"
#include "elegirformacion.h"
#include "registrarse.h"

using namespace std;
string nivel;
int porcentaje;

CuerpoTecnico::CuerpoTecnico(){

}

PrimerEntrenador::PrimerEntrenador():CuerpoTecnico(){

}

SegundoEntrenador::SegundoEntrenador():PrimerEntrenador(){

}

void CuerpoTecnico::insertarUsuario(CuerpoTecnico* cuerpoTec){
    Registrarse r;
    if (r.exec()){
        cuerpoTec->listausuario_Contrasena.insert(make_pair(r.getUsuario().toStdString(),r.getContrasena().toStdString()));
        cuerpoTec->listausuario_Cargo.insert(make_pair(r.getUsuario().toStdString(),r.getCargo()));
    }
}

void CuerpoTecnico::buscarUsuario(string user,CuerpoTecnico cuerpoTec,string password){
    try {
        string contra = cuerpoTec.listausuario_Contrasena.at(user);
        if (contra == password)
        {
            elegirFormacion Formaci;
            if (Formaci.exec()){

            }
        }else{
            fallo_registrar fallo;
            fallo.exec();
        }
    } catch (const out_of_range error) {
        fallo_registrar fallo;
        fallo.exec();
    }
}

int CuerpoTecnico::buscarCargo(string user, CuerpoTecnico cuerpoTec){
  try {
    int cargo = cuerpoTec.listausuario_Cargo.at(user);
    return cargo;
    } catch (const out_of_range error) {
        //fallo_registrar fallo;
        //fallo.exec();
    }
    return cargo;
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
