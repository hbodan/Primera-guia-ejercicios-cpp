/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Escribir un algoritmo para calcular el máximo común divisor
  de dos números enteros (mcd) por el que la división sea exacta. El último divisor es
  el mcd.

  Dividir el mayor de los dos enteros positivos por el más pequeño. A continuación, dividir
  el número más pequeño (divisor) por el resto de la división. Continuar el proceso de dividir
  el último divisor por el último resto, hasta que la división sea exacta. El último divisor es el
  mcd.

  Version: 1.0
*/

#include <windows.h>
#include <iostream>
using namespace std;

int calcularMCD(int a, int b);

void ejercicioOcho(){
    SetConsoleOutputCP(CP_UTF8);
    int num1 = 0 , num2 = 0, mcd = 0;
    cout << "Ingrese el primer número entero: "<<endl;
    cin >> num1;
    cout << "Ingrese el segundo número entero: "<<endl;
    cin >> num2;

    num1 = abs(num1);
    num2 = abs(num2);

    if(num1>num2){
        mcd = calcularMCD(num1, num2);
    }else{
        mcd = calcularMCD(num2, num1);
    }

    cout<<"El máximo común divisor (MCD) de "<<num1<<" y "<<num2<<" es: "<<mcd<<endl;
}


int calcularMCD(int mayor, int menor) {
    int temp = 0;
    while (menor != 0) {
        temp = menor;
        menor = mayor % menor;
        mayor = temp;
    }
    
    return mayor;
}