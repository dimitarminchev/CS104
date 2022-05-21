// 5. BubbleSort
#include <iostream>
using namespace std;

// Елементи
const int N = 5;
// Целочислен масив
int A[N];
// Елементите в масива
void input()
{
    for (int i = 0; i < N; i++) cin >> A[i];
}
void print()
{
    for (int i = 0; i < N; i++)  cout << A[i] << " ";
    cout << endl;
}

// Сортиране по "Метода на мехурчето"
void bubblesort()
{
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1; j++)
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
}
void bubblesort2()
{
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1; j++)
            if (A[j] < A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
}

int main()
{
        // Въвеждаме 
    input();
        // Сортираме
    bubblesort();
        // Отпечатваме 
    print();
        // Сортиране по метода на мехурчето
    bubblesort2();
        // Отпечатваме 
    print();

    return 0;
}