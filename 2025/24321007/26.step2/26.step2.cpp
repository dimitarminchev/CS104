#include <iostream>
using namespace std;

unsigned long step2(unsigned long n)
{
    if (n == 1) return 2;
    else return 2 * step2(n - 1);
}

unsigned  long main()
{
 
    
    unsigned  long n;
    cout << "Enter power: ";
    cin >> n;
    
    for (unsigned long k = 1; k <= n; k++)
    {
        cout << "2^" << k << "=" << step2(k) << endl;
    }

    return 0;
}