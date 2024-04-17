/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Diseñar un algoritmo para calcular la velocidad (en m/s) de los 
  corredores de una carrera de 1,500 metros. La entrada consistirá en parejas de números 
  (minutos, segundos) que dan el tiempo del corredor. Por cada corredor, el algoritmo debe 
  imprimir el tiempo en minutos y segundos, así como la velocidad media.

  Version: 1.0
*/

#include <windows.h>
#include <iomanip>
#include <iostream>
using namespace std;

int MINUTOSENSEGUNDOS = 60;
double DISTANCIA = 1500.00;

void imprimirDatosCorredores(double* velocidades, int numeroCorredores, double velocidadMedia);

void ejercicioSiete(){
    SetConsoleOutputCP(CP_UTF8);
    cout << fixed << setprecision(3);
    
    int numeroCorredores = 0, minutos = 0, segundos = 0, segundosTotales=0;
    double velocidadMedia = 0.0;

    cout<<"Ingrese el número de corredores"<<endl;
    cin>>numeroCorredores;

    double* velocidades = new double[numeroCorredores];

    for(int i=0 ; i<numeroCorredores; i++){
      cout<<"Dame los minutos del corredor "<<i+1<<endl;
      cin>>minutos;

      cout<<"Dame los segundos del corredor "<<i+1<<endl;
      cin>>segundos;

      segundosTotales = minutos * MINUTOSENSEGUNDOS;
      
      velocidades[i] = DISTANCIA / (segundosTotales + segundos);

      velocidadMedia += velocidades[i];
    }

    imprimirDatosCorredores(velocidades, numeroCorredores, velocidadMedia);
}

void imprimirDatosCorredores(double* velocidades, int numeroCorredores, double velocidadMedia){
    for(int i=0 ; i<numeroCorredores; i++){
          cout<<"Velocidad de corredor "<<i+1<<": "<<velocidades[i]<<endl;
          cout<<"---------------"<<endl;
        }

        cout<<"Velocidad media: "<<velocidadMedia/numeroCorredores<<endl;
}



/*
Probando con estructuras
-------------------------------------------------

struct Corredor{
  int minutos;
  int segundos;
  int segundosTotales = 0;
  double velocidadTotal =  0.0;
};

void ejercicioSiete(){
    SetConsoleOutputCP(CP_UTF8);
    cout << fixed << setprecision(3);
    int numeroCorredores = 0;
    double velocidadMedia = 0.0;

    cout<<"Dame los números de corredores"<<endl;
    cin>>numeroCorredores;

    Corredor* corredores = new Corredor[numeroCorredores];

    for (int i = 0; i < numeroCorredores; i++)
    {
      cout<<"Dame los minutos del corredor "<<i+1<<endl;
      cin>>corredores[i].minutos;
      cout<<"Dame los segundos del corredor "<<i+1<<endl;
      cin>>corredores[i].segundos;

      corredores[i].segundosTotales = corredores[i].minutos * MINUTOSENSEGUNDOS;

      corredores[i].velocidadTotal = DISTANCIA/(corredores[i].segundos + corredores[i].segundosTotales);

      velocidadMedia += corredores[i].velocidadTotal;
    }
    
    for (int i = 0; i < numeroCorredores; i++)
    {
      cout<<"Corredor "<<i+1<<endl;
      cout<<"Velocidad total: "<<corredores[i].velocidadTotal<<" m/s"<<endl;
      cout<<"---------------"<<endl;
    }

    cout<<"La velocidad media es de: "<<velocidadMedia/numeroCorredores<<endl;
}
*/
