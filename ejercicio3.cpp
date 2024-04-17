/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Usted saca un crédito en el banco a 5 años con un interés anual del 3%. Conocido el
  monto inicial del préstamo, calcule y muestre cuánto debe pagar al cabo de los 5 años. (Ejercicio automatizado
  para ocupar otros valores)

  Version: 1.0
*/

#include <math.h>
#include <windows.h>
#include <iostream>
using namespace std;


void encontrarPagoTotal(double montoInicial, double porcentajeInteresAnual, int anios);

void ejercicioTres() {
    SetConsoleOutputCP(CP_UTF8);
    double montoInicial = 0.0, porcentajeInteresAnual = 0.0;
    int anios = 0;

    cout<<"-----------------------------------------"<<endl;
    cout<<"Bienvenido al Ejercicio 3"<<endl;

    cout<<"Dame el monto inicial"<<endl;
    cin>>montoInicial;

    cout<<"Dame el porcentaje de interés anual"<<endl;
    cin>>porcentajeInteresAnual;

    cout<<"Dame los años"<<endl;
    cin>>anios;

    encontrarPagoTotal(montoInicial, porcentajeInteresAnual, anios);
}

void encontrarPagoTotal(double montoInicial, double porcentajeInteresAnual, int anios){
    double interesAnual = porcentajeInteresAnual / 100;
    double factorCrecimiento = 1 + interesAnual;
    double totalPago = montoInicial * pow(factorCrecimiento, anios);

    cout<<"Total a pagar al cabo de "<<anios<<" años: "<<totalPago<<endl;
}