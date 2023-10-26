/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>

using namespace std;

int main() {
   long N, K, mayor, total;
   cin >> N >> K;

   if (N > K)
      mayor = N;
   else
      mayor = K;    

   total = (mayor + 1)*(mayor + 2) / 2;

   cout << total << endl;

   return 0; 
}