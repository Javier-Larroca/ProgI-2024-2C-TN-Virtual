#include <iostream>

using namespace std;

/*
    27) Una estación meteorológica registró una muestra climática de los últimos 15
    días. Por cada día registró:
    - Número de día (entero)
    - Temperatura (float)
    - Milímetros de lluvia (float)
    - Visibilidad en km (float)
    Hay un registro por cada día. La información se encuentra ordenada por día. Se
    pide calcular e informar:
    - El número del día que se haya registrado la temperatura máxima.
    - La amplitud térmica de todo el período.
    - La cantidad de días con neblina.
    - Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
    - Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días.
    De lo contrario mostrar "Quincena seca".
    NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la
    temperatura mínima.
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

        cout << "Ingrese Día: ";
        cin >> dia;
        cout << "Ingrese Temperatura: ";
        cin >> temp;
        cout << "Ingrese mm de Lluvia: ";
        cin >> mm;
        cout << "Ingrese Visibilidad en KM: ";
        cin >> vis;
        cout << "---------------------------" << endl;
        cout << endl;

        // a) El número del día que se haya registrado la temperatura máxima.
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
    cout << "Temperatura Máxima: " << maximo << endl;
    cout << "Día: " << diaMaximo << endl;

    int amplitud = maximo - minimo;
    cout << endl << "- Punto B -" << endl;
    cout << "Amplitud termica: " << amplitud << endl;

    cout << endl << "- Punto C -" << endl;
    cout << "Días con Neblina: " << diasNeblina << endl;

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
