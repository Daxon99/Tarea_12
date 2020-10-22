#ifndef LABORATORIO_H
#define LABORATORIO_H
#include <iostream>


#include "Computadora.h"

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarComputadora(const Computadora &E);
    void mostrarComputadora();
};

#endif
