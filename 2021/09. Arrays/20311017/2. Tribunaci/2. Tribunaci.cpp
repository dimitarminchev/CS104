#include <iostream>
using namespace std;
int main()
{
    // Брой на елементите
    const int N = 20;

    // Масив за съхранение на числата от редицата на Трибуначи
    int Tri[N] = { 1,1,1 };

    // Изчисляване на останалите числа
    for (int k = 3; k < N; k++)
    {
        Tri[k] = Tri[k - 3] + Tri[k - 2] + Tri[k - 1];
    }

    // Отпечатване на редицата на Трибуначи
    for (int k = 0; k < N; k++)
    {
        cout << Tri[k] << " ";
    }

    return 0;
}