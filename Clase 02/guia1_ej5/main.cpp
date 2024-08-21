#include <iostream>
using namespace std;

/*
    5) Un comercio vende tres marcas de alfajores distintas Shot, Fulbito y Pepito. Hacer un
    programa para ingresar por teclado la cantidad de alfajores vendidos de cada
    una de las tres marcas y luego se informe el porcentaje de ventas para cada
    una de ellas.
    Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
    programa calculará e informará Shot: 50%, Fulbito: 12,50% y Pepito: 37,50%.
*/

int main()
{
    // DECLARACIÓN DE VARIABLES
    int shot, fulbito, pepito;
    float porcShot, porcFulbito, porcPepito;
    int totalAlfajores;

    // INGRESO DATOS
    cout << "Ingrese Alfajores Shot: ";
    cin >> shot;
    cout << "Ingrese Alfajores Fulbito: ";
    cin >> fulbito;
    cout << "Ingrese Alfajores Pepito: ";
    cin >> pepito;

    // PROCESOS
    totalAlfajores = shot + fulbito + pepito;

    porcShot = (float)shot * 100 / totalAlfajores;
    porcFulbito = fulbito * 100.0 / totalAlfajores;
    porcPepito = (float)(pepito * 100) / totalAlfajores;

    // SALIDAS
    cout << endl;
    cout << "Porcentaje Shot: " << porcShot << " %" << endl;
    cout << "Porcentaje Fulbito: " << porcFulbito << " %"  << endl;
    cout << "Porcentaje Pepito: " << porcPepito << " %"  << endl;

    return 0;
}
