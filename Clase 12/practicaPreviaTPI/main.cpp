#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

using namespace std;

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


