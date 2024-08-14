#include <iostream>
using namespace std;


int main()
{
    /*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
    por un operario y el valor que se le paga por hora trabajada y listar por pantalla
    el sueldo que le corresponda.*/

    //Declaración de variables
    float horasTrabajadas;
    float valorHora;
    float sueldo;

    //Ingreso de datos
    cout<<"Ingrese las horas trabajadas: ";
    cin>>horasTrabajadas;
    cout<<"Ingrese el valor hora: ";
    cin>>valorHora;

    //Proceso
    sueldo = horasTrabajadas * valorHora;

    //Salida de datos
    cout<<endl;
    cout<<"El sueldo total es: $"<<sueldo<<endl;
    cout<<endl;
    return 0;
}

/*
//Codgio de Bruno corregido en clase.
#include <iostream>
using namespace std;
int main()
{
    float HorasTrabajadas, sueldo;
    float ValorHora;
    cout<<"ingrese las horas trabajadas: ";
    cin>>HorasTrabajadas;
    cout<<"ingrese las valor de la hora: ";
    cin>>ValorHora;

    sueldo = HorasTrabajadas*ValorHora;
    cout<<"el resultado es: "<<sueldo;

    return 0;
}
*/



