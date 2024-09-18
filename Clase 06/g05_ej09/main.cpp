#include <iostream>
using namespace std;

/*
 Hacer un programa para ingresar los valores de los pesos de distintas
 encomiendas que se deben enviar a distintos clientes y que finaliza cuando se
 ingresa un peso negativo. Se deben agrupar las encomiendas en camiones que
 pueden transportar hasta 200 kilos en total.
 a) El número de cada camión y peso total de encomiendas. Camión 1: 170 kg,
 Camión 2: 170 kg, etc.
 b) El número de camión que transporta mayor cantidad de encomiendas. En el
 ejemplo anterior sería el Camión 3 con 4 encomiendas
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
