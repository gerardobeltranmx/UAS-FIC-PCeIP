#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int op;
    double base, altura, lado, basemayor, basemenor, radio, area;

    double pi=3.1416;
    cin >>op;
    switch(op){
        case 0:
            cin >> basemayor >> basemenor >> altura;
            cout <<"Trapecio" << endl;
            area=(basemayor+basemenor)*altura/2;
            cout << fixed << setprecision(3) << area << endl;
            break;
        case 1:
            cin >>base >> altura;
            cout <<"Triangulo" << endl;
            area=(base*altura)/2;
            cout<<fixed<<setprecision(3)<<area<<endl;

        case 2:
            cin >> lado;
            cout << "Cuadrado" << endl;
            area=lado*lado;
            cout << fixed << setprecision(3) << area << endl;
            break;

        case 3:    
            cin >> base >> altura;
            cout << "Rectangulo" << endl;
            area = base * altura;
            cout << fixed << setprecision(3) << area << endl;
            break;
        
        case 4:
            cin >>radio;
            cout << "Circulo" << endl;
            area = pi * pow(radio,2);
            cout<< fixed << setprecision(3) << area << endl;

        default:
            cout <<"Figura no valida" << endl;

    }

    return 0;
}