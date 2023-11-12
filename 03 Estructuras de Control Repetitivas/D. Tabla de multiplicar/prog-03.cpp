#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, i=1;
    cin >> N;
    
    //for (int i=1; i <=10; i++) 
    
    do {
      cout<< fixed<< right << setw(2) << i << " x " << setw(4)<< N << " = " << setw(5)<< i*N  <<endl;
      i++;    
    } while (i<=10);
    
    return 0;
}