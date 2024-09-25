#include <iostream>
using namespace std;

/*
18 Un supermercado tiene registrada la información de las ventas efectuadas
 durante el mes pasado entre todas las sucursales y se solicita un programa
 para obtener determinadas estadísticas.
 Los datos que se disponen por cada una de las ventas efectuadas son:
      Númerodesucursal(1 a30)
      Díadelaventa(1a31)
      Importedelaventa
      Tipodeventa(1=Particular, 2=Obra Social)
      FormadePago(1=Débito, 2=Crédito, 3=Contado)
 Los datos están agrupados (no ordenados) por número de sucursal y puede
 haber varias ventas para la misma sucursal, para el mismo día, etc. Puede haber
 sucursales sin ventas durante todo el mes o durante algunos días del mes, no
 habrá registros con importes iguales a 0. El final de todo el lote se indicará con
 un registro con número de sucursal igual a 0.

Se pide determinar e informar:
 a) Para cada una de las sucursales el porcentaje de recaudación total por sus
 ventas en crédito, débito y contado. Se informan 3 resultados por cada
 sucursal.

 b) Indicar en cual sucursal se hizo el menor porcentaje de recaudación total por
 ventas de Tipo Obra Social. Se informa 1 resultado al final.
 c) Para cada sucursal informar la primera y segunda venta individual de mayor
 importe. Se informan 2 resultados por sucursal.
 d) La venta de menorimporte de todas las ventas, indicando la sucursal y el día
 de la venta. Se informan 3 resultados al final.
 */

int main()
{
    //Declaracion de variables en general
    int numeroSucursal, numeroSucursalActual, diaVenta, tipoVenta, formaDePago;
    float importeVenta;
    //Variables punto A
    float acuCredito, acuDebito, acuContado, porcCredito, porcDebito, porcContado;

    cout<<"Ingrese numero sucursal: ";
    cin>>numeroSucursal;
    /*
    cout<<"Ingrese dia de la venta: ";
    cin>>diaVenta;
    cout<<"Ingrese importe de la venta: ";
    cin>>importeVenta;
    cout<<"Ingrese tipo de venta (1. Particular - 2. Obra social): ";
    cin>>tipoVenta;
    cout<<"Ingrese forma de pago (1. Debito - 2. Credito - 3. Contado): ";
    cin>>formaDePago;
    */

    while(numeroSucursal!=0)
    {
        numeroSucursalActual = numeroSucursal;

        acuDebito=0;
        acuCredito=0;
        acuContado=0;
        while(numeroSucursalActual == numeroSucursal)
        {
            cout<<"Ingrese dia de la venta: ";
            cin>>diaVenta;
            cout<<"Ingrese importe de la venta: ";
            cin>>importeVenta;
            cout<<"Ingrese tipo de venta (1. Particular - 2. Obra social): ";
            cin>>tipoVenta;
            cout<<"Ingrese forma de pago (1. Debito - 2. Credito - 3. Contado): ";
            cin>>formaDePago;
            //Punto A
            //total += importeVenta;
            switch(formaDePago)
            {
            case 1:
                acuDebito += importeVenta;
                break;
            case 2:
                acuCredito += importeVenta;
                break;
            case 3:
                acuContado += importeVenta;
                break;
            default:
                cout<<"Ingreso una forma de pago incorrecta."<<endl;
                break;
            }
            cout<<"----------------------------------------------------------------"<<endl;
            cout<<"Ingrese numero sucursal: ";
            cin>>numeroSucursal;
            /*
            cout<<"Ingrese dia de la venta: ";
            cin>>diaVenta;
            cout<<"Ingrese importe de la venta: ";
            cin>>importeVenta;
            cout<<"Ingrese tipo de venta (1. Particular - 2. Obra social): ";
            cin>>tipoVenta;
            cout<<"Ingrese forma de pago (1. Debito - 2. Credito - 3. Contado): ";
            cin>>formaDePago;
            */
        }
        //Punto A
        cout<<"--------------------------PUNTO A-------------------------------"<<endl;
        cout<<"---------------------Datos de sucursal "<<numeroSucursalActual<<"------------------------"<<endl;
        porcDebito = acuDebito * 100 / (acuDebito+acuCredito+acuContado);
        cout<<"El porcentaje de ventas en debito fue: "<<porcDebito<<endl;
        porcCredito = acuCredito * 100 / (acuDebito+acuCredito+acuContado);
        cout<<"El porcentaje de ventas en credito fue: "<<porcCredito<<endl;
        porcContado = acuContado * 100 / (acuDebito+acuCredito+acuContado);
        cout<<"El porcentaje de ventas en contado fue: "<<porcContado<<endl;
        if (numeroSucursal != 0)
        {
            cout<<endl<<"Continue ingresando la informacion de la sucursal "<<numeroSucursal<<endl;
        }
        else
        {
            cout<<"Finalizo el programa"<<endl;
        }

    }

    return 0;
}
