#include <iostream>
using namespace std;
int main()
{
    int n, fak = 1;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        fak = fak * k;
    }
    cout << fak << endl;
    return 0;
}