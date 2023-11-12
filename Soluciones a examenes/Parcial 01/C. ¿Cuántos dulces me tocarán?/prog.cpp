#include <iostream>
using namespace std;
int main() {
  int N, M, dulces, tia, sobran;
  cin>> N >> M;

  tia = N / 2;
  sobran = N - tia;
  dulces = sobran % M;

  cout<< dulces << endl;

  return 0;
}