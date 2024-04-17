/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Se necesitan 20 ladrillos para cubrir un área de 1m2; suponiendo que hay que cubrir un
  área de X metros * Y metros; construya un algoritmo que calcule y muestre cuántos ladrillos se necesitarían en
  total para cubrir toda el área.

  Version: 1.0
*/

#include <windows.h>
#include <iostream>
using namespace std;

int LADRILLOS = 2;

double area(double ancho, double largo);
void ladrillosNecesarios(double area);

void ejercicioDos(){
    SetConsoleOutputCP(CP_UTF8);
    double ancho = 0.0, largo = 0.0;

    cout<<"-----------------------------------------"<<endl;
    cout<<"Bienvenido al Ejercicio 2"<<endl;

    cout<<"Dame el ancho del área a cubrir en Metros"<<endl;
    cin>>ancho;


    cout<<"Dame el largo del área a cubrir en Metros"<<endl;
    cin>>largo;
    
    double totalArea = area(ancho, largo);

    ladrillosNecesarios(totalArea);

}

double area(double ancho, double largo){
    return ancho * largo;
}

void ladrillosNecesarios(double area){
    double ladrillos = area * LADRILLOS;
    cout << "Ladrillos necesarios: " << ladrillos << endl;
}