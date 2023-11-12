#include<iostream>


using namespace std;

int main() {

int monedasJuan, monedasPedro, totalJuan=0, totalPedro=0;

  cin >> monedasJuan;
  totalJuan+=monedasJuan;  
  cin >> monedasJuan;
  totalJuan+=monedasJuan;  
  cin >> monedasJuan;
  totalJuan+=monedasJuan;  

  cin >> monedasPedro;
  totalPedro+=monedasPedro;
  cin >> monedasPedro;
  totalPedro+=monedasPedro;


if (totalJuan > totalPedro)
    cout << "Juan" << endl;
else
    cout << "Pedro" << endl;

return 0;
}