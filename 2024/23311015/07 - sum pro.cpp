#include<iostream>
using namespace std;
int main()
{
 int a;
 cout << "Vuvedi 4 cifreno chislo = ";
 cin >> a;

 int a4 = (a/1000) % 10;
 int a3 = (a/100) % 10;
 int a2 = (a/10) % 10;
 int a1 = (a/1) % 10;

 cout << "suma = " << a1 + a2 + a3 + a4 << endl;
 cout << "proizvedenie = " << a1 * a2 * a3 * a4 << endl;

 return 0;
}