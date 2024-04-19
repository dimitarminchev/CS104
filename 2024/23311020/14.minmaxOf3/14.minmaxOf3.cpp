#include<iostream>
using namespace std;
int main()
{
    int a, b, c;

    // input
    cout << "a b c" << endl;
    cin >> a >> b >> c;

    // find max
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // find min
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    // output
    cout << "min=" << min << endl;
    cout << "max=" << max << endl;

    return 0;
}