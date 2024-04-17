/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Calcular la nota media de los estudiantes de una clase considerando 
  "n"número de estudiantes y "c" número de notas de cada estudiante .

  Version: 1.0
*/

#include <windows.h>
#include <iostream>
using namespace std;

void calcularMedia(int n, int c, double sumaTotal);

void ejercicioOnce(){
    SetConsoleOutputCP(CP_UTF8);
    int n=0, c=0;
    cout << "Ingrese el número de estudiantes: ";
    cin >> n;
    cout << "Ingrese el número de notas por estudiante: ";
    cin >> c;

    double sumaTotal = 0;

    calcularMedia(n, c, sumaTotal);
}

void calcularMedia(int n, int c, double sumaTotal){
    for (int i = 0; i < n; ++i) {
        double sumaNotas = 0;
        cout << "Estudiante " << i + 1 << ":" << endl;
        for (int j = 0; j < c; ++j) {
            double nota;
            cout << "Ingrese la nota " << j + 1 << ": ";
            cin >> nota;
            sumaNotas += nota;
        }
        double notaMedia = sumaNotas / c;
        cout << "Nota media del estudiante " << i + 1 << ": " << notaMedia << endl;
        sumaTotal += notaMedia;
    }

    double notaMediaClase = sumaTotal / n;
    cout << "\nLa nota media de la clase es: " << notaMediaClase << endl;
}