#include <iostream>
using namespace std;

/*
    13) Hacer un programa para un cajero automático para ingresar un importe a retirar
    y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
    entregar.
    Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se
    deberán entregar 2 billetes de $1.000, 1 billete de $500, 0 billetes de $200 y 0
    billetes de $100.
    Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se
    deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0
    billetes de $100.
*/

int main()
{
    // DECLARACIÓN DE VARIABLES
    int importe, b1000, b500, b200, b100;
    int sobrante;

    // INGRESO DE DATO
    cout << "Ingrese el Monto a retirar: $ ";
    cin >> importe;

    // PROCESOS
    b1000 = importe / 1000;
    importe = importe % 1000;

    b500 = importe / 500;
    importe = importe % 500;

    b200 = importe / 200;
    importe = importe % 200;

    b100 = importe / 100;

    cout << endl;

    // SALIDAS
    cout << "-----------------------------" << endl;
    cout << "Billetes de 1000: " << b1000 << endl;
    cout << "Billetes de 500: " << b500 << endl;
    cout << "Billetes de 200: " << b200 << endl;
    cout << "Billetes de 100: " << b100 << endl;
    cout << "-----------------------------" << endl;

    return 0;
}
