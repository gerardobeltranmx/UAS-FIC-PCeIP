/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>

using namespace std;

int main() {
   int numMensajes, numCorazones;

   cin >>numMensajes; // entrada al num. mensajes

   for (int k=1; k<=numMensajes; k++){ 

      cin >> numCorazones; // entra al numero de corazones

      for (int i=1; i <=numCorazones; i++){
         cout << "<3";
      }
      cout << endl;

  }


   return 0; 
}