#include <iostream>
using namespace std;
#include "Atributos.hpp"

class Mago:public Atributos {
private:
    int mana;
public:
    Mago();
    Mago(int vida, int salud, int ataque, int nivel, int mana);
    int getMana();
    void setMana(int nuevoMana);
    int calculaAtaque(Atributos& objetivo);
    void recibeAtaque(int puntosAtaque);
    void mostrarInfo();

};