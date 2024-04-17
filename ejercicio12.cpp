/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: A partir de los siguientes datos de un paciente: fecha de
  nacimiento, altura y peso, determine la edad y el índice de masa corporal del 
  paciente.

  Version: 1.0
*/

#include <windows.h>
#include <ctime>
#include <iostream>
using namespace std;

void ejercicioDoce(){
    SetConsoleOutputCP(CP_UTF8);
    int anioNacimiento = 0;
    cout << "Ingrese el año de nacimiento): "<<endl;
    cin >> anioNacimiento;

    time_t tiempoActual = time(nullptr);
    tm* tiempoLocal = localtime(&tiempoActual);
    int anioActual = tiempoLocal->tm_year + 1900;


    int edad = anioActual - anioNacimiento;
   

    double altura = 0.0, peso = 0.0;
    cout << "Ingrese la altura del paciente (en metros): "<<endl;
    cin >> altura;
    cout << "Ingrese el peso del paciente (en kilogramos): "<<endl;
    cin >> peso;

    double imc = peso / (altura * altura);

    cout << "\nEl paciente tiene " << edad << " años de edad." << endl;
    cout << "El índice de masa corporal (IMC) del paciente es: " << imc << endl;
}