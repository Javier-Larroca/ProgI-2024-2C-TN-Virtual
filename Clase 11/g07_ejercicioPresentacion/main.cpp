#include <iostream>
using namespace std;

/*

    Se requiere un programa que almacene la edad de 5 personas y luego muestre por pantalla
    aquellas edades que sean mayor al promedio.

*/

int main()
{
    //int n;
    int const CANT_EDADES = 5;
    int edades[CANT_EDADES];
    int suma = 0;
    float promedio;

    for(int x=0; x<CANT_EDADES; x++)
    {
        cout<<"Ingrese la "<<x+1<<" edad: ";
        //cin>>n;
        //edades[x] = n;
        cin>>edades[x];
    }

    for(int x=0; x<CANT_EDADES; x++)
    {
        suma += edades[x];
    }

    promedio = suma / CANT_EDADES;

    cout<<endl<<"Edades mayores al promedio:"<<endl<<endl;
    for(int x=0; x<CANT_EDADES; x++)
    {
        if(edades[x]>promedio)
        {
            cout<<"Edad: "<<edades[x]<<endl;
        }
    }

    return 0;
}
