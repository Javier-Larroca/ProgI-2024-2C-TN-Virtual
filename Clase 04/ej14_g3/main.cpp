#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int primerImpar, segundoImpar, anteUltimoImpar, ultimoImpar;
    primerImpar = segundoImpar = anteUltimoImpar = ultimoImpar = 0;
    int contImpar = 0;
    int n;

    for(int x=0; x<7; x++){
        cout << "Ingrese número: ";
        cin >> n;

        if(n % 2 != 0){
            contImpar++;
            if(contImpar==1){
                primerImpar = n;
            }
            else if(contImpar==2){
                segundoImpar = n;
            }

           anteUltimoImpar = ultimoImpar;
           ultimoImpar = n;

        }
    }

    cout << endl;

    if(contImpar>=1){
        cout << "Primer Impar: " << primerImpar << endl;
    }
    else{
        cout << "No hubieron impares" << endl;
    }

    if(contImpar>=2)
        cout << "Segundo Impar: " << segundoImpar << endl;

    if(contImpar>=2)
        cout << "Anteúltimo Impar: " << anteUltimoImpar << endl;

    if(contImpar>=1)
        cout << "Último Impar: " << ultimoImpar << endl;
    return 0;
}
