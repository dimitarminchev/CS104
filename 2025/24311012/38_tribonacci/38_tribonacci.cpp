﻿#include <iostream>
using namespace std;
int main()
{
    // Константа за брой на елементите на масива
    const int N = 100;

    // Създавме целочислен масив с N елемента и задаваме първите два да са 1
    double tri[N] = { 1,1, 1 };

    // Изчисляваме редицата на Фицоначи до N
    for (int k = 3; k < N; k++)
    {
        tri[k] = tri[k - 1] + tri[k - 2] + tri[k - 3];
    }

    // Отпечатваме редицата на Фибоначи
    for (int k = 0; k < N; k++)
        cout << tri[k] << " ";

    return 0;
}