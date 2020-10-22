#include "Laboratorio.h"
#include <fstream>
#include <iostream>
using namespace std;

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
    cout << left;
    cout << setw(15) << "CPU";
    cout << setw(15) << "Nombre Equipo";
    cout << setw(15) << "RAM";
    cout << setw(15) << "Disco Duro";
    cout <<""<<endl;

    for (size_t i = 0; i < cont; i++) {
        Computadora &E = arreglo[i];
        cout << E;
        //cout << "CPU: " << E.getCPU() << endl;
        //cout << "Nombre Equipo: " << E.getNombre_equipo() << endl;
        //cout << "RAM: " << E.getRAM() << endl;
        //cout << "Disco Duro: " << E.getDD() << endl;
        //cout << endl;
    }
}
