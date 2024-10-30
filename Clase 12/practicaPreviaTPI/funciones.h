#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

int encontrarElNumero(); //Funci�n que se ocupara de que el usuario acierte el numero, devolviendonos la cantidad de intentos.
void mostrarIntentos(int intentos[]); //Funci�n que nos indicara el puntaje de cada jugador.
void anunciarGanador(int intentos[], string nombres[]); //Funci�n que anuncia cual fue el jugador ganador.
void cargarNombres(string nombres[]); //Funci�n que se ocupara de solicitar los nombres a ambos jugadores.
void dibujarPresentacion(); //Funci�n que nos dibujara la presentaci�n del juego.


#endif // FUNCIONES_H_INCLUDED
