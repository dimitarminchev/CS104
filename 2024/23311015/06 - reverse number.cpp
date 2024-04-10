#include<iostream>
using namespace std;
int main()
{
 int a;
 cout << "Vuvedi 3 cifreno chislo = ";
 cin >> a;

 int q = a/100;
 int w = (a/10) % 10;
 int e = a % 10;

 int rev = e*100 + w*10 + q*1;

 cout << a << "na obratno e: " << rev << endl;

 return 0;
}