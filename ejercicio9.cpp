/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Dados 10 números enteros, visualizar la suma de los pares de la lista,
  cuántos números pares existen y cuál es el promedio de los números impares.

  Version: 1.0
*/

#include <windows.h>
#include <iomanip>
#include <iostream>
using namespace std;

void ejercicioNueve(){
    SetConsoleOutputCP(CP_UTF8);
    cout << fixed << setprecision(2);

    int numeros[10] = {};
    int sumaPares = 0, numPares = 0;
    double sumaImpares = 0.0, numImpares = 0.0;

    for(int i=0; i<10; i++){
        cout<<"Cuál te gustaría que fuese el número "<<i<<endl;
        cin>>numeros[i];
    }


    for(int i=0; i<10; i++){
        if(numeros[i] %2 == 0){
            numPares += 1;
            sumaPares += numeros[i];
        }else{
            numImpares += 1;
            sumaImpares += numeros[i];
        }
    
    }
    double promedioImpares = sumaImpares/numImpares;

    cout<<"Suma de Números Pares: "<<sumaPares<<endl;
    cout<<"Cantidad de Números Pares: "<<numPares<<endl;
    cout<<"Promedio de Números Impares: "<<promedioImpares<<endl;
}