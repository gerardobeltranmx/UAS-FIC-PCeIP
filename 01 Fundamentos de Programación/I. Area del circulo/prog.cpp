/*
  Proposito: Calculo de area de circulo
   Autor: Gerardo Beltrán
   Fecha: 3-oct-2023
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  // const float PI = 3.14159; 
   int radio;
   float area;
  // cout << "Capturar el valor del radio: ";
   cin >> radio;

   area = M_PI * pow(radio,2);

   cout << fixed << setprecision(2) << area << endl;



   return 0; 
}