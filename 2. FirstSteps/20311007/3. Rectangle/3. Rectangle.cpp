#include<iostream>
using namespace std;

int main()
{
    float a, b, p, s;

    cout << "a=?, b=?" << endl;
    cin >> a >> b;

    p = 2 * (a + b);
    s = a * b;

    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    return 0;
}