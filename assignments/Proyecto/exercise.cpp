#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Atributos.hpp"
#include "Mago.hpp"
#include "Guerrero.hpp"
#include "Arqueros.hpp"

int main() {
    srand(time(0));

    Mago merlin(100, 100, 12, 2, 60);
    Guerrero conan(120, 120, 15, 2, 70);
    Arqueros legolas(90, 90, 10, 3, 80);

    cout << "=== Estado inicial ===" << endl;
    merlin.mostrarInfo();
    cout << endl;
    conan.mostrarInfo();
    cout << endl;
    legolas.mostrarInfo();
    cout << endl;

    cout << "=== El mago ataca al guerrero ===" << endl;
    conan.recibeAtaque(merlin.calculaAtaque(conan));
    conan.mostrarInfo();
    cout << endl;

    cout << "=== El guerrero ataca al mago ===" << endl;
    merlin.recibeAtaque(conan.calculaAtaque(merlin));
    merlin.mostrarInfo();
    cout << endl;

    cout << "=== El guerrero ataca al arquero ===" << endl;
    legolas.recibeAtaque(conan.calculaAtaque(legolas));
    legolas.mostrarInfo();
    cout << endl;

    cout << "=== El arquero ataca al guerrero ===" << endl;
    conan.recibeAtaque(legolas.calculaAtaque(conan));
    conan.mostrarInfo();
    cout << endl;

    cout << "=== El mago ataca al arquero ===" << endl;
    legolas.recibeAtaque(merlin.calculaAtaque(legolas));
    legolas.mostrarInfo();
    cout << endl;

    cout << "=== El arquero ataca al mago ===" << endl;
    merlin.recibeAtaque(legolas.calculaAtaque(merlin));
    merlin.mostrarInfo();
    cout << endl;

    cout << "=== Estado final ===" << endl;
    merlin.mostrarInfo();
    cout << endl;
    conan.mostrarInfo();
    cout << endl;
    legolas.mostrarInfo();

    return 0;
}