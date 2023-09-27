/*
  Proposito:   Programa que calcula el interes de 
               de una inversión.
   Autor: Gerardo Beltrán
   Fecha: 27-Sep-2023
*/
#include <iostream>

using namespace std;

int main() {
   // Declaración de variables
   float capital, ganancia;
   // Entrada de datos
   cout << "Escriba el capital inicial: ";
   cin >> capital;
   // Calculo de ganancia
   ganancia = capital * 0.02;
   // Salida de resultados
   cout << "La ganancia es: " << ganancia << endl;
  
   return 0; 
}