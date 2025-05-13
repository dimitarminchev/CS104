#include <iostream>
using namespace std;
int main()
{
    // Декларираме целочислен масив с 10 елемента
    int A[10];

    // Въвеждане на елементите на масива
    for (int i = 0; i < 10; i++) cin >> A[i];

    // Сортиране по метода на мехурчето
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // Ако един елемент е по-малък от друг
            if (A[i] < A[j]) 
            {
                // Разменяме ги
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Извеждане на елементите на масива
    for (int i = 0; i < 10; i++) cout << A[i] << " ";

    return 0;
}
