#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Vuvedi n: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    cin.get();
    cin.get();
    return 0;
}
