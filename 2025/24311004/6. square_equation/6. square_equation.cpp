#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    float d;
    cout << "x^2: ";
    cin >> a;
    cout << "x: ";
    cin >> b;
    cout << "constant(c): ";
    cin >> c;

    d = pow(b, 2) - 4 * a * c;
    cout << "x1: " << ((-b) + sqrt(d)) / (2 * a) << endl;
    cout << "x2: " << ((-b) - sqrt(d)) / (2 * a);


}