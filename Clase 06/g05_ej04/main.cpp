#include <iostream>
using namespace std;

/*
Dada una lista de números compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:
     a) Para cada uno de los grupos el máximo de los números pares y el máximo de
     los números impares. Se informan 2 resultados por cada grupo.
     b) Para cada uno de los grupos el porcentaje de números negativos y números
     positivos. Se informan 2 resultados por cada grupo.
     c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1
     resultado al final
 */

int main()
{
    int num;
    //Punto A
    int maximoPar, maximoImpar;
    bool banderaNoHayMaximoPar;
    //Punto C
    int contadorNumerosPositivos = 0;

    for(int x=0; x<3; x++)
    {
        cout<<"Ingrese un numero del grupo "<<x+1<<" : ";
        cin>>num;
        maximoPar = 0;
        //banderaNoHayMaximoPar = true;
        maximoImpar = 0;
        while(num!=0)
        {
            //Punto A
            if(num%2==0)
            {
                if(maximoPar==0)
                {
                    maximoPar=num;
                    //banderaNoHayMaximoPar=false;
                }
                else
                {
                    if(num>maximoPar)
                    {
                        maximoPar=num;
                    }
                }
            }
            else
            {
                if(maximoImpar==0)
                {
                    maximoImpar=num;
                }
                else
                {
                    if(num>maximoImpar)
                    {
                        maximoImpar=num;
                    }
                }
            }

            //Punto C
            if(num>0)
            {
                contadorNumerosPositivos++;
            }

            cout<<"Ingrese un numero del grupo "<<x+1<<" : ";
            cin>>num;
        }
        //Punto A
        cout<<endl<<"El maximo par del grupo "<<x+1<<" fue: "<<maximoPar<<endl;
        cout<<"El maximo impar del grupo "<<x+1<<" fue: "<<maximoImpar<<endl<<endl;
    }
    //Punto C
    cout<<endl<<"La cantidad total de numeros positivos fue: "<<contadorNumerosPositivos<<endl;

    return 0;
}
