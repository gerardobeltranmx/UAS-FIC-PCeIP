/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>

using namespace std;

int main() {
  
   int edad;
   //cout << "Indicar edad: ";
   cin >> edad;

   if (edad >= 18){
      cout << "Es Mayor" << endl;
   }
   else {
      cout << "Es Menor" << endl;
   }

   return 0; 
}