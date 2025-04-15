#include <iostream>
using namespace std;
int main()
{
    // Декларираме целочислена променлива и я въвеждаме от клавиатурата
    int n;
    cout << "n=";
    cin >> n;

    // Цикъл който ще изведе простите числа от 2 до n
    for (int k = 2; k <= n; k++)
    {
        // Първоначалната ни хопотеза е че числото е просто
        bool isPrime = true;

        // Проверяваме дали съществува делител J на K
        for (int j = 2; j < k; j++)
        {
            if (k % j == 0) isPrime = false;
        }

        // Ако първоначалната хипотеза е в сила, то числото е просто
        if (isPrime) cout << k << " ";

    }
    return 0;
}
