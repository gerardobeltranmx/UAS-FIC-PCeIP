/*
  Proposito: 
   Autor: Gerardo Beltrán
   Fecha: 
*/
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {
    double radio, altura, area, volumen;
    const double PI = 3.1416;   
    //cout << "Indicar radio y altura: ";
    cin >> radio >> altura;

    area = 2*PI*radio*altura + 
           2*PI*pow(radio,2); 
    volumen = PI*pow(radio,2)*altura; 
    cout << "AREA=" << fixed 
         << setprecision(2)<< area << endl; 
    cout << "VOLUMEN=" << fixed 
         << setprecision(2) << volumen << endl; 
    
   return 0; 

}