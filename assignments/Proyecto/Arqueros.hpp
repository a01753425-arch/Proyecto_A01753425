#include <iostream>
using namespace std;
#include "Atributos.hpp"

class Arqueros :public Atributos {
private:
    int precision;
public:
    Arqueros();
    Arqueros(int vida, int salud, int ataque, int nivel, int precision);
    int getPrecision();
    void setPrecision(int nuevaPrecision);
    int calculaAtaque(Atributos& objetivo);
    void recibeAtaque(int puntosAtaque);
    void mostrarInfo();

};