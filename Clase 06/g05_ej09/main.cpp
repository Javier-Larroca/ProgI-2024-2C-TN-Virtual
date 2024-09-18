#include <iostream>
using namespace std;

/*
 Hacer un programa para ingresar los valores de los pesos de distintas
 encomiendas que se deben enviar a distintos clientes y que finaliza cuando se
 ingresa un peso negativo. Se deben agrupar las encomiendas en camiones que
 pueden transportar hasta 200 kilos en total.
 a) El n�mero de cada cami�n y peso total de encomiendas. Cami�n 1: 170 kg,
 Cami�n 2: 170 kg, etc.
 b) El n�mero de cami�n que transporta mayor cantidad de encomiendas. En el
 ejemplo anterior ser�a el Cami�n 3 con 4 encomiendas
 */

int main()
{
    float pesoEncomienda;
    float pesoCamion;
    cout<<"Ingrese el peso de la encomienda: ";
    cin>>pesoEncomienda;

    while (pesoEncomienda>=0)
    {
        pesoCamion = 0;

        while(pesoEncomienda>=0 && pesoCamion+pesoEncomienda<=200)
        {
            pesoCamion+=pesoEncomienda;

            cout<<"Ingrese el peso de la encomienda: ";
            cin>>pesoEncomienda;
        }
        //cout<<"El peso del camion fue: "<<pesoCamion<<endl;
    }
    return 0;
}
