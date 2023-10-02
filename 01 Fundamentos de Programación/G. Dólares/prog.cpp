/*
  Proposito: Calculo de dolares a pesos
   Autor: Gerardo Beltrán
   Fecha: 2- Oct-2023
*/
#include <iostream>

using namespace std;

int main() {
   int numDolares, numPesos, tipoCambio;
  // Entrada de datos 
  cout << "Indicar numero de dolares: ";
  cin >> numDolares;
  cout << "Tipo de cambio: ";
  cin >> tipoCambio;

   // Calculo de pesos
  numPesos = tipoCambio * numDolares;

  cout << numPesos << endl;  
  return 0; 
}