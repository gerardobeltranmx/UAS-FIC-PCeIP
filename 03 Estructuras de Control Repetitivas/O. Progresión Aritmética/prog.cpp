/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>

using namespace std;

int main() {

   int N, A, B; 
   long suma=0;

   cin >> A >> B >> N;

   for (int i=0; i < N; i++){
         suma = suma + (A + i*B);
   }

   cout << suma << endl;
  
   return 0; 
}