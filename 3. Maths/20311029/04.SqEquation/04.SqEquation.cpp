#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;

    cout << "a=";
    cin >> a;

    cout << "b=";
    cin >> b;

    cout << "c=";
    cin >> c;

    float d = pow(b, 2) - 4 * a * c;

    float x1 = (-b + sqrt(d)) / 2 * a;
    float x2 = (-b - sqrt(d)) / 2 * a;

    cout << "D: " << d << endl;
    cout << "X1: " << x1 << endl;
    cout << "X2: " << x2 << endl;

    return 0;
}