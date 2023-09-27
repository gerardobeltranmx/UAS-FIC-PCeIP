/*
  Proposito: Calculo de pago y comisión
   Autor: Gerardo Beltrán
   Fecha: 27-sep-2023
*/
#include <iostream>

using namespace std;

int main() {
  float sueldoBase, venta1, venta2, venta3;
  float ventaTotal, comision, totalPago;
   // Entrada de datos
  cout << "Escriba sueldo base: ";
  cin >> sueldoBase;
  cout << "Escriba venta 1: ";
  cin >> venta1;
  cout << "Escriba venta 2: ";
  cin >> venta2;
  cout << "Escriba venta 3: ";
  cin >> venta3;
  // Calculos 
  ventaTotal = venta1 + venta2 + venta3;
  comision = ventaTotal * 0.10;
  totalPago = sueldoBase + comision;   
  // Salida
  cout << "Total del pago es: " << totalPago << endl;
  cout << "Comisión: " << comision << endl;  
   return 0; 
}