// DR ZAD18
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n != 1) 
    {
        if ((n % 2) == 0) 
        {
            n /= 2;
        }
        else 
        {
            n = n * 3 + 1;
        }
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
