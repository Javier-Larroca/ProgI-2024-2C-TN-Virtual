#include <iostream>
using namespace std;

/*
 Hacer una función llamada contarDigitos que reciba por valor un número
 entero y determine y devuelva la cantidad de dígitos del número. Por ejemplo,
 si se recibe el número 840 debe devolver 3.
 Hacer un programa que, a partir de un número que ingresa el usuario, informe
 por pantalla la cantidad de dígitos del número ingresado
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
