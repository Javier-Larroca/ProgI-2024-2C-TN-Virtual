#include <iostream>
using namespace std;

/*
8 Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por
teclado la longitud de los tres lados de un triángulo y luego listar qué tipo de
triángulo es:
    - Equilátero: si los tres lados son iguales.
    - Isósceles: si dos de los tres lados son iguales.
    - Escaleno: si los tres lados son distintos entre sí.
*/

int main()
{
    //Seteo de lenguaje para uso de Ñ y tildes.
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
//        cout<<"Es un triangulo Equilátero";
//    }
//    else
//    {
//        if(l1!=l2 && l2!=l3 && l1!=l3)
//        {
//            cout<<"Es un triangulo Escaleno";
//        }
//        else
//        {
//           cout<<"Es un triangulo Isósceles";
//        }
//    }

    if(l1==l2 && l2==l3)
    {
        cout<<"Es un triangulo Equilátero";
    }
    else if(l1!=l2 && l2!=l3 && l1!=l3)
    {
        cout<<"Es un triangulo Escaleno";
    }
    else
    {
        cout<<"Es un triangulo Isósceles";
    }

    return 0;
}
