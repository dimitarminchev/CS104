#include <iostream>
using namespace std;
int main()
{ // 1. Pool
    float a, b, c, d1, d2, d3, v, t, d;
    cout << "A=?, B=?, C=?, D1=?, D2=?, D3=?" << endl;
    cin >> a >> b >> c >> d1 >> d2 >> d3;
    v = a * b * c;
    d = d1 + d2 + d3;
    t = v / d;
    cout << "Approximately " << t << " hours";
    return 0;
}
