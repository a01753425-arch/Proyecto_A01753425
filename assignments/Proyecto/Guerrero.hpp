#include <iostream>
using namespace std;
#include "Atributos.hpp"

class Guerrero:public Atributos {
private:
    int fuerza;
public:
    Guerrero();
    Guerrero(int vida, int salud, int ataque, int nivel, int fuerza);
    int getFuerza();
    void setFuerza(int nuevaFuerza);
    int calculaAtaque(Atributos& objetivo);
    void recibeAtaque(int puntosAtaque);
    void mostrarInfo();

};
