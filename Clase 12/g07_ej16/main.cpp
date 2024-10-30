#include <iostream>
#include "funciones.h"

using namespace std;

/*
    16) Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el
    vector hay algún elemento repetido y, en caso de haberlo, indicarlo con un
    cartel “Hay Repetidos”.
*/

int main()
{
    const int TAMANIO = 10;
    int vec[TAMANIO];

    cargarVector(vec, TAMANIO);

    //bool hayRep = hayRepetidos(vec, TAMANIO);

    if(hayRepetidos(vec, TAMANIO)){
        cout << "Hay Repetidos" << endl;
    }
    else{
        cout << "No hay Repetidos" << endl;
    }

    return 0;
}
