// Perimeter, Face, Volume of a Circle
#include <iostream>
using namespace std;
int main()
{
    float r;
    cout << "r=";
    cin >> r;
    float p = 3.14 * r * r;
    float s = 3.14 * r * r;
    float v = (4 * 3.14 * r * r * r) / 3;
    cout << "p=" << p << endl;
    cout << "s=" << s << endl;
    cout << "v=" << v << endl;
    return 0;
}