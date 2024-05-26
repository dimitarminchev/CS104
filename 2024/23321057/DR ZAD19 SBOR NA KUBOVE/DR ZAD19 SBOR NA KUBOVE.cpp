// DR ZAD19 SBOR NA KUBOVE
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n != 153) 
    {
        int S = 0;
        while (n > 0) 
        {
            int t = n % 10;
            n /= 10;
            S += t * t * t;
        }
        n = S;
        cout << n << endl;
    }
    cout << endl;
    return 0;
}
