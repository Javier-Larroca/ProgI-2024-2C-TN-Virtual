#include <iostream>
using namespace std;

/*
    9) Hacer un programa para ingresar por teclado una cantidad de minutos y
    mostrar por pantalla a cuantas horas y minutos equivalen.
    Ejemplo A: si se ingresan 380 minutos el programa mostrará por pantalla que
    equivalen a 6 horas y 20 minutos.
    Ejemplo B: si se ingresan 720 minutos el programa mostrará por pantalla que
    equivalen a 12 horas y 0 minutos
*/

int main()
{
    // DECLARACIÓN VARIABLES
    int minutos, horas;
    int restanteMinutos;

    // INGRESO
    cout << "Ingrese Minutos: ";
    cin >> minutos;

    // PROCESOS
    horas = minutos / 60;
    restanteMinutos = minutos % 60;
    //minutos = minutos % 60;

    // SALIDAS
    cout << endl;
    cout << "La Cantidad de Minutos " << minutos << " equivalen a..." << endl;
    cout << "Cant. de Horas: " << horas << endl;
    cout << "Cant. de Minutos: " << restanteMinutos << endl;

    return 0;
}
