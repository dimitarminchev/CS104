// SUPERPRIME.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int m, n, sum = 0;
    cin >> m >> n;
    if (m > 100 and n > m and 999 > n)
    {
        for (int k = m; k < n; k++)
        {
            bool isPrime = true;
            for (int j = 2; j < k; j++)
            {
                if (k % j == 0) isPrime = false;
            }
            if (isPrime)
            {
                int m = k / 10;
                for (int j = 2; j < m; j++)
                {
                    if (m % j == 0) isPrime = false;
                }
                if (isPrime)
                {
                    int d = m / 10;
                    if (d > 1)
                    {
                        for (int j = 2; j < d; j++)
                        {
                            if (d % j == 0) isPrime = false;
                        }
                        if (isPrime) sum += 1;
                    }
                    else continue;
                }
            }
        }
    }
    else return 0;
    cout << sum;
    cout << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
