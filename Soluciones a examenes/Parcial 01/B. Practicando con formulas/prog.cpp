#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double y, x, z, a;
    
   cin >> a;
   
   x = (3 * a) + 15;
   y = (x + 3) / (x + 1);
   z = ((5 * x) + (7 * y)) / (a * x * y);
   
   cout << fixed << setprecision(3) << z << endl;

   return 0;
}