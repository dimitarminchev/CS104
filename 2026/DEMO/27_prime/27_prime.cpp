#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    // Цикъл за проверка на числата от 2 до n
    for (int k = 2; k < n; k++)
    {
        // Първоначално приемаме че K е просто
        bool isPrime = true;

        // Проверяваме всички числа от 2 до K-1
        for (int j = 2; j < k; j++)
        {
            // Има ли числото K делител J?
            if (k % j == 0) isPrime = false;
        }

        // Ако първоначалната хипотеза е още в сила, то K е просто
        if (isPrime) cout << k << " ";
    }
}
