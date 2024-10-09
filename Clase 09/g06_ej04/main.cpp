#include <iostream>
using namespace std;

/*
 Hacer una función llamada EsPrimoSophieGermain que reciba un número
 entero y determine si el mismo es un número primo de Sophie Germain.
 Debe devolver verdadero si lo es y falso si no lo es.
 NOTA: En teoría de números, se dice que un número natural es un número
 primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
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
}

bool esPrimoSophieGermain(int n)
{
    if(esPrimo(n))
    {
        //int n2 = 2*n+1;
        //if(esPrimo(n2))
        if(esPrimo(2*n+1))
        {
            return true;
        }
        //else
        //{
        //    return false;
        //}
    }
    //else
    //{
    return false;
    //}
}

bool esPrimoSophieGermainHernan(int n)
{
    return esPrimo(n) && esPrimo(2*n+1);
}

int main()
{
    int nro;

    cout << "Ingrese un numero: ";
    cin >> nro;

    //if(esPrimoSophieGermain(nro))
    if(esPrimoSophieGermainHernan(nro))
    {
        cout<<"El nro ingresado es primo de Sofi"<<endl;
    }
    else
    {
        cout<<"El nro ingresado no es primo de Sofi"<<endl;
    }
    return 0;
}
