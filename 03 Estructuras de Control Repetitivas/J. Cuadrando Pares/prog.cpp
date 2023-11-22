/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>

using namespace std;

int main() {
  
   int t, dig, par=0;

   cin >> t;
   do {
      dig = t % 10;
      if (dig % 2 == 0)
         par++;
      t = t / 10;
   } while(t>0);

   if (par % 2 == 0)
         cout << "SI"<< endl;
   else
         cout << "NO" << endl;      

   return 0; 
}