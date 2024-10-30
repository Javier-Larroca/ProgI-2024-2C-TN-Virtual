#include <iostream>
#include "funciones.h"

using namespace std;

/*
    12) Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un
    número e informar la cantidad de veces que ese número aparece en el vector.
*/

int main()
{
    const int TAMANIO = 10;
    int vec[TAMANIO];
    int nro;

    cargarVector(vec, TAMANIO);

    cout << "Ingrese numero a buscar: ";
    cin >> nro;

    int cant = contarRepetidos(vec, TAMANIO, nro);

    cout << endl << "Cant. de veces que se repite el " << nro << " es de " << cant << " veces." << endl;

    return 0;
}
