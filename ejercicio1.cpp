/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Dado el nombre de una persona, el apellido, la edad en años y su peso en libras; calcule
  y muestre la edad en número de días, el peso en kilogramos, y el apellido seguido del nombre. 

  Version: 1.0
*/

#include <windows.h>
#include <iostream>
using namespace std;

double FACTORKG = 2.2046;
int DIASTOTALES = 365;

void nombreApellido(char* nombre, char* apellido);
void edadEnDias(int edad);
void pesoEnKg(double peso);

void ejercicioUno(){
    SetConsoleOutputCP(CP_UTF8);
    char nombre[20] = "";
    char apellido[20] = "";
    int edad = 0;
    double peso = 0.0;

    cout<<"-----------------------------------------"<<endl;
    cout<<"Bienvenido al Ejercicio 1"<<endl;

    cout<<"Dame tu nombre"<<endl;
    cin>>nombre;

    cout<<"Dame tu apellido"<<endl;
    cin>>apellido;

    cout<<"Dame tu edad"<<endl;
    cin>>edad;

    cout<<"Dame tu peso en Libras"<<endl;
    cin>>peso;

    nombreApellido(nombre, apellido);
    edadEnDias(edad);
    pesoEnKg(peso);
}

void nombreApellido(char* nombre, char* apellido){
    cout<<"Nombre: "<<apellido<<" "<<nombre<<endl;
}

void edadEnDias(int edad){
    int diasTotales = edad * DIASTOTALES;
    cout<<"Edad en días: "<<diasTotales<<endl;
}

void pesoEnKg(double peso){
    double pesoTotal = peso / FACTORKG;
    cout<<"Peso en KG: "<<pesoTotal<<endl;
}