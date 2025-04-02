#include <iostream>
using namespace std;
int main()
{
    // Цяло число коетo въвеждаме от клавиатурата
    int n;
    cout << "n=";
    cin >> n;

    // Изчисляване на пристите числа до n
    for (int k = 10000000; k < 20000000; k++)
    {
        // Първоначална хипотеза че числото е просто
        bool isPrime = true;

        // Проерка на всичи числа j преди k
        for (int j = 2; j <= k-1; j++)
        {
            // Ако някое число j раздели k то не просто
            if (k % j == 0) isPrime = false;
        }

        // Ако първоначалната хипотеза е в сила
        if (isPrime) cout << k << " ";
    }
    return 0;
}
