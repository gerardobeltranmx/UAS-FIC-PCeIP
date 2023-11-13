/*
  Proposito: Calculo con pares y nones
   Autor: Gerardo Beltrán
   Fecha: 13-nov-2023
*/
#include <iostream>

using namespace std;

int main() {
  
   int N, numCarta, sumaAparicio=0, sumaNonila=0;
   int cuentaAparicio=0, cuentaNonila=0;
   int promAparicio, promNonila;

   cout << "Numero de cartas: ";
   cin >> N;

   for (int i=1; i<=N; i++){

         cin >> numCarta;

         if (numCarta % 2 == 0){ // es par?
            sumaAparicio = sumaAparicio + numCarta;
            cuentaAparicio++; // cuentaApricio = cuentaAparicio +1
         }
         else {
            sumaNonila = sumaNonila + numCarta;
            cuentaNonila++;
         }
   }
   promAparicio = sumaAparicio / cuentaAparicio;
   promNonila = sumaNonila / cuentaNonila;

   if (promAparicio > promNonila){
         cout << "APARICIO" << endl;
   }      
   else if (promNonila > promAparicio){
         cout << "NONILA" << endl;
   }
   else {
      cout << "EMPATE!" << endl;
   }

   return 0; 
}