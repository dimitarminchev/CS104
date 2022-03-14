// 2. Простите числа до зададено число
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
        bool isPrime = true; 
        for (int i = 2; i <= sqrt(k); i++)
        {
            if (k % i == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << k << " ";
        }
    }

    return 0;
}