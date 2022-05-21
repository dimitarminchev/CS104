// 3. MinMax
#include <iostream>
using namespace std;
int main()
{
    // vars
    int a, b, c;
    cout << "a,b,c=?" << endl;
    cin >> a >> b >> c;

    // min
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    // max
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    cout << "min=" << min << endl;
    cout << "max=" << max << endl;

    return 0;
}