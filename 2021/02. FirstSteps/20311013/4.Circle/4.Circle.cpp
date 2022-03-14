#include <iostream>
#include<cmath>
#include <math.h>
using namespace std;

int main()
{
    float r, p, s;
    float PI = acos(-1.0);
    cout << "r=";
    cin >> r;
    p = PI * 2 * r;
    s = PI * r * r;
    cout << "P=" << p << " S=" << s << endl;
    return 0;
}