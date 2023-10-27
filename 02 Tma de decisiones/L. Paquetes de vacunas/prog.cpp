/*
  Proposito: Calculo de cajas de vacunas
   Autor: Gerardo Beltrán
   Fecha: 27-Oct-2023
*/
#include <iostream>

using namespace std;

int main() {
  int a, b, mayor, cajas;
  const int trabajadores = 534; 
  string proveedor;
  cin >> a >> b; 

   if (a > b){
      mayor = a;
      proveedor = "A";
   }
   else{
      mayor = b;
      proveedor = "B";
   }
   cajas = trabajadores / mayor;

   if (trabajadores % mayor > 0 ){
      cajas = cajas + 1; // cajas++:
   }

   cout << proveedor << " " << cajas << endl;

   return 0; 
}