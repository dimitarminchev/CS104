#include <iostream>
using namespace std;
int main()
{
    // Брой елементи
    const int N = 10;

    // Декларираме масив с N на брой целочислени елемента
    int F[N] = { 1,1 };

    // Изчисляваме числата от редицата на Фибоначи
    for (int k = 2; k < N; k++)
    {
        F[k] = F[k - 2] + F[k - 1];
    }

    // Отпечатваме получените стойности 
    for (int k = 0; k < N; k++)
    {
        cout << F[k] << " ";
    }

    return 0;
}