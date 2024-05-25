#include <iostream>
using namespace std;

int main()
{
    float r;
    cout << "r = ";
    cin >> r;

    float p = 2 * 3.14 * r;
    float s = 3.14 * r * r;
    float v = (4 * 3.14 * r * r * r) / 3;

    cout << "P = " << p << endl;
    cout << "S = " << s << endl;
    cout << "V = " << v << endl;

    return 0;
}
