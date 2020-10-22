#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "Computadora.h"

class Laboratorio{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarComputadora(const Computadora &E);
    void mostrarComputadora();

    friend Laboratorio& operator<<(Laboratorio &abc, const Computadora &E){
        abc.agregarComputadora(E);

        return abc;

    }
};

#endif
