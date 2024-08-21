#include <iostream>

using namespace std;

int main()
{
    /*1 - Hacer un programa para ingresar por teclado un número y luego emitir por
    pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
    Importante: Verifique que el programa emita UN SOLO CARTEL. */

    //Declaracion de variables
    int numero;

    //Ingreso de datos
    cout<< "Ingrese un numero: ";
    cin>> numero;

    //Condicio
    if (numero > 0)
    {
        cout << "El numero es positivo.";
    }
    else
    {
         if (numero < 0)
         {
             cout << "El numero es negativo";
         }
         else
         {
             cout << "El numero es cero.";
         }
    }

    cout<<endl;
    return 0;
}
