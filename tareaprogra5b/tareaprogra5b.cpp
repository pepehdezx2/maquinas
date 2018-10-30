//
//  main.cpp
//  tareaprogra5b
//
//  Created by Jose Antonio on 08/10/17.
//  Copyright © 2017 Jose Antonio. All rights reserved.
//  José Antonio Hernández Hernández A01381334
//  algoritmo
//  pedir numero de maquinas a evaluar
//  conseguir n
//  pedir numero de piezas por maquina
//  conseguir b
//  hacer ciclo que cuente de 1 a n y que sume de 1 en 1 (variable alpha)
//  hacer ciclo que cuente de 1 a b y que sume de 1 en 1 (variable beta)
//  pedir los tiempos de pieza
//  sumar los tiempos de cada pieza y conseguir el total
//  dividir entre b para conseguir el promedio
//  desplegar el numero de la maquina y su promedio de tiempo
//  casos de prueba
//  numero n = 2 numero b = 3 maquina 1 parcial = 10, 11, 12 maquina 2 parcial = 12, 14, 16
//  resultado de prueba
//  desplegar maquina 1 promedio 11 maquina 2 promedio 14

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, b;
    double total, promedio, parcial;
    cout << "cuantas maquinas se evaluaran" << endl;
    cin >> n;
    cout << "cuantas piezas por maquina" << endl;
    cin >> b;
    total = 0;
    for (int alpha = 1; alpha <= n; alpha++){ // ciclo que repite del 1 al numero de maquinas
    for (int beta = 1; beta <= b; beta++){ // ciclo que repite de 1 al numero de piezas por hacer
        cout << "tiempo en hacer pieza" << endl;
        cin >> parcial;
        total = total + parcial; // consigue el total de tiempo por la maquina en las piezas solicitadas
         promedio = total / b; // consigue el promedio de la maquina
           }
        cout << "el proedio de la maquina " << alpha << " fue de " << promedio << endl;
        total = total * 0; // resetea el total a 0 despues de terminar con una maquina
    }
    return 0;
}
 // maestra la verdad no supe como poner cual era la mas tardada
