// DR ZAD3 SBOR
#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0) 
    {
        cout << (c - b) << endl;
    }
    if (b == 0) 
    {
        cout << (c - a) << endl;
    }
    if (c == 0) 
    {
        cout << (a + b) << endl;
    }
    return 0;
}
