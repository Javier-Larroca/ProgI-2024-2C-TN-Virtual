#include <iostream>
#include <cstdlib>
#include <ctime>
//#include "funciones.h"

using namespace std;

int encontrarElNumero(); //Función que se ocupara de que el usuario acierte el numero, devolviendonos la cantidad de intentos.
void mostrarIntentos(int intentos[]); //Función que nos indicara el puntaje de cada jugador.
void anunciarGanador(int intentos[], string nombres[]); //Función que anuncia cual fue el jugador ganador.
void cargarNombres(string nombres[]); //Función que se ocupara de solicitar los nombres a ambos jugadores.
void dibujarPresentacion(); //Función que nos dibujara la presentación del juego.

int main()
{
    setlocale(LC_ALL, "Spanish"); //Seteo el lenguaje de la consola.
    srand (time(NULL)); //Planto la semilla del random

    int intentosPorjugador[2]; //Vector donde se guardaran la cantidad de intentos de cada jugador.
    string nombresDeJugadores[2]; //Vector donde se guardaran los nombres de los jugadores.

    dibujarPresentacion();

    cout<<endl<<"      ¡Bienvenidos al juego!"<<endl<<endl;

    cargarNombres(nombresDeJugadores);

    for(int x=0; x<2; x++)
    {
        system("cls"); // Limpio la pantalla

        cout<<"------- TURNO JUGADOR N° "<<x+1<<" -------"<<endl;
        cout<<"    --------- "<<nombresDeJugadores[x]<<" --------- "<<endl<<endl;
        intentosPorjugador[x] = encontrarElNumero(); //Llamo a la función para que el jugador comience el juego, y guardo lo que me retorno en el vector según el indice del for.

        system("pause"); // Pauso el juego
    }

    system("cls"); // Limpio la pantalla

    mostrarIntentos(intentosPorjugador); //Llamo a la función de mostrar intentos para que nos muestre los intentos de cada jugador.

    dibujarPresentacion();
    anunciarGanador(intentosPorjugador, nombresDeJugadores); //Llamo a la función que anunciara cual es el jugador ganador.

    return 0;
}

void dibujarPresentacion()
{
    cout<<"   db    8888b.  88 Yb    dP 88 88b 88    db    888888  dP'Yb  88''Yb"<<endl;
    cout<<"  dPYb    8I  Yb 88  Yb  dP  88 88Yb88   dPYb     88   dP   Yb 88__dP"<<endl;
    cout<<" dP__Yb   8I  dY 88   YbdP   88 88 Y88  dP__Yb    88   Yb   dP 88'Yb "<<endl;
    cout<<"dP''''Yb 8888Y'  88    YP    88 88  Y8 dP''''Yb   88    YbodP  88  Yb"<<endl;
}

void cargarNombres(string nombres[])
{
    char confirmar='n';
    while(toupper(confirmar)!='S')
    {
        cout<<endl;
        for (int x=0; x<2; x++ )
        {
            cout<<"Ingrese el nombre el jugador n° "<<x+1<<": ";
            cin>>nombres[x];
        }
        cout<<endl<<"Desea confirmar los nombres ingresados (S/N): ";
        cin>>confirmar;
    }
}


int encontrarElNumero()
{
    int numero;
    int numeroEsperado = rand() % 1000 +1; // Asigno un numero aleatorio entre 1000 y 1.
    int intentos = 1;

    //cout<<" -- "<<numeroEsperado << " Este es el numero esperado. --"<<endl;
    cout<<"Elija un numero: ";
    cin>>numero;

    while(numero != numeroEsperado) //Mientras el numero que ingrese el usuario sea distinto al numero esperado seguira iterando.
    {
        if (numero > numeroEsperado)
        {
            cout<<"¡Te pasaste, un poco menos!"<<endl<<endl;
        }
        else
        {
            cout<<"¡Te falta un poco, es mas grande!"<<endl<<endl;
        }
        cout<<"  Elija un numero: ";
        cin>>numero;
        intentos ++; //Sumo un nuevo intento por cada vez que ingresa un numero.
    }

    cout<<endl<<"  ¡¡¡¡ Acertaste felicitaciones !!!!"<<endl; //Si salio del ciclo while es porque acerto el numero.
    cout<<"    --- Cantidad de intentos: "<<intentos<<" --- "<<endl<<endl;

    return intentos;
}

void mostrarIntentos(int intentos[])
{
    cout<<"-----------------------------------"<<endl;
    for (int x=0; x<2 ; x++ )
    {
        cout<<"      Intentos jugador N° "<<x+1<<": "<<intentos[x]<<endl;
    }
    cout<<"-----------------------------------"<<endl;
}

void anunciarGanador(int intentos[], string nombres[])
{
    if(intentos[0]==intentos[1]) //Evaluo si hubo un empate
    {
        cout<<endl<<"   ¡¡ Empate, ganaron o perdieron ambos !!"<<endl;
    }
    else
    {
        if(intentos[0]<intentos[1]) //Evaluo cual de los dos jugadores fue el ganador.
        {
            cout<<endl<<"     ¡¡ "<<nombres[0]<<" fue el ganador !!"<<endl;
        }
        else
        {
            cout<<endl<<"     ¡¡ "<<nombres[1]<<" fue el ganador !!"<<endl;
        }
    }
}


