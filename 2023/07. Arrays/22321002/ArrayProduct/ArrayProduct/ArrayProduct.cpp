#include<iostream>
using namespace std;
int main()
{
    const int N = 100;

    // Деклариране на масив с N елемента
    double A[N];

    // Попълваме масива с числа
    for (int i = 0; i < N; i++)
    {
        A[i] = i + 1;
    }

    // Намиране на произведение
    double pro = 1;
    for (int i = 0; i < N; i++)
    {
        pro *= A[i];
    }
    cout << "Product of " << N << " elements is equal to " << pro << endl;

    return 0;
}