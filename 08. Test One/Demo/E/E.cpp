#include <iostream>
using namespace std;
int main()
{
    int m, n, br=0;
    cin >> m >> n;
    for (int k = m; k <= n; k++)
    {
        int k1 = (k / 100) % 10;
        int k2 = (k / 10) % 10;
        int k3 = (k / 1) % 10;
        if (k1 != k2 && k2 != k3 && k1 != k3)
        {
            br = br + 1;
        }
    }
    cout << br << endl;
    return 0;
}