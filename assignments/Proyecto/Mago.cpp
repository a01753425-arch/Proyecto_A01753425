#include "Mago.hpp"
#include <cstdlib>
using namespace std;
#include <iostream>

Mago::Mago() {
    mana=15;
}

Mago::Mago(int vida, int salud, int ataque, int nivel, int mana):Atributos(vida, salud, ataque, nivel) {
    this->mana=mana;
}

int Mago::getMana() {
    return mana;
}

void Mago::setMana(int nuevoMana) {
    this->mana=nuevoMana;
}

int Mago::calculaAtaque(Atributos& objetivo) {
    int base=Atributos::calculaAtaque(objetivo);
    int hechizo=rand()%100;
    if (hechizo<mana){
        cout<<"El mago te hechizó"<<endl;
        base=base*2;
    }
    return base;
}

void Mago::recibeAtaque(int puntosAtaque) {
    int hechizo=rand()%100;
    if (hechizo<mana/4) {
        cout<<"El mago esquivó el hechizo"<<endl;
        return;
    }
}

void Mago::mostrarInfo() {
    cout<<"Mago"<<endl;
    Atributos::mostrarInfo();
}//