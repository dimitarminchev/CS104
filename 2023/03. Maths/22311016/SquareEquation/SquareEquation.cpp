#include<iostream>
#include<cmath>
using namespace std;
int main()

{
 
    float a, b, c;

    cout << "Please input a numerical value for a = ";
    cin >> a;
    cout << "Please input a numerical value for b = ";
    cin >> b;
    cout << "Please input a numerical value for c = ";
    cin >> c;

    float d = pow(b, 2) - (4 * a * c);
    float x1 = ((-b) + sqrt(d)) / (2 * a);
    float x2 = ((-b) - sqrt(d)) / (2 * a);

    cout << a <<"x^2 + " << b << "x + " << c << endl;
    cout << "d = " << d << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}