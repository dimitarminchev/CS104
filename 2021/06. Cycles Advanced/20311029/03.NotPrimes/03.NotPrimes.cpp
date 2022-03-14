#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int count;

    cout << "Upper Limit: ";
    cin >> n;

    for (int k = 2; k <= n; k++)
    {
        count = 0;
        cout << k << ": ";

        for (int j = 2; j < k; j++)
        {
            if (k % j == 0)
            {
                if (count > 0)
                {
                    cout << ", ";
                }

                cout << j;
                count++;
            }
        }

        if (count > 0)
        {
            cout << ".";
        }

        cout << endl;
    }

    return 0;

}
