#include <iostream>
#include "funciones.h"

using namespace std;

/*
    19) Dadas dos listas de 5 números cada una y sin números repetidos, cargarlas
    en dos vectores. Generar un tercer vector que contenga solamente aquellos
    elementos que están repetidos en ambos vectores. Mostrar en pantalla el
    nuevo vector.
    Vector 1: [8, 10, -3, 5, 7]
    Vector 2: [10, -8, 5, 9, -3]
    Vector 3: [10, -3, 5]
*/

int main()
{
    const int TAMANIO = 5;
    int vec1[TAMANIO];
    int vec2[TAMANIO];
    int vec3[TAMANIO] = {};

    cout << "Cargando el Primer Vector..." << endl;
    cargarVector(vec1, TAMANIO);
    cout << endl << "Cargando el Segundo Vector..." << endl;
    cargarVector(vec2, TAMANIO);

    int i = cargaRepetidos(vec1, vec2, vec3, TAMANIO);

    mostrarVector(vec3, i);

    return 0;
}


