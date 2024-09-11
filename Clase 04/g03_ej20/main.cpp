#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int n;
    int contDivisores = 0;

    cout << "Ingrese el número: ";
    cin >> n;

    for(int x = 1; x <= n; x++){
        if(n % x == 0){
            contDivisores++;
        }
    }

    if(contDivisores==2){
        cout << "El número " << n << " es Primo." << endl;
    }
    else{
        cout << "El número " << n << " no es Primo." << endl;
    }


    return 0;
}
