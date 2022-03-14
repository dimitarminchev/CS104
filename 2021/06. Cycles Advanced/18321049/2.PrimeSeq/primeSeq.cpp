// Упражнение 2 - принтене на прости числа до зададен лимит
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

    // Алгоритъм за намиране на редицата на простите числа
    for (int k = 2; k <= n; k++)
    {
        // Първоначалната ни хипотеза че числото е просто
        bool isPrime = true; // true = 1, false = 0

        // Съществува ли делител на K?
        for (int j = 2; j < sqrt(k); j++)
        {
            if (k % j == 0)
            {
                // Намерили сме делител na K
                isPrime = false;
            }
        }

        // Проверка дали първоначалната хипотеза е в сила
        if (isPrime)
        {
            cout << k << " ";
        }
    }

    return 0;
}
