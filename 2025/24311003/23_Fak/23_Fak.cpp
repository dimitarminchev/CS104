// Izchislete faktoriel do zadadenoto chislo
#include <iostream>
using namespace std;
int main()
{
    int n, p = 1;

    cout << "n=";
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        p = p * k;
    }

    cout << "n!=" << p << endl;

    return 0;
}