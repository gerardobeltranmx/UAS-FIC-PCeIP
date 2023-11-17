/*
  Proposito: Determinación de pares
   Autor: Gerardo Beltrán
   Fecha: 17-nov-2023
*/
#include <iostream>

using namespace std;

int main() {
   int N, cont=0; 
   long dato;

   cin >> N;

   for (int i=0; i<N; i++ ){
      cin >> dato;
      if (dato % 2 == 0){
         cout << "["<< dato << "] ";
         cont = cont + 1; // cont++;
      }
   }

   if (cont==0)
         cout << ":(";


   return 0; 
}