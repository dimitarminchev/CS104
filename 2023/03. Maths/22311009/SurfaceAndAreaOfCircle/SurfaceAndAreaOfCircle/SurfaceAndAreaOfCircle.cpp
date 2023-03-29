#include <iostream> // cout, cin
#include <cmath> // acos, pow
using namespace std;
int main()
{
    // Периметър и лице на кръг
    float r;

    cout << "r=";
    cin >> r;

    double pi = 2 * acos(0.0);
    float p = 2 * pi * r;
    float s = pi * pow(r, 2);

    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    return 0;
}