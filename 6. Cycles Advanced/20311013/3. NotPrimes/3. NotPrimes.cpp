#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=?" << endl;
    cin >> n;
    for (int k = 2; k <= n; k++)
    {
        cout << k << ": ";
        for (int j = 2; j < k; j++)
        {
            if (k % j == 0) cout << j << ", ";
        }
        cout << endl;

    }
    return 0;
}