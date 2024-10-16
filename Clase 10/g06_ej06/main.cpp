#include <iostream>
using namespace std;

/*
 Hacer una función que reciba un número entero por valor llamado día y un
 string llamado nombre por referencia y le asigne el nombre correspondiente
 según el número de día. Siendo 0 → Domingo y 6 → Sábado.
*/

void nombreDia(int dia, string &nombre)
{
    switch(dia)
    {
    case 0:
        nombre = "Domingo";
        break;
    case 1:
        nombre = "Lunes";
        break;
    case 2:
        nombre = "Martes";
        break;
    case 3:
        nombre = "Miercoles";
        break;
    case 4:
        nombre = "Jueves";
        break;
    case 5:
        nombre = "Viernes";
        break;
    case 6:
        nombre = "Sabado";
        break;
    default:
        nombre = "Nro ingresado incorrecto";
        break;
    }
}


/*
string nombreDia(int dia)
{
    string nombre;
    switch(dia)
    {
    case 0:
        nombre = "Domingo";
        break;
    case 1:
        nombre = "Lunes";
        break;
    case 2:
        nombre = "Martes";
        break;
    case 3:
        nombre = "Miercoles";
        break;
    case 4:
        nombre = "Jueves";
        break;
    case 5:
        nombre = "Viernes";
        break;
    case 6:
        nombre = "Sabado";
        break;
    default:
        nombre = "Nro ingresado incorrecto";
        break;
    }

    return nombre;
}
*/


int main()
{
    int nro;
    string diaTexto;

    cout << "Ingrese un numero de dia: ";
    cin >> nro;
    //cout<<"Dia texto: "<<diaTexto<<endl;
    //diaTexto = nombreDia(nro);
    nombreDia(nro, diaTexto);

    cout<<"El dia "<< nro+1 <<" es el: "<<diaTexto<<endl;
    return 0;
}





