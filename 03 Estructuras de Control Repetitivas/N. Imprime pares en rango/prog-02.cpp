/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>

using namespace std;

int main() {
   int N,M;
   cin >> N; 
   cin >> M;

   if (N % 2 !=0){
      N++;
   }

   for (int i=N; i <=M; i+=2){
         cout << i << endl;
   }


   return 0; 
}