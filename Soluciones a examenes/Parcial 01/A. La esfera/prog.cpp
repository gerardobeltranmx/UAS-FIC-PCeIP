#include <iostream>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double PI = 3.1416;
    double volumen, superficie, radio;
    
    cin >> radio;
    
    volumen = 4 * PI * (radio*radio*radio) / 3;
    superficie = 4 * PI * (radio*radio);
    
    cout << "Volumen:" << fixed << setprecision(2) <<volumen <<" "<<"Superficie:"<< fixed << setprecision(2) << superficie <<  endl;
    
    return 0;
}