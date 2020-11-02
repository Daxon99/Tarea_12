#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo <string> arreglo;
    arreglo.insertar_inicio("Buenos");
    arreglo.insertar_inicio("Hola");
    arreglo.insertar_final("Dias");
    arreglo.insertar_final("David");
    for (size_t i = 0; i<arreglo.size(); i++)
    {
        cout<<  (arreglo[i])<< " ";
    }
    cout<< endl;
    arreglo.insertar ("Felices",2);
    for (size_t i = 0; i<arreglo.size(); i++)
    {
        cout<<  (arreglo[i])<< " ";
    }
    cout<< endl;

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    for (size_t i = 0; i<arreglo.size(); i++)
    {
        cout<<  (arreglo[i])<< " ";
    }
    cout<< endl;


    return 0;
}