#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

// ENCABEZADO O PROTOTIPO
void cargarVector(int v[], int TAM);
int contarRepetidos(int v[], int TAM, int n);

//Funcion Ej. 16
bool hayRepetidos(int v[], int TAM);

//Funcion Ej. 19
int cargaRepetidos(int v1[], int v2[], int v3[], int TAM);
void mostrarVector(int v[], int TAM);

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

bool hayRepetidos(int v[], int TAM){

    int e, c;

    for(int i = 0; i < TAM; i++){
        e = v[i];

        c = contarRepetidos(v, TAM, e);

        if(c > 1){
            return true;
        }
    }

    return false;
}

int cargaRepetidos(int v1[], int v2[], int v3[], int TAM){
    int indice = 0;
    int elemento;
    int cant;

    for(int i = 0; i < TAM; i++){
        elemento = v1[i];

        cant = contarRepetidos(v2, TAM, elemento);

        if(cant == 1){
            v3[indice++] = elemento;
            //indice++;
        }
    }

    return indice;
}

void mostrarVector(int v[], int TAM){

    cout << "- Vector 3 -" << endl;
    for(int i = 0; i < TAM; i++){
        cout << v[i] << endl;
    }
}

#endif // FUNCIONES_H_INCLUDED
