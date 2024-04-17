/*Fecha: 09 de Abril del 2024
  Autor: Harry Enrique Bodán Navarro

  Función del Algoritmo: Se requiere conocer el salario neto mensual de un trabajador,
  a partir de su salario bruto mensual, el paso de su seguro (INSS), y el pago del impuesto 
  sobre la renta (IR), base los cálculos en la información brindada en:
  https://delepesoasuspesos.com/compraspresupuesto/1077-como-calcular-el-ir

  Version: 1.0
*/

#include <windows.h>
#include <iostream>
using namespace std;

int MESES = 12;
double INSS = 0.0625;

double calcularSalarioAnual(double salarioMensualBruto);
double calcularDeduccionInssAnual(double salarioAnualBruto);
void calcularIR(double salarioPorValidar);

void ejercicioSeis(){
    SetConsoleOutputCP(CP_UTF8);

    double salarioMensualBruto = 0.0;

    cout<<"Dame tu salario neto mensual"<<endl;
    cin>>salarioMensualBruto;
    
    double salarioAnualBruto = calcularSalarioAnual(salarioMensualBruto);

    double deduccionINSSAnual = calcularDeduccionInssAnual(salarioAnualBruto);
    
    double salarioPorValidar = salarioAnualBruto - deduccionINSSAnual;

    cout<<"Salario Mensual Bruto -> C$"<<salarioMensualBruto<<endl;
    cout<<"Salario Anual Bruto -> C$"<<salarioAnualBruto<<endl;
    cout<<"Deducción INNS Anual -> C$"<<deduccionINSSAnual<<endl;
    cout<<"Deducción INNS Mensual -> C$"<<deduccionINSSAnual/12<<endl;

    calcularIR(salarioPorValidar);
}

double calcularSalarioAnual(double salarioMensualBruto){
    return salarioMensualBruto*MESES;
}

double calcularDeduccionInssAnual(double salarioAnualBruto){
    return salarioAnualBruto * INSS;
}

void calcularIR(double salarioPorValidar){
    double montoIR = 0.0,
    impuestoBase = 0.0,
    exceso = 0.0,
    salarioAnualNeto = 0.0;


    if(salarioPorValidar>= 0.01  && salarioPorValidar<=100000.00)
    {
        impuestoBase=0.0;
        montoIR = 0.0;

    }else if(salarioPorValidar>= 100000.01  && salarioPorValidar<=200000.00){
        impuestoBase = 0.0;
        exceso = salarioPorValidar - 100000.00;
        montoIR = impuestoBase + (exceso*0.15);

    }else if(salarioPorValidar>= 200000.01  && salarioPorValidar<=350000.00){
        impuestoBase = 15000.00;
        exceso = salarioPorValidar - 200000;
        montoIR = impuestoBase + (exceso*0.20);

    }else if(salarioPorValidar>= 350000.01  && salarioPorValidar<=500000.00){
        impuestoBase = 45000.00;
        exceso = salarioPorValidar - 350000;
        montoIR = impuestoBase + (exceso*0.25);

    }else if(salarioPorValidar>= 500000.01){
        impuestoBase = 82500.00;
        exceso = salarioPorValidar - 500000;
        montoIR = impuestoBase + (exceso*0.30);

    }else{
        cout<<"No digitó un salario correcto"<<endl;
    }
    
    salarioAnualNeto = salarioPorValidar - montoIR;

    cout<<"Deducción IR Anual -> C$"<<montoIR<<endl;
    cout<<"Deducción IR Mensual -> C$"<<montoIR/12<<endl;
    cout<<"Impuesto Base Anual Por Pagar -> C$"<<impuestoBase<<endl;
    cout<<"Impuesto Base Mensual Por Pagar -> C$"<<impuestoBase/12<<endl;
    cout<<"Salario Anual Neto -> C$"<<salarioAnualNeto<<endl;
    cout<<"Salario Mensual Neto -> C$"<<salarioAnualNeto/12<<endl;

}