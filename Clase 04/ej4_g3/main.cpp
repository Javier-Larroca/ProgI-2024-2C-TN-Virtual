#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish"); // Para admita los acentos y las �

    int n;
    int cont = 1;
    //int x;

    cout << "Ingrese un n�mero: ";
    cin >> n;

    for(int x=1; x<=n; x = x+3){
        cout << "Valor de Cont: " << cont << endl;
        cout << "Valor de X: " << x << endl;
        cont++;
    }

    return 0;
}
