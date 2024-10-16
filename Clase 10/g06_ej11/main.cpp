#include <iostream>
using namespace std;

/*
 Hacer una funci�n llamada contarDigitos que reciba por valor un n�mero
 entero y determine y devuelva la cantidad de d�gitos del n�mero. Por ejemplo,
 si se recibe el n�mero 840 debe devolver 3.
 Hacer un programa que, a partir de un n�mero que ingresa el usuario, informe
 por pantalla la cantidad de d�gitos del n�mero ingresado
 */

int contarDigitos(int numero)
{
    int cantNumero = 0;
    while (numero != 0)
    {
        numero = numero / 10;
        cantNumero++;
    }

    return cantNumero;
}

int main()
{
    int nro;
    int cantDigitos;

    cout << "Ingrese un numero: ";
    cin >> nro;

    cantDigitos = contarDigitos(nro);

    cout<<"La cantidad de digitos es: "<<cantDigitos<<endl;

    return 0;
}
