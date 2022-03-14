#include <iostream>
using namespace std;
int main()
{
    // Горна граница и масив
    int n, A[1000];

    // Въвеждаме горна граница
    cout << "n=";
    cin >> n;

    // Въвеждане на числата в едномерният масив
    for (int i = 0; i < n; i++) cin >> A[i];

    // Сортиране по метода на мехурчето
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (A[j] > A[j + 1]) // 0 .. 9
            // if (A[j] < A[j + 1]) // 9 .. 0
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Отпечатване на масива
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    return 0;
}