#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish"); //Seteo el lenguaje de la consola.
    srand (time(NULL));

    int opc, rankingPuntos[7]= {};
    string rankingNombres[7]= {};
    bool juego = true;

    while(juego)
    {
        system("cls");
        cout << " 88\"\"Yb  dP\"Yb  88b 88 8888P  dP\"Yb" << endl;
        cout << " 88__dP dP   Yb 88Yb88   dP  dP   Yb" << endl;
        cout << " 88\"\"Yb Yb   dP 88 Y88  dP   Yb   dP" << endl;
        cout << " 88oodP  YbodP  88  Y8 d8888  YbodP" << endl;

        cout << "------------------------------------" << endl;
        cout << "          1 - JUGAR" << endl;
        cout << "          2 - ESTADISTICAS" << endl;
        cout << "          3 - CREDITOS" << endl;
        cout << "------------------------------------" << endl;
        cout << "          0 - SALIR" << endl;
        cout<<endl<<"          Opci�n: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            jugar(rankingPuntos, rankingNombres);
            break;
        case 2:
            mostrarEstadisticas(rankingNombres, rankingPuntos);
            break;
        case 3:
            creditos();
            break;
        case 0:
            juego = finalizarJuego();
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }
    return 0;
}
