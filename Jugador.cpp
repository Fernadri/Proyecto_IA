#include "Jugador.h"

using namespace std;

Jugador::Jugador(){

}

void Jugador::setJugador(string nombre_jug,string pos,int numero){
    nombre_jugador=nombre_jug;
    dorsal = numero;
    posicion = pos;
}
