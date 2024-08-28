#include <iostream>
using namespace std;

/*
    Hacer un programa para ingresar por teclado la edad de tres personas y
    luego emitir por pantalla el promedio de edad de aquellas personas mayores de 30 años
*/

int main()
{
    //Declaracion de variables
    int edad1, edad2, edad3;
    int cantidad, total;
    float promedioEdad;

    //Ingreso de datos
    cout<<"Ingrese edad persona 1: ";
    cin>>edad1;
    cout<<"Ingrese edad persona 2: ";
    cin>>edad2;
    cout<<"Ingrese edad persona 3: ";
    cin>>edad3;

    cantidad = 0;
    total = 0;

    if (edad1>30)
    {
        cantidad = cantidad + 1;
        total = total + edad1;
    }

    if (edad2>30)
    {
        cantidad++;
        total += edad2;
    }

    if (edad3>30)
    {
        cantidad++;
        total += edad3;
    }

    if (cantidad>0)
    {
        promedioEdad = (float)total / cantidad;
        cout<<"El promedio de edad de mayores a 30 es de: "<<promedioEdad<<endl;
    }
    else
    {
        cout<<"Ninguna persona fue mayor a 30 años."<<endl;
    }

    return 0;
}
