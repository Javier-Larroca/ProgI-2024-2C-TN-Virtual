#include <iostream>
using namespace std;

/*
3. Hacerunafunci�n llamada EsPrimo que determine si un n�mero es primo o
 no. La funci�n debe recibir el n�mero y devolver true si es primo o false si no lo es.
 La funci�n no debe mostrar nada por pantalla.
 Hacer un programa para ingresar un n�mero y, utilizando EsPrimo, emita luego
 un cartel indicando si el n�mero ingresado es primo o no es primo.

 */

bool esPrimo(int n)
{
    int cont = 0;
    for (int x=1; x<=n; x++)
    {
        if (n%x==0)
        {
            cont++;
        }
    }

    return cont==2;
    //if (cont==2)
    //{
        //return true;
    //}
    //else{
    //return false;
    //}
}


int main()
{
    //bool resultado;
    int nro;
    cout << "Ingrese un numero: ";
    cin >> nro;

    //resultado = esPrimo(nro);

    //if(resultado==true)
    //if(resultado)
    if(esPrimo(nro))
    {
        cout<<"El nro ingresado es primo"<<endl;
    }
    else
    {
        cout<<"El nro ingresado no es primo"<<endl;
    }

    return 0;
}

