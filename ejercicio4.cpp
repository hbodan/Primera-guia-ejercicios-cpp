/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Calcule el área de las siguientes figuras geométricas: círculo, 
  elipse, triángulo, cuadrado y rectángulo.

  Version: 1.0
*/


#include <windows.h>
#include <math.h>
#include <iostream>
using namespace std;

double PI = 3.1416;

void selectorFigura(int opcionGeometrica);
void calcularCirculo(void);
void calcularElipse(void);
void calcularTriangulo(void);
void calcularCuadrado(void);
void calcularCuadrado(void);
void calcularRectangulo(void);

void ejercicioCuatro(){
    SetConsoleOutputCP(CP_UTF8);
    int opcionGeometrica = 0;

    do{
        cout<<"-----------------------------------------"<<endl;
        cout<<"Bienvenido al Ejercicio 4"<<endl;
        cout<<"A cuál figura le desea calcular el área?"<<endl;
        cout<<"1. Círculo"<<endl;
        cout<<"2. Elipse"<<endl;
        cout<<"3. Triángulo"<<endl;
        cout<<"4. Cuadrado"<<endl;
        cout<<"5. Rectángulo"<<endl;
        cout<<"0. Salir"<<endl;
        cin>>opcionGeometrica;
        selectorFigura(opcionGeometrica);
    }while(opcionGeometrica != 0);
}

void selectorFigura(int opcionGeometrica){
    switch (opcionGeometrica)
    {
    case 1:
        calcularCirculo();
        break;
    case 2:
        calcularElipse();
        break;
    case 3:
        calcularTriangulo();
        break;
    case 4:
        calcularCuadrado();
        break;
    case 5:
        calcularRectangulo();
        break;
    
    default:
        break;
    }
}

void calcularCirculo(){
    double radioCirculo = 0.0;
    cout<<"Dame el radio del círculo"<<endl;
    cin>>radioCirculo;
    double areaCirculo = PI * (pow(radioCirculo,2));
    cout<<"El área del Círculo es de: "<<areaCirculo<<endl;
}

void calcularElipse(){
    double radioMayor = 0.0, radioMenor = 0.0;
    cout<<"Dame el radio mayor"<<endl;
    cin>>radioMayor;
    cout<<"Dame el radio menor"<<endl;
    cin>>radioMenor;
    double areaElipse = PI * radioMayor * radioMenor;
    cout<<"El área de la Elipse es de: "<<areaElipse<<endl;
}

void calcularTriangulo(){
    double baseTriangulo = 0.0, alturaTriangulo = 0.0;
    cout<<"Dame la base del triángulo"<<endl;
    cin>>baseTriangulo;
    cout<<"Dame la altura del triángulo"<<endl;
    cin>>alturaTriangulo;
    double areaTriangulo = (baseTriangulo * alturaTriangulo)/2;
    cout<<"El área del triángulo es de: "<<areaTriangulo<<endl;
}

void calcularCuadrado(){
    double lado = 0.0;
    cout<<"Dame un lado del cuadrado"<<endl;
    cin>>lado;
    double areaCuadrado = lado * lado;
    cout<<"El área del Cuadrado es de: "<<areaCuadrado<<endl;
}

void calcularRectangulo(){
    double ladoUno = 0.0, ladoDos = 0.0;
    cout<<"Dame el lado A"<<endl;
    cin>>ladoUno;
    cout<<"Dame el lado B"<<endl;
    cin>>ladoDos;
    double areaRectangulo = ladoUno * ladoDos;
    cout<<"El área del Rectángulo es de: "<<areaRectangulo<<endl;
}
