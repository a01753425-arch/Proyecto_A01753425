
#include "Guerrero.hpp"
#include <cstdlib>
using namespace std;
#include <iostream>

Guerrero::Guerrero() {
    fuerza=75;
}

Guerrero::Guerrero(int vida, int salud, int ataque, int nivel, int fuerza):Atributos(vida, salud, ataque, nivel) {
    this->fuerza=fuerza;
}

int Guerrero::getFuerza() {
    return fuerza;
}

void Guerrero::setFuerza(int nuevaFuerza) {
    this->fuerza=nuevaFuerza;
}

int Guerrero::calculaAtaque(Atributos& objetivo) {
    int base=Atributos::calculaAtaque(objetivo);
    int golpe=rand()%100;
    if (golpe<fuerza) {
        cout<<"El guerrero hizo un golpe fuerte"<<endl;
        base=base*2;
    }
    return base;
}

void Guerrero::recibeAtaque(int puntosAtaque) {
    int golpe=rand()%100;
    if (golpe<fuerza/2) {
        cout<<"El arquero esquivó el golpe"<<endl;
        return;
    }
}

void Guerrero::mostrarInfo() {
    cout<<"Guerrero"<<endl;
    Atributos::mostrarInfo();
}