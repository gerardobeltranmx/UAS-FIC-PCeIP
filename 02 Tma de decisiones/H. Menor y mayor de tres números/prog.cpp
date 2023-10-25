/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>

using namespace std;

int main() {
   
   int a, b, c, menor, mayor;
   cin >> a;
   cin >> b;
   cin >> c;
   // buscar el menor
   // es a el menor?
   if ( a < b and a < c)
      menor = a;
   else if (b < a and b < c) // es b el menor ?
      menor = b;
   else // entonces c es la menor
      menor = c;

   // buscar el mayor
   // es a el mayor?
   if ( a > b and a > c)
      mayor = a;
   else if (b > a and b > c) // es b el mayor ?
      mayor = b;
   else // entonces c es la mayor
      mayor = c;


   cout << menor << endl;
   cout << mayor << endl;






   return 0; 
}