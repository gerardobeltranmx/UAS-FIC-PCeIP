/*
  Proposito: Calculo de pago y comisión
   Autor: Gerardo Beltrán
   Fecha: 27-sep-2023
*/
#include <iostream>
#include <iomanip>
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
  cout << fixed << left << setw(25) << "Total del pago es:"; 
  cout << fixed << right << setw(10) << setprecision(2)<< setfill('*')<< totalPago << endl;
  cout << fixed << left << setw(25) << "Comisión: ";
  cout << fixed << right << setw(10) << setprecision(2)<< comision << endl;  
   return 0; 
}