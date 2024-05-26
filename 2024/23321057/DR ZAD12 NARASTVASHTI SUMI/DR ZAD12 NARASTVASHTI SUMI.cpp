// DR ZAD12 NARASTVASHTI SUMI
#include <iostream>
using namespace std;

int main() 
{
    int n, m, k;
    cin >> n >> m >> k;
    int S = 0;
    cout << "S = ";
    for (int i = 1; i <= k; i++) 
    {
        int p = n + i * m;
        S += p;
        cout << p;
        if (i != k) 
        {
            cout << " + ";
        }
    }
    cout << " = " << S << endl;
    return 0;
}
