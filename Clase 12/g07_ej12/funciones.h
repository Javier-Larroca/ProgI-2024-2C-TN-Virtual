#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

// ENCABEZADO O PROTOTIPO
void cargarVector(int v[], int TAM);
int contarRepetidos(int v[], int TAM, int n);

// IMPLEMENTACION
void cargarVector(int v[], int TAM){
    for(int i = 0; i < TAM; i++){
        cout << "INGRESE NUMERO: ";
        cin >> v[i];
    }
}

int contarRepetidos(int v[], int TAM, int n){

    int cont = 0;

    for(int i = 0; i < TAM; i++){
        if(n == v[i]){
            cont++;
        }
    }

    return cont;
}

#endif // FUNCIONES_H_INCLUDED
