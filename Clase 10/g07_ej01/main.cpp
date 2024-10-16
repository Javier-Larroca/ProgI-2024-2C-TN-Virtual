#include <iostream>
using namespace std;

/*
 Hacer un programa para ingresar 10 números y guardarlos en un vector.
 Determinar e informar cuál es la suma de los valores del vector.
*/

int main()
{
    const int VUELTAS = 5;
    int vectorNumeros[VUELTAS];
    int nro, suma = 0;

    for(int i=0; i<VUELTAS; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> nro;

        vectorNumeros[i]=nro;
    }

    for(int i=0; i<VUELTAS; i++)
    {
        cout<<"Indice: "<<i<<endl;
        cout<<"Valor: "<<vectorNumeros[i]<<endl;
    }

    for(int i=0; i<VUELTAS; i++)
    {
        suma += vectorNumeros[i];
    }

    cout<<"La suma es: "<<suma<<endl;

    return 0;
}
