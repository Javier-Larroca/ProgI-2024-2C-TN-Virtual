#include <iostream>
using namespace std;

/*
 5 Hacer una funci�n llamada Redondear que reciba como par�metro un n�mero
 float y devuelva un n�mero entero con el redondeo del mismo.
 Por ejemplo:
 Si recibe 7.78, debe devolver 8.
 Si recibe 7.48, debe devolver 7.
 Si recibe 7.5, debe devolver 8.
 Hacer un programa para ingresar un n�mero y, utilizando Redondear, emita
 luego un cartel indicando el n�mero redondeado.
*/

int redondear(float n)
{
    int numeroSinComa;
    //float coma;

    numeroSinComa = (int)n;
    //coma = n-numeroSinComa;
    //if(coma>=0.5)
    if(n-numeroSinComa>=0.5)
    {
        //numeroSinComa= numeroSinComa + 1;
        return numeroSinComa + 1;
    }

    return numeroSinComa;
}

int main()
{

    float nro;
    //int nroRedondeado;

    cout << "Ingrese un numero: ";
    cin >> nro;

    //nroRedondeado = redondear(nro);

    //cout<<"El numero sin coma es: "<<nroRedondeado<<endl;
    cout<<"El numero sin coma es: "<<redondear(nro)<<endl;

    return 0;
}
