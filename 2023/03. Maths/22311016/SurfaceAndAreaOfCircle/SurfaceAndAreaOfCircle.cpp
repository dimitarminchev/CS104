#include <iostream> // cout, cin
#include <cmath> // acos, pow
using namespace std;
int main()

{
    float r;

    cout << "Please input a value for the circle radius r = ";
    cin >> r;

    double pi = 2 * acos(0.0);
    float p = 2 * pi * r;
    float s = pi * pow(r, 2);

    cout << "The circle's perimeter p = " << p << endl;
    cout << "The circle's area s = " << s << endl;

    return 0;
}