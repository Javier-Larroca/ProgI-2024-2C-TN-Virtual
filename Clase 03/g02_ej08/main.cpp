#include <iostream>
using namespace std;

/*
8 Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por
teclado la longitud de los tres lados de un tri�ngulo y luego listar qu� tipo de
tri�ngulo es:
    - Equil�tero: si los tres lados son iguales.
    - Is�sceles: si dos de los tres lados son iguales.
    - Escaleno: si los tres lados son distintos entre s�.
*/

int main()
{
    //Seteo de lenguaje para uso de � y tildes.
    setlocale(LC_ALL, "spanish");

    //Declaracion de variables
    int l1, l2, l3;

    //Ingreso de datos
    cout<<"Ingrese lado 1: ";
    cin>>l1;
    cout<<"Ingrese lado 2: ";
    cin>>l2;
    cout<<"Ingrese lado 3: ";
    cin>>l3;

    //Condicionales
//    if(l1==l2 && l2==l3)
//    {
//        cout<<"Es un triangulo Equil�tero";
//    }
//    else
//    {
//        if(l1!=l2 && l2!=l3 && l1!=l3)
//        {
//            cout<<"Es un triangulo Escaleno";
//        }
//        else
//        {
//           cout<<"Es un triangulo Is�sceles";
//        }
//    }

    if(l1==l2 && l2==l3)
    {
        cout<<"Es un triangulo Equil�tero";
    }
    else if(l1!=l2 && l2!=l3 && l1!=l3)
    {
        cout<<"Es un triangulo Escaleno";
    }
    else
    {
        cout<<"Es un triangulo Is�sceles";
    }

    return 0;
}
