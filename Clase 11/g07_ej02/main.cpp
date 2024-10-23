#include <iostream>
using namespace std;

/*

 Leer 10 números y guardarlos en un vector. Calcular el promedio y luego
 mostrar por pantalla los valores que son mayores al promedio.

*/

float calcularPromedio(int tamanio, int nums[]);
void cargarVector(int tamanio, int nums[]);

int main()
{
    int const CANT_NUMEROS = 5;
    int numeros[CANT_NUMEROS];
    float prom;

    cargarVector(CANT_NUMEROS, numeros);
    prom = calcularPromedio(CANT_NUMEROS, numeros);

    cout<<endl<<"Numeros mayores al promedio: "<<prom<<endl<<endl;
    for(int x=0; x<CANT_NUMEROS; x++)
    {
        if(numeros[x]>prom)
        {
            cout<<"Numeros: "<<numeros[x]<<endl;
        }
    }

    return 0;
}

float calcularPromedio(int tamanio, int nums[])
{

    cout<<"Tamanio: "<<tamanio<<endl;
    int suma = 0;
    //float promedio;

    for(int x=0; x<tamanio; x++)
    {
        suma += nums[x];
    }
    //promedio = suma / (float)tamanio;
    //return promedio;

    return suma / (float)tamanio;
}

void cargarVector(int tamanio, int nums[])
{
    for(int i = 0; i < tamanio; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> nums[i];
    }
}
