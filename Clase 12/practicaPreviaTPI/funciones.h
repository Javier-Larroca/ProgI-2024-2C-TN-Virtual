#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

int encontrarElNumero(); //Función que se ocupara de que el usuario acierte el numero, devolviendonos la cantidad de intentos.
void mostrarIntentos(int intentos[]); //Función que nos indicara el puntaje de cada jugador.
void anunciarGanador(int intentos[], string nombres[]); //Función que anuncia cual fue el jugador ganador.
void cargarNombres(string nombres[]); //Función que se ocupara de solicitar los nombres a ambos jugadores.
void dibujarPresentacion(); //Función que nos dibujara la presentación del juego.


#endif // FUNCIONES_H_INCLUDED
