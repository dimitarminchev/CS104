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
        for (int i = 2; i < k; i++)
        {
            if (k % i == 0)
            {
                cout << i << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}