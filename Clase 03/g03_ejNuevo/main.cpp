#include <iostream>
using namespace std;

/*
    Hacer un programa para ingresar por teclado la edad de tres personas y
    luego emitir por pantalla el promedio de edad de aquellas personas mayores de 30 años
*/

int main()
{
    //Declaracion de variables
    int edad;
    int cantidad, total;
    float promedioEdad;

    cantidad = 0;
    total = 0;

    for (int i=0; i<10; i++)
    {
        //Ingreso de datos
        cout<<"Ingrese la edad la persona "<<i+1<<": ";
        cin>>edad;

        if (edad>30)
        {
            cantidad = cantidad + 1;
            total = total + edad;
        }
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
