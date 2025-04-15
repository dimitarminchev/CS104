

#include <iostream>
using namespace std;
int main()
{
    int  n;
    cout << "n=";
        cin >> n;
        for (int k = 2; k <= n; k++)
        {
            bool isPrime = true;
            for (int j = 2; j < k; j++)
            {

                if (k % j == 0) isPrime = false;

            }

            if (isPrime) cout << k << "";
        }
    return 0;
}

