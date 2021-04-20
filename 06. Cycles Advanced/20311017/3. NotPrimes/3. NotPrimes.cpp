// 3. Делители на числата
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Необходими целочислени променливи
    int n;

    // Въвеждане на горна граница
    cout << "Upper Limit: ";
    cin >> n;

    // Алгоритъм за намиране на Делителиte на числата
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