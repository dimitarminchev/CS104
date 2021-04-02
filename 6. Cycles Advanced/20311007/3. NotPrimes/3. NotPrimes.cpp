// 3. Делители на числата
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;

    cout << "Upper Limit: ";
    cin >> n;

    for (int k = 2; k <= n; k++)
    {
        cout << k << ": ";
        for (int j = 2; j < k; j++)
        {
            if (k % j == 0)
            {
                cout << j << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}