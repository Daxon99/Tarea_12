#include <iostream>
#include "Laboratorio.h"
#include "Computadora.h"

using namespace std;

int main() {
    Computadora E02 = Computadora(  "Intel",
                                "DavidL",
                                8,
                                200);

 // = Computadora();
    Computadora E03;
    E03.setCPU("AMD");
    E03.setNombre_equipo("Jesus");
    E03.setRAM(16);
    E03.setDD(500);

    Laboratorio abc;
    abc.agregarComputadora(E02);
    abc.agregarComputadora(E03);

    abc.mostrarComputadora();



     //cout << E03.getCPU() << endl;
     //cout << E03.getNombre_tipo() << endl;
     //cout << E03.getRAM() << endl;
     //cout << E03.getDD() << endl;



    return 0;
}
