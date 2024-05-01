#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a = 1, b = 1, c = a + b;
    cout << a << " " << b << " " << c << " ";
    while(c<n)
    {
        a = b;
        b = c;
        c = a + b;
        cout << c << " ";
        if (c < n) cout << c << " ";
    }
    return 0;

}

