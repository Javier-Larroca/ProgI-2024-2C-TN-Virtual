#include <iostream>
using namespace std;

/*
    Hacer un programa para ingresar por teclado tres n�meros y luego determinar e
    informar con una leyenda aclaratoria si los tres son iguales entre s�, caso
    contrario no emitir nada.
    Tener en cuenta: Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/

int main()
{
    setlocale(LC_ALL, "spanish");
    //Declaracion de variables
    int a, b, c;

    //Ingreso de datos
    cout << "Ingrese tres n�meros: " << endl;
    cin >> a >> b >> c;

    /*if (a==b)
    {
        if (b==c)
        {
            cout<<"Los tres n�meros son iguales";
        }
    } */

    if(a==b && b==c)
    {
        cout<<"Los tres n�meros son iguales";
    }

    cout<<endl;

    return 0;
}
