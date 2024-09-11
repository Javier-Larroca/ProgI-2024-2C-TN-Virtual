#include <iostream>

using namespace std;

/*
    27) Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15
    d�as. Por cada d�a registr�:
    - N�mero de d�a (entero)
    - Temperatura (float)
    - Mil�metros de lluvia (float)
    - Visibilidad en km (float)
    Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se
    pide calcular e informar:
    - El n�mero del d�a que se haya registrado la temperatura m�xima.
    - La amplitud t�rmica de todo el per�odo.
    - La cantidad de d�as con neblina.
    - Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia.
    - Mostrar "Quincena h�meda" si llovi� en al menos un tercio de los d�as.
    De lo contrario mostrar "Quincena seca".
    NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
    temperatura m�nima.
    NOTA: Se considera neblina a una visibilidad menor a 2 km.
*/

int main()
{
    setlocale(LC_ALL, "spanish");

    int dia;
    float temp, mm, vis;

    //Punto A
    int maximo, diaMaximo;
    bool band = false;

    //Punto B
    int minimo;

    //Punto C
    int diasNeblina = 0;

    //Punto D
    int diasLluvia = 0, diasSinLLuvia = 0;

    for(int x = 0; x < 3; x++){

        cout << "Ingrese D�a: ";
        cin >> dia;
        cout << "Ingrese Temperatura: ";
        cin >> temp;
        cout << "Ingrese mm de Lluvia: ";
        cin >> mm;
        cout << "Ingrese Visibilidad en KM: ";
        cin >> vis;
        cout << "---------------------------" << endl;
        cout << endl;

        // a) El n�mero del d�a que se haya registrado la temperatura m�xima.
        /*if(x==0){
            maximo = temp;
            diaMaximo = dia;
        }
        else if(temp > maximo){
            maximo = temp;
            diaMaximo = dia;
        }*/

        if(!band){
            maximo = temp;
            diaMaximo = dia;
            band = true;

            minimo = temp; //Punto B
        }
        else if(temp > maximo){
            maximo = temp;
            diaMaximo = dia;
        }
        else if(temp < minimo){
            minimo = temp;
        }

        //Punto C
        if (vis < 2){
            diasNeblina++;
        }

        if (mm > 0){
            diasLluvia++;
        }
        else{
            diasSinLLuvia++;
        }

    }

    cout << endl << "- Punto A -" << endl;
    cout << "Temperatura M�xima: " << maximo << endl;
    cout << "D�a: " << diaMaximo << endl;

    int amplitud = maximo - minimo;
    cout << endl << "- Punto B -" << endl;
    cout << "Amplitud termica: " << amplitud << endl;

    cout << endl << "- Punto C -" << endl;
    cout << "D�as con Neblina: " << diasNeblina << endl;

    cout << endl << "- Punto D -" << endl;
    if(diasLluvia>diasSinLLuvia)
        cout << "Quincena Lluviosa!" << endl;

    cout << endl << "- Punto E -" << endl;
    if(diasLluvia > (diasLluvia+diasSinLLuvia)/3){
        cout << "Quincena Humeda!" << endl;
    }
    else{
        cout << "Quincena Seca!" << endl;
    }


    return 0;
}
