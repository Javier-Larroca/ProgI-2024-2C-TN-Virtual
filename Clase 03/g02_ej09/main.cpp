#include <iostream>
using namespace std;
/*
9 Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/

int main()
{
    //Declaracion de variables
    int n1, n2, n3, maximo;

    //Ingreso de datos
    cout<<"Ingrese tres numeros: "<<endl;
    cin>>n1>>n2>>n3;

//    if (n1>n2 && n1>n3)
//    {
//        cout<<"El maximo es "<<n1;
//    }
//    else
//    {
//        if(n2>n3)
//        {
//            cout<<"El mayor es "<<n2;
//        }
//        else
//        {
//            cout<<"El mayor es "<<n3;
//        }
//    }

    if(n1>n2)
    {
        maximo = n1;
    }
    else
    {
        maximo = n2;
    }

    if (n3>maximo)
    {
        maximo = n3;
    }

    cout<<"El mayor es: "<<maximo;
    return 0;
}
