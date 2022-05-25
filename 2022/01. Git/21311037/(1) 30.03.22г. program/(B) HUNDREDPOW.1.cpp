#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >>b;

    for (int k = a; k <= b; k++)
    {
        int k1 = k / 100 ;  // 204 : 100 = 2
        int k2 = k % 100 ; // 204 % 100 = 4                  
        if (k1 * k1 == k2) cout << k << " ";
    }
    cout << endl;

    return 0;
}