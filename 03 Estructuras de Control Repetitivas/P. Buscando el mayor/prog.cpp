/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>

using namespace std;

int main() {
  int N, mayor, dato;

  cin >> N; // cuantos son?

  cin >> mayor; // suponemos el primer mayor 

  for (int i=0; i < N-1; i++){
   cin >> dato;
   if (dato>mayor)
       mayor = dato;
  } 

  cout << mayor << endl;

   return 0; 
}