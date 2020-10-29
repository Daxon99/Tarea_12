#ifndef ARREGLO_H
#define AAREGLO_H

#include <iostream>
using namespace std;
class Arreglo
{
    string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;

public:
    Arreglo();
    ~Arreglo();
    void insertar_inicio (const string &s);
    void insertar_final (const string &s);
    size_t size();

    string operator[](size_t p)
    {
        return arreglo[p];
    }
private:
    void expandir();


};

#endif 