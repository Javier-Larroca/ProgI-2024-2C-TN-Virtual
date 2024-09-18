#include <iostream>
using namespace std;

int main()
{

    int numero, par, posisicion_par, primo, posicion_primo;
    int posicion = 1, divisor = 1, bandera = 0, bandera_2 = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while(numero !=0)
    {

        if(bandera == 0)
        {

            if(numero % 2 == 0)
            {

                par = numero;
                posisicion_par = posicion;
                bandera = 1;
            }
        }

        if(bandera_2 == 0)
        {

            if(numero % divisor == 0)
            {

                primo = numero;
                posicion_primo = posicion;
                bandera_2 = 1;
            }
        }
        else if(numero % divisor == 0)
        {

            primo = numero;
            posicion_primo = posicion;
        }

        posicion++;

        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    cout << "Primer numero par: " << par << " Posicion: " << posisicion_par << ", ultimo primo: " << primo << " Posicion: " << posicion_primo << endl;

    return 0;

}
