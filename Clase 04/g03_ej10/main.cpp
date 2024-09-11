#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int maximo, n, pos;
    bool primerIngreso = true; //Posible Solución 3

    for(int x=0; x<5; x++){
        cout << "Ingrese un número: ";
        cin >> n;

        if(primerIngreso){  // primerIngreso == true
            maximo = n;
            pos = x + 1;
            primerIngreso = false;
        }
        else if(n > maximo){
            maximo = n;
            pos = x + 1;
        }

        /*if(maximo == 0 || n > maximo){ //Posible Solucion 1
            maximo = n;
            pos = x + 1;
        }*/


        /*if(x == 0 || n > maximo){ // Posible Solución 2
            maximo = n;
            pos = x + 1;
        }*/

    }
    cout << endl;
    cout << "El Máximo fue: " << maximo << endl;
    cout << "Ingresó en la posición: " << pos << endl;

    return 0;
}
