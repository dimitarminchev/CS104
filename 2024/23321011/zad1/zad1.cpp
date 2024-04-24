#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 1, b = 1, c = a + b, d; 
    cout << a << " " << b << " " << c << " ";
    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;
        if (c < n) cout << c << " ";
        if (c < n) d = c; 
    }
    cout << d; 
    return 0;
}