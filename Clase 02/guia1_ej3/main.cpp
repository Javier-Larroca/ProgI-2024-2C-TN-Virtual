#include <iostream>
using namespace std;

/*
    3) Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más
    $700 de premio por cada auto vendido. Hacer un programa que permita
    ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
    informar por pantalla el sueldo total a pagar.
    Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
    pagar es de $7800.
*/

int main()
{
    // DECLARACIÓN VARIABLES
    int cav;
    const float SF = 5000;
    const float P = 700;
    float tp;

    // INGRESO DATOS
    cout << "Ingrese Autos Vendidos: ";
    cin >> cav;

    // PROCESO
    tp = SF + cav * P;

    cout << endl;

    // SALIDA
    cout << "El Total a pagar es de $ " << tp << endl;

    return 0;
}
