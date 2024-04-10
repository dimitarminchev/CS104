#include<iostream>
using namespace std;
int main()
{
 float r;
 float pi = 3.14;

 cout << "r=";
 cin >> r;

 float p = 2 * pi * r;
 float s = pi * r * r;
 float v = (4 * pi * r * r * r) / 3;

 cout << "p=" << p << endl;
 cout << "s=" << s << endl;
 cout << "v=" << v << endl;

 return 0;
}