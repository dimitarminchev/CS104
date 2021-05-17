#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cout << "Upper Limit: ";
    cin >> n;

    bool isPrime;

    for (int i = 2; i <= n; i++)
    {
        isPrime = true;

        for (int t = 2; t < i; t++)
        {
            if (i % t == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << '\t';
        }
    }

    return 0;
}
