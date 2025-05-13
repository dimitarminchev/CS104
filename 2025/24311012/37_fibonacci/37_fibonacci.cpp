﻿#include <iostream>
using namespace std;
int main()
{
    // Константа за брой на елементите на масива
    const int N = 50;

    // Създавме целочислен масив с N елемента и задаваме първите два да са 1
    double fib[N] = { 1,1 };

    // Изчисляваме редицата на Фицоначи до N
    for (int k = 2; k < N; k++)
    {
        fib[k] = fib[k - 1] + fib[k - 2];
    }

    // Отпечатваме редицата на Фибоначи
    for (int k = 0; k < N; k++)
        cout << fib[k] << " ";

    return 0;
}