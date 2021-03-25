#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r, p, s;
    const float PI = 3.14159265358979323846;

    cout << "r=";
    
    cin >> r;

    p = 2 * PI * r;
    s = PI * pow(r,2);

    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    return 0;
}