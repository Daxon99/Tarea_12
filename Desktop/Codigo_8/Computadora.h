#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora
{
    string CPU;
    string Nombre_equipo;
    int RAM;
    int DD;
public:
    Computadora();
    Computadora(const string &CPU,
              const string &Nombre_equipo,
              int RAM,
              int DD);
    void setCPU(const string &v);
    string getCPU();
    void setNombre_equipo(const string &v);
    string getNombre_equipo();
    void setRAM(int v);
    int getRAM();
    void setDD(int v);
    int getDD();
};

#endif
