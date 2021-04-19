#include <iostream>
using namespace std;
int main()
{
    // Брой на елементите
    const int N = 20;

    // Масив за съхранение на числата от редицата на Фибоначи
    int Fib[N] = { 1,1 };

    // Изчисляване на останалите числа
    for (int k = 2; k < N; k++)
    {
        Fib[k] = Fib[k - 2] + Fib[k - 1];
    }

    // Отпечатване на редицата на Фибоначи
    for (int k = 0; k < N; k++)
    {
        cout << Fib[k] << " ";
    }

    return 0;
}