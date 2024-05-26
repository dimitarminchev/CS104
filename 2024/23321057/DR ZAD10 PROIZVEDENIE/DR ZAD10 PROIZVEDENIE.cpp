// DR ZAD10 PROIZVEDENIE
#include <iostream>
using namespace std;

int main() 
{
    int n, m, k;
    cin >> n >> m >> k;
    int P = 1;
    for (int i = 1; i <= k; i++) 
    {
        P *= (n + i * m);
    }
    cout << P << endl;
    return 0;
}
