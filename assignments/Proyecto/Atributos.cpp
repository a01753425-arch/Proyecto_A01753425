#include <iostream>
#include <ostream>
//
// Created by jmeji on 04/07/2026.
//
using namespace std;
#include "Atributos.hpp"

Atributos::Atributos() {
    vida=100;
    salud=100;
    ataque=10;
    nivel=1;
}
Atributos::Atributos(int vida, int salud, int ataque, int nivel) {
    this->vida=vida;
    this->salud=salud;
    this->ataque=ataque;
    this->nivel=nivel;
}

int Atributos::getVida() {
    return vida;
}

int Atributos::getSalud() {
    return salud;
}

int Atributos::getAtaque() {
    return ataque;
}

int Atributos::getNivel() {
    return nivel;
}

void Atributos::setVida(int nuevaVida) {
    vida=nuevaVida;
}

void Atributos::setSalud(int nuevaSalud) {
    salud=nuevaSalud;
}

void Atributos::setAtaque(int nuevoAtaque) {
    ataque=nuevoAtaque;
}

void Atributos::setNivel(int nuevoNivel) {
    nivel=nuevoNivel;
}

int Atributos::porSalud() {
    return (salud*100)/vida;
}

void Atributos::imprimeBarra() {
    int porcentaje=porSalud();
    cout<<"Porcentaje: ";
    int caracteres=porcentaje/5;
    for (int i=0; i<caracteres; i++) {
        cout<<"%";
    }
    for(int i=caracteres;i<20;i++) {
        cout<<"=";
    }
    cout<<" "<<porcentaje<<"%"<<endl;
}

int Atributos::calculaAtaque(Atributos& objetivo) {
    int puntosAtaque=ataque;
    if (nivel>objetivo.getNivel()) {
        puntosAtaque= ataque+(ataque/2);
    } else if (nivel==objetivo.getNivel()) {
        puntosAtaque=ataque;
    } else {
        puntosAtaque=ataque-(ataque/2);
    }
    return puntosAtaque;
}

void Atributos::recibeAtaque( int puntosAtaque) {
    salud-=puntosAtaque;
    if (salud<0) {
        salud=0;
    }
}

void Atributos::atacar(Atributos& objetivo) {
    int puntosAtaque=calculaAtaque(objetivo);
    objetivo.recibeAtaque(puntosAtaque);
}

void Atributos::mostrarInfo() {
    cout<<"Vida: "<<vida<<endl;
    cout<<"Salud: "<<salud<<endl;
    cout<<"Ataque: "<<ataque<<endl;
    cout<<"Nivel: "<<nivel<<endl;
    imprimeBarra();
}