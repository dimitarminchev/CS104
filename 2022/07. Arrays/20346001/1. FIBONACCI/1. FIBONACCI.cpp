// 1. FIBONACCI
#include <iostream>
using namespace std;
int main()
{
    // Брой елементи
    const int N = 10;

    // Масив
    int F[N] = { 1,1 };

    // Редицата на Фибоначи
    for (int k = 2; k < N; k++)
    {
        F[k] = F[k - 2] + F[k - 1];
    }

    //Цикъл
    for (int k = 0; k < N; k++)
    {
        cout << F[k] << " ";
    }
    return 0;
}