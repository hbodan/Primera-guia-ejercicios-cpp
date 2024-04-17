/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Una tienda de artículos varios solicita crear un algoritmo para facturar. 
  En la venta se solicita al usuario la cantidad a comprar de cada producto (máximo 3 productos),
  si el subtotal sobrepasa los 3000, se aplicará un descuento del 10%, finalmente se calcula el
  impuesto al valor agregado (IVA – 15%). Se requiere imprimir la factura con el detalle de la
  venta, descuento, impuesto y total a pagar.

  Version: 1.0
*/

#include <windows.h>
#include <iomanip>
#include <iostream>
using namespace std;

void calcularPrecio(int* cantidades, double* precios, const char* const* nombres);
void imprimirRecibo(int* cantidades, double* precios, const char* const* nombres, double subtotal, double descuento, double iva, double total);

void ejercicioCinco(){
    SetConsoleOutputCP(CP_UTF8);

    double precios[3] = {};
    const char* const nombres[3] = {"Producto 1", "Producto 2", "Producto 3"};
    int cantidades[3] = {};
    

    for (int i = 0; i < 3; ++i) {
        cout << "Cantidad de " << nombres[i] << ": ";
        cin >> cantidades[i];
        cout << "Precio de " << nombres[i] << ": ";
        cin >> precios[i];
    }

    calcularPrecio(cantidades, precios, nombres);
}

void calcularPrecio(int* cantidades, double* precios, const char* const* nombres){
    double subtotal = 0.0,
    descuento = 0.0;

    for (int i = 0; i < 3; ++i) {
        subtotal += (precios[i] * cantidades[i]);
    }

    
    if (subtotal > 3000) {
        descuento = subtotal * 0.10;
    }

    double iva = subtotal * 0.15;
    double total = subtotal - descuento + iva;

    imprimirRecibo(cantidades, precios, nombres, subtotal, descuento, iva, total);
}

void imprimirRecibo(int* cantidades, double* precios, const char* const* nombres, double subtotal, double descuento, double iva, double total){
    cout << fixed << setprecision(2);
    cout << "\n************ FACTURA ************\n";
    for (int i = 0; i < 3; ++i) {
        cout << nombres[i] << ": " << cantidades[i] << " x C$" << precios[i] << " = C$" << precios[i] * cantidades[i] << endl;
    }

    cout << "------------------------------\n";
    cout << "Subtotal: C$" << subtotal << endl;
    cout << "Descuento: C$" << descuento << endl;
    cout << "IVA (15%): C$" << iva << endl;
    cout << "------------------------------\n";
    cout << "Total a pagar: C$" << total << endl;
}