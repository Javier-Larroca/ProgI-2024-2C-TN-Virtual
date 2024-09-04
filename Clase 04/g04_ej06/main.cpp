#include <iostream>
using namespace std;

/*
 6- Hacer un programa para ingresar una lista de números que finaliza cuando se
 ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.
 Ejemplo: 4,-3, 8,-5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
 Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.
 */

int main()
{
    int n, cantPos, cantNeg;
    cantPos = 0;
    cantNeg = 0;

    cout <<"El programa finalizara cuando se ingrese un 0." << endl;
    cout <<"Ingrese un numero: ";
    cin>>n;

    while(n!=0)
    {
        if(n>0)
        {
            cantPos++;
        }
        else
        {
            cantNeg++;
        }

        cout <<"Ingrese un numero: ";
        cin>>n;
    }

    cout<<"Cantidad positivos: "<<cantPos<<endl;
    cout<<"Cantidad de negativos: "<<cantNeg<<endl;

    return 0;
}
