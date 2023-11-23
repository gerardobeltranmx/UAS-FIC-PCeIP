/*
  Proposito: verificar digitos
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>

using namespace std;

int main() {

   int N, mitad, digito;
   int sumaIzq=0, sumaDer=0, total=0;

   cin >> N;
   mitad = N / 2;

   for (int i=0; i < N; i++){
      cin >> digito;
      if (i < mitad){
         sumaIzq+=digito; // sumaIzq = sumaIzq + digito;
      }
      else {
         sumaDer+=digito;
      }
   }
   if (sumaIzq == sumaDer){ // verifica si es valido
      cout << sumaIzq << " " << 1 << endl;
   }
   else {
      total = sumaIzq + sumaDer;
      cout << total << " " << 0 << endl;
   }


  
   return 0; 
}