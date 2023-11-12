#include <iostream>
#include<iomanip>

using namespace std;

int main ()
{
  int a1, a2, a3, b1, b2, b3;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
  
  if ( ( a1 == b1 && a2 == b2 && a3 == b3 ) or 
       ( a1 == b2 && a2 == b1 && a3 == b3 ) or 
       ( a1 == b3 && a2 == b2 && a3 == b1 ) or
       ( a1 == b2 && a2 == b3 && a3 == b1 ) or
       ( a1 == b1 && a2 == b3 && a3 == b2 ) or 
       ( a1 == b3 && a2 == b1 && a3 == b2 ) )
        cout << "1" << endl;
  else
        cout << "0" << endl;

  return 0;
}