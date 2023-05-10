#include<iostream>
using namespace std;
int main()
{
    const int N = 100;

    // Деклариране на масив с N елемента
    double fib[N] = { 0,1 };

    // Изчисляване на числата от редицата на Фибоначи
    for (int k = 2; k < N; k++)
    {
        fib[k] = fib[k - 2] + fib[k - 1];
    }

    // Извеждане на числата
    for (int i = 0; i < N; i++)
    {
        cout << fib[i] << endl;
    }
    return 0;
}