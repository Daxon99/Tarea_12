#include "Laboratorio.h"
#include "Computadora.h"
#include <iostream>


Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &E)
{
    if (cont < 5) {
        arreglo[cont] = E;
        cont++;
    }
    else {
        cout << "Arreglo lleno" << endl;
    }
}

void Laboratorio::mostrarComputadora()
{
    for (size_t i = 0; i < cont; i++) {
        Computadora &E = arreglo[i];
        cout << "CPU: " << E.getCPU() << endl;
        cout << "Nombre_equipo: " << E.getNombre_equipo() << endl;
        cout << "RAM: " << E.getRAM() << endl;
        cout << "DD: " << E.getDD() << endl;


        cout << endl;
    }
}
