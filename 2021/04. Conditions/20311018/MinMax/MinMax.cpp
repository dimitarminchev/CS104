#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c;
    cout << "a=? , b=?, c=?" << endl;
    cin >> a >> b >> c;
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    cout << "max =" << max << endl;
    cout << "min =" << min << endl;

    return 0;
}