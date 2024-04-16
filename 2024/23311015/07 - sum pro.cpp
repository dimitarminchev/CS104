#include<iostream>
using namespace std;
int main()
{
 int a;
 cout << "Vuvedi 4 cifreno chislo = ";
 cin >> a;

 int q = (a/1000) % 10;
 int w = (a/100) % 10;
 int e = (a/10) % 10;
 int r = (a/1) % 10;

 cout << "suma = " << q + w + e + r << endl;
 cout << "proizvedenie = " << q * w * e * r << endl;

 return 0;
}