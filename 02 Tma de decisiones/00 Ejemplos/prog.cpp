#include<iostream>
using namespace std;
int  main(){
int a, b;
char op;
printf ("Escriba expresión (ej. 5 + 6 ) =");
cin >> a >> op >> b;
switch (op){
  case '+':
       cout << a + b << endl;
       break;   
  case '-':
       cout << a - b << endl;
       break;   
  case '*':
       cout << a * b << endl;
       break;   
  case '/':
       cout << a / b << endl;
       break;   
 case '%':
       cout << a % b << endl;
       break;   
 default :
         cout << "operación  errónea" << endl;
}
return 0;
}
