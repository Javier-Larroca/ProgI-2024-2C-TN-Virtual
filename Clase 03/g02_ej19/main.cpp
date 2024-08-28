#include <iostream>
using namespace std;

/*
    El costo de un desarrollo de un proyecto de software se calcula en base al
    lenguaje que se necesita:
        Nombre  Tipo Valor hora
        C/C++   'C'    $ 7500
        C#      '#'    $ 6100
        Python  'P'    $ 5400
        Go      'G'    $ 5000
    Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más
    al costo del proyecto.
    Le solicitan un programa que permita calcular el costo total de un proyecto
    basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)
*/
int main()
{
    //Declaracion de variables
    const float VALOR_HORA_C = 7500;
    int cantHoras;
    float valorHora;
    char tipoLenguaje;
    bool urgente;

    //Ingreso de datos
    cout<<"Ingrese la cantidad de horas: ";
    cin>>cantHoras;
    cout<<"Ingrese el tipo de lenguaje (C, #, P, G): ";
    cin>>tipoLenguaje;
    //verdadero -> 1
    //falso -> 0
    cout<<"Ingrese si es urgente (1) o no (0): ";
    cin>>urgente;

    //Forma de convertir una minuscula en mayuscula:
    //tipoLenguaje = toupper(tipoLenguaje);

    switch (toupper(tipoLenguaje))
    {
        case 'C':
            valorHora = VALOR_HORA_C;
        break;
        case '#':
            valorHora = 6100;
        break;
        case 'P':
            valorHora = 5400;
        break;
        case 'G':
            valorHora = 500;
        break;
        default:
            cout<<"El tipo de lenguaje ingresado no es correcto."<<endl;
            valorHora = 0;
        break;
    }

    cout<<"Valor de la hora es de: $"<<valorHora;

    if (urgente)
    {

    }

    return 0;
}
