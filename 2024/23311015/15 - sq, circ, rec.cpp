#include<iostream>
using namespace std;
int main()
{
 int n;
 cout << "1. Square" << endl;
 cout << "2. Rectangle" << endl;
 cout << "3. Circle" << endl;
 cout << "Please select (1-3): ";
 cin >> n;

 if (n==1)
 {
   int a;
   cout << "Enter a: " << endl;
   cin >> a;
   cout << "P = " << 4* a << endl;
   cout << "S = " << a * a << endl;
 }

 if (n==2)
 {
   int a, b;
   cout << "Enter a, b: " << endl;
   cin >> a >> b;
   cout << "P = " << (2 * a) + (2 * b) << endl;
   cout << "S = " << a * b << endl;
 }

 if (n==3)
 {
   float r;
   cout << "Enter r: " << endl;
   cin >> r;
   cout << "P = " << 2 * r * 3.14 << endl;
   cout << "S = " << 3.14 * r * r << endl;
 }
 
    return 0;
} 

