#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    // Square Equation Program
    float a, b, c;

    cout << "a, b, c = ?" << endl;
    cin >> a >> b >> c;

    float d = pow(b, 2) - (4 * a * c);
    float x1 = ((-b) + sqrt(d)) / (2 * a);
    float x2 = ((-b) - sqrt(d)) / (2 * a);

    cout << "d=" << d << endl;
    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2 << endl;

    return 0;
}