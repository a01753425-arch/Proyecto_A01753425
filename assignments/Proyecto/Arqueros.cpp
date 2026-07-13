#include "Arqueros.hpp"
#include <cstdlib>
using namespace std;
#include <iostream>

Arqueros::Arqueros() {
    precision=50;
}

Arqueros::Arqueros(int vida, int salud, int ataque, int nivel, int precision):Atributos(vida, salud, ataque, nivel) {
    this->precision=precision;
}

int Arqueros::getPrecision() {
    return precision;
}

void Arqueros::setPrecision(int nuevaPrecision) {
    this->precision=nuevaPrecision;
}

int Arqueros::calculaAtaque(Atributos& objetivo) {
    int base=Atributos::calculaAtaque(objetivo);
    int tiro=rand()%100;
    if (tiro<precision) {
        cout<<"El arquero hizo un tiro crítico"<<endl;
        base=base*2;
    }
    return base;
}

void Arqueros::recibeAtaque(int puntosAtaque) {
    int tiro=rand()%100;
    if (tiro<precision/3) {
        cout<<"El arquero esquivó el ataque"<<endl;
    return;
    }
}

void Arqueros::mostrarInfo() {
    cout<<"Arquero"<<endl;
    Atributos::mostrarInfo();
}