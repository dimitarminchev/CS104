#include <iostream>
#include<cstdlib>
using namespace std;

// Брой на елементите
const int N = 10;

// Създаваме масив с 10 елемента
int A[N];

// Процедура за отпечатване на масив
void Print()
{
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Сортиране по метода на мехурчето
void BubbleSort()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i] < A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

// Главен метод на програмата
int main()
{
    srand((unsigned)time(NULL));

    // Генерира случайни числа
    for (int i = 0; i < N; i++)
    {
        A[i] = rand();
    }

    // Отпечатване на числата
    cout << "Random generated " << N << " numbers:\n";
    Print();

    // Сортиране по метода на мехурчето
    BubbleSort();

    // Отпечатване на числата
    cout << "\nSorted numbers:\n";
    Print();

    return 0;
}