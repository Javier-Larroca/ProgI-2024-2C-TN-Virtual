#include <iostream>
using namespace std;
/*
 21. Hacer un programa que permita ingresar una lista de números positivos,
 negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor
 a 10. Calcular e informar:
    La cantidad de números que componen la lista.
    Ejemplo A: 1, 4, 6,-10 → Cantidad de números: 4
    Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7
 */

int main()
{
    int diferencia, numero, minimo, maximo, cantidadDeIngresos;
    bool seIngresoPrimerNumero=false;
    diferencia = 0;
    cantidadDeIngresos = 0;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    minimo=numero;
    maximo=numero;
    cantidadDeIngresos++;

    while(diferencia<=10)
    {
        cout<<"Ingrese un numero: ";
        cin>>numero;
        /*
        if(!seIngresoPrimerNumero)
        {
            minimo=numero;
            maximo=numero;
            seIngresoPrimerNumero = true;
        }else
        {
            */
        if(numero>maximo)
        {
            maximo=numero;
        }
        else
        {
            if(numero<minimo)
            {
                minimo=numero;
            }
        }
        //}
        diferencia = maximo-minimo;
        cantidadDeIngresos++;
    }

    cout<<endl<<"La cantidad de ingresos fue: "<<cantidadDeIngresos<<endl;
    return 0;
}
