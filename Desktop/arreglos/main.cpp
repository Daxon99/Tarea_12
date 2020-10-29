#include <iostream>
#include "arreglo.h"
using namespace std;

void modificar(int *a)
{
    *a = *a + 1;
}
int main()
{
    Arreglo arreglo;
    arreglo.insertar_final("Hola");
    arreglo.insertar_final("Que tal");
    arreglo.insertar_final("WEnas");
    arreglo.insertar_final("si");
    arreglo.insertar_final("Gol");
    arreglo.insertar_final("Agua");
    arreglo.insertar_final("Sal");
    arreglo.insertar_final("Arena");


    arreglo. insertar_inicio("Kilo");
    arreglo. insertar_inicio("Perro");
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i]<<" ";
    }
    


    //int *b = nullptr;
    //b = new int[100];
    //cout << b << " " << *b << endl;
    //delete[] b;
    
    //int a=12;

    //cout << a << endl;
    //cout << &a << endl;
    //modificar (&a);
    //cout << a << endl;


    return 0;
} 
