#include <stdio.h>
#include <iostream>
using namespace std;

void selector(int);
void ejercicioUno(void);
void ejercicioDos(void);
void ejercicioTres(void);
void ejercicioCuatro(void);
void ejercicioCinco(void);
void ejercicioSeis(void);
void ejercicioSiete(void);
void ejercicioOcho(void);
void ejercicioNueve(void);
void ejercicioDiez(void);
void ejercicioOnce(void);
void ejercicioDoce(void);

int main(){

    int opcionPrincipal = 0;

    do{
        cout<<""<<endl;
        cout<<"Bienvenidos"<<endl;
        cout<<"Que ejercicio desea revisar?"<<endl;
        for(int i=1; i<=12; i++){
            cout<<i<<". Ejemplo "<<i<<endl;
        };
        cout<<"0. Salir"<<endl;
        cin>>opcionPrincipal;
        selector(opcionPrincipal);
    }while(opcionPrincipal != 0);
}



void selector(int opcion){
    switch (opcion)
    {
    case 1:
        ejercicioUno();
        system("pause");
        break;
    case 2:
        ejercicioDos();
        system("pause");
        break;
    case 3:
        ejercicioTres();
        system("pause");
        break;
    case 4:
        ejercicioCuatro();
        system("pause");
        break;
    case 5:
        ejercicioCinco();
        system("pause");
        break;
    case 6:
        ejercicioSeis();
        system("pause");
        break;
    case 7:
        ejercicioSiete();
        system("pause");
        break;
    case 8:
        ejercicioOcho();
        system("pause");
        break;
    case 9:
        ejercicioNueve();
        system("pause");
        break;
    case 10:
        ejercicioDiez();
        system("pause");
        break;
    case 11:
        ejercicioOnce();
        system("pause");
        break;
    case 12:
        ejercicioDoce();
        system("pause");
        break;
    
    default:
        cout<<"Gracias por utilizar este programa"<<endl;
        break;
    }
}
