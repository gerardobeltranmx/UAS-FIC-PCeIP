/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>
#include <iomanip>


using namespace std;

int main() {
   int k, mayor, menor, dato, suma=0, N;

   cin >> N; // numero de filas de datos
   for (int j=0; j < N; j++){
      cin >> k; // numero de datos en la fila
      cin >> mayor; // se asume que el primer es el mayor
      menor = mayor; // se asume que el primero es el menor
      suma=mayor;
      for (int i=1; i < k; i++){
            cin >> dato;
            if (dato > mayor) mayor = dato;
            if (dato < menor) menor = dato;
            suma = suma + dato;
      }
      if (suma % k == 0)
        cout << suma / k  << " " << menor << " " << mayor << endl;
      else
         cout << fixed << setprecision(3)<< (float)suma / k  << " " << menor << " " << mayor << endl; 



   }
   return 0; 
}