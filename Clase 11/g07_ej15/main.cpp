#include <iostream>
using namespace std;

/*
 Dada una lista de 5 números, cargarlos en un vector. Armar luego otro vector
 de 9 elementos donde por cada 2 elementos del vector original intercale el
 promedio de ellos.
 Por ejemplo: [2, 4, 6, 8, 10], el vector queda: [2, 3, 4, 5, 6, 7, 8, 9, 10].
 */

int main()
{
    //int vecOriginal[5];
    int prom;
    int vecOriginal[] = {2, 4, 6, 8, 10};
    int vecSecundario[9];

    /*
    for(int i = 0; i < 5; i++)
    {

            cout << "Ingrese un numero: ";
            cin >> vecOriginal[i];
    }
    */

    int indiceSecundario = 0;
    for (int i = 0; i < 4; i++)
    {
        cout<<"I :"<<i<<endl;
        vecSecundario[indiceSecundario] = vecOriginal[i];

        cout<<"Indice secundario :"<<indiceSecundario<<endl;
        indiceSecundario++;

        prom = (vecOriginal[i] + vecOriginal[i+1]) / 2;
        cout<<"Indice secundario :"<<indiceSecundario<<endl;
        vecSecundario[indiceSecundario] = prom;
        indiceSecundario++;
    }
    cout<<"Indice secundario :"<<indiceSecundario<<endl;
    vecSecundario[indiceSecundario]=vecOriginal[4];

    cout<<"Secundario:"<<endl;

    cout<<"[";
    for(int i = 0; i < 9; i++)
    {
        cout<<vecSecundario[i]<<", ";
    }
    cout<<"]";

}
