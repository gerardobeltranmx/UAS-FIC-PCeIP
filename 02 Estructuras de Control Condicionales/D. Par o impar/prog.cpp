/*
  Proposito: Numeros pares o impares
   Autor: Gerardo Beltrán
   Fecha: 19-oct-2023
*/
#include <iostream>

using namespace std;

int main() {
   int num;
   cin >> num;

   if (num % 2 == 0)
         cout << "par" << endl;
   else
         cout << "impar" << endl;      

   return 0; 
}