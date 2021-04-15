#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        if (k % 15 == 0)
        {
            cout << k << " "; // :15
        }
    }
    cout << endl;
    return 0;
}