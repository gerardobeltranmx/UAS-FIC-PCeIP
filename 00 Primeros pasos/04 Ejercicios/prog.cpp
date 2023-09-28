/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  

   float x = 10.436536532;
   cout << x << endl; 
   cout << fixed <<setprecision(3) << x << endl; 

   cout <<fixed <<  setw(10) <<setprecision(3) << x << endl; 

   cout << fixed << right << setfill('*') << setw(10) << setprecision(3) << x << endl; 

   cout << fixed << left << setfill('-') << setw(20) << setprecision(5) << x << endl; 


   return 0; 
}