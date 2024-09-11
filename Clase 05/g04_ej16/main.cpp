#include <iostream>
using namespace std;

/*
 16. Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
 ingresan dos n�meros consecutivos iguales, y luego informar el m�ximo.
 Cuando se ingresa el n�mero repetido el mismo debe ser descartado.

    Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listar� M�ximo 35.
    En este caso, el segundo n�mero 22 no se analiza, solo sirve para finalizar el
    ingreso.
    Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listar� M�ximo 55.
    En este caso, el segundo n�mero 33 no se analiza, solo sirve para finalizar el
    ingreso.
    Ejemplo C: 5, 10, 20, 8, 55, 13, 55, -8, -5, 88, 88. Se listar� M�ximo 88.
    En este caso, el segundo n�mero 88 no se analiza, solo sirve para finalizar el
    ingreso.
*/

int main()
{
    int num, numAnt, mayor;
    bool bandera;

    cout<<"Ingrese un numero: ";
    cin>>num;
    //mayor=num;
    numAnt = num-1;

    while(num!=numAnt)
    {
        numAnt = num;
        if(num>mayor)
        {
            mayor=num;
        }
        cout<<"Ingrese un numero: ";
        cin>>num;
    }
    cout<<endl<<"El mayor numero ingresado es: "<<mayor<<endl;

    return 0;
}
