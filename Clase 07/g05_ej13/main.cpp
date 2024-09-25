#include <iostream>

using namespace std;

/*
    13) Se dispone de una lista de 10 grupos de números y cada uno de los grupos
    estará compuesto por 5 números. Se pide determinar e informar:
    a) Para cada uno de los 10 grupos el promedio de los números que lo
    componen. Se informa un resultado para cada uno de los 10 grupos.
    b) Determinar e informar el valor mínimo de todos los grupos, indicando en cuál
    grupo se encontró y su posición relativa en el mismo. Se informan 2
    resultados al final de todo.
    c) Indicar cuál de los 10 grupos tiene el mayor de los promedios y cuál es ese
    valor promedio. Se informan 2 resultados al final de todo.
*/

int main()
{
    int n;
    int acum;
    float promedio;

    int minimo;
    int grupo, posicion;

    bool band = false;
    float promedioMayor;
    int grupoMayor;

    for(int x=0; x < 10; x++){ // CICLO EXTERNO

        acum = 0;
        cout << "---------------------------" << endl;
        cout << "GRUPO: " << x+1 << endl;
        cout << "---------------------------" << endl;


        for(int y=0; y < 5; y++){ // CICLO INTERNO - DONDE CARGAMOS LOS 5 NUMEROS
            cout << "---------------------------" << endl;
            cout << "Ingrese un numero:";
            cin >> n;

            // Punto A
            acum += n;


            // Punto B
            if(x == 0 && y == 0){
                minimo = n;
                grupo=x+1;
                posicion=y+1;
            }
            else if(n<minimo){
                minimo=n;
                grupo=x+1;
                posicion=y+1;
            }

        }
        // MOSTRAR PUNTO A
        promedio = acum / 5.0;
        cout << "---------------------------" << endl;
        cout << "Promedio del Grupo " << x + 1 << " es de: " << promedio << endl;
        cout << "---------------------------" << endl;

        // PUNTO C
        if(!band==true){
            promedioMayor = promedio;
            grupoMayor = x+1;
            band = true;
        }
        else if(promedio > promedioMayor){
            promedioMayor = promedio;
            grupoMayor = x+1;
        }

    }

    // MOSTRAR PUNTO B Y C
    cout << "El Minimo de todos fue el " << minimo << " se encontro en el Grupo " << grupo << " en la Posicion " << posicion << endl;

    cout << "El Promedio Mayor fue de " << promedioMayor << " y fue en el Grupo " << grupoMayor << endl;

    return 0;
}
