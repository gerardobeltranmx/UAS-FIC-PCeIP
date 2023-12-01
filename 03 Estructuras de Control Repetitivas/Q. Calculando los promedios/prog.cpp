/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>
#include <iomanip>


using namespace std;

int main() {
   int k, mayor, menor, dato, suma=0;
   cin >> k;
   cin >> mayor;
   menor = mayor;
   suma=mayor;
   for (int i=1; i < k; i++){
         cin >> dato;
         if (dato > mayor) mayor = dato;
         if (dato < menor) menor = dato;
         suma = suma + dato;
   }
   if (suma % k == 0)
      cout << suma / k << endl;
   else
      cout << fixed << setprecision(3)<< (float)suma / k << endl; 


   return 0; 
}