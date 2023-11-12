#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for (int i=1; i <=10; i++) {
      cout<< fixed<< right << setw(2) << i << " x " << setw(4)<< N << " = " << setw(5)<< i*N  <<endl;
        
    }
    
    return 0;
}