#include <iostream>
#include<iomanip>

using namespace std;

int main ()
{
  int a1, a2, a3, b1, b2, b3;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
  
  if  (a1 * a2 * a3 == b1 * b2 * b3 )
        cout << "1" << endl;
  else
        cout << "0" << endl;

  return 0;
}