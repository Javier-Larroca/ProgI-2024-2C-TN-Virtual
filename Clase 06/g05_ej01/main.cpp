#include <iostream>
using namespace std;

/*
 Hacer un programa para ingresar una lista de 10 números y luego informar
 cuántos de los números ingresados son perfectos. Se informa 1 resultado al
 final.
 */

int main()
{
    int num;
    int acumDivisores = 0;
    int contNumerosPerfecto = 0;

    for(int x=0; x<10; x++)
    {
        cout<<"Ingrese el numero "<<x+1<<" :";
        cin>>num;
        acumDivisores = 0;

        for(int i=1; i<num; i++)
        {
            //cout<<"i :"<<i<<endl;
            if(num%i==0)
            {
                //cout<<"El "<<i<<" es divisor."<<endl;
                acumDivisores += i;
            }
        }
        //cout<<"Acumulador: "<<acumDivisores<<endl;
        if(acumDivisores == num)
        {
            contNumerosPerfecto++;
            //cout<<"El numero "<<num<<" es perfecto"<<endl;
        }
    }

    cout<<endl<<"La cantidad de numeros perfectos fue: "<<contNumerosPerfecto<<endl;
    return 0;
}
