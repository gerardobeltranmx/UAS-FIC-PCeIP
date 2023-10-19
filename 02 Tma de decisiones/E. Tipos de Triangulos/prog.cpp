/*
  Proposito: Tipo de triangulo
   Autor: Gerardo Beltrán
   Fecha: 19-oct-2023
*/
#include <iostream>

using namespace std;

int main() {

   int lado1, lado2, lado3;

   cin >> lado1 >> lado2 >> lado3;

   if (lado1==lado2 && lado2==lado3)
         cout << "equilatero" << endl;
   else if (lado1==lado2 || lado2==lado3 || lado3==lado1)
         cout << "isosceles" << endl;      
   else  
         cout << "escaleno" << endl;

   return 0; 
}