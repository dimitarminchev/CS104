#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b;

    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    a = 2 * (a + b);
	b = a * b;

    cout << "a+b="<< a+b << endl;

    return 0;
}