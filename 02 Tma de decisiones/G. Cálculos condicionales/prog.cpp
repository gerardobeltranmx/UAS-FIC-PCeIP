/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>

using namespace std;

int main() {
   int N, cont=0;

   cin >> N;

   if (N % 2 == 0){ // es par?
         N = N / 2;
         cont++; // cont = cont + 1; 
   }
   else  {
         N = N + 1; // N++;
         cont++;
   }

   if (N>=100){ 
         N = N / 100;
         cont++;
   }
   else if (N >=10){
         N = N / 10;
         cont++;
   }   

   if (N % 3 == 0){
         N = N - 1;
         cont++;
   }


   return 0; 
}