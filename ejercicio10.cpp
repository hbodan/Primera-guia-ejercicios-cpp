/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Los usuarios de un laboratorio de computación ingresan con una tarjeta 
  que indica el tiempo que tienen disponible para usar las computadoras, este tiempo se indica
  en horas, minutos y segundos. Elabore un algoritmo que, dado el tiempo disponible de uso de una
  tarjeta, marque la hora de entrada, marque la hora de salida, e imprima el nuevo tiempo disponible
  en la tarjeta.

  Version: 1.0
*/

#include <windows.h>
#include <iostream>
using namespace std;

int FACTORHORA = 3600;
int FACTORMINUTO = 60;


void marcarEntrada(int& hora, int& minuto, int& segundo);
void marcarSalida(int& hora, int& minuto, int& segundo);

void calcularNuevoTiempo(int horaEntrada, int minutoEntrada, int segundoEntrada,
                         int horaSalida, int minutoSalida, int segundoSalida,
                         int& horaRestante, int& minutoRestante, int& segundoRestante);

void ejercicioDiez(){
    SetConsoleOutputCP(CP_UTF8);
    int horaEntrada, minutoEntrada, segundoEntrada;
    int horaSalida, minutoSalida, segundoSalida;
    int horaRestante, minutoRestante, segundoRestante;

    marcarEntrada(horaEntrada, minutoEntrada, segundoEntrada);

    marcarSalida(horaSalida, minutoSalida, segundoSalida);

    calcularNuevoTiempo(horaEntrada, minutoEntrada, segundoEntrada,
                        horaSalida, minutoSalida, segundoSalida,
                        horaRestante, minutoRestante, segundoRestante);
    
    cout << "\nTiempo restante en la tarjeta: " << horaRestante << " horas, " << minutoRestante << " minutos y " << segundoRestante << " segundos." << endl;
}

void marcarEntrada(int& hora, int& minuto, int& segundo) {
    cout << "Hora de entrada (formato HH MM SS): ";
    cin >> hora >> minuto >> segundo;
}

void marcarSalida(int& hora, int& minuto, int& segundo) {
    cout << "Hora de salida (formato HH MM SS): ";
    cin >> hora >> minuto >> segundo;
}

void calcularNuevoTiempo(int horaEntrada, int minutoEntrada, int segundoEntrada,
                         int horaSalida, int minutoSalida, int segundoSalida,
                         int& horaRestante, int& minutoRestante, int& segundoRestante) {

    int tiempoTotalEntrada = (horaEntrada * FACTORHORA) + (minutoEntrada * FACTORMINUTO) + segundoEntrada;
    int tiempoTotalSalida = (horaSalida * FACTORHORA) + (minutoSalida * FACTORMINUTO) + segundoSalida;
    int tiempoTotalUso = 0;
  
    if (tiempoTotalSalida >= tiempoTotalEntrada) {
        tiempoTotalUso = tiempoTotalSalida - tiempoTotalEntrada;
        horaRestante = tiempoTotalUso / FACTORHORA;
        minutoRestante = (tiempoTotalUso % FACTORHORA) / FACTORMINUTO;
        segundoRestante = tiempoTotalUso % FACTORMINUTO;
    } else {
        horaRestante = 0;
        minutoRestante = 0;
        segundoRestante = 0;
    }
}