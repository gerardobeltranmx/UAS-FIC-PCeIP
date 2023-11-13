#include <iostream>

using namespace std;

int main() {

   int suma = 0, dato;

   do{

      cin >> dato;
      suma = suma + dato;

   } while (dato!=0);

   cout << suma << endl;

   return 0; 
}