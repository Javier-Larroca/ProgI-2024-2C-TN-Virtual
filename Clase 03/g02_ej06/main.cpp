#include <iostream>
using namespace std;

/*
    Hacer un programa para ingresar por teclado tres números y luego determinar e
    informar con una leyenda aclaratoria si los tres son iguales entre sí, caso
    contrario no emitir nada.
    Tener en cuenta: Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/

int main()
{
    setlocale(LC_ALL, "spanish");
    //Declaracion de variables
    int a, b, c;

    //Ingreso de datos
    cout << "Ingrese tres números: " << endl;
    cin >> a >> b >> c;

    /*if (a==b)
    {
        if (b==c)
        {
            cout<<"Los tres números son iguales";
        }
    } */

    if(a==b && b==c)
    {
        cout<<"Los tres números son iguales";
    }

    cout<<endl;

    return 0;
}
