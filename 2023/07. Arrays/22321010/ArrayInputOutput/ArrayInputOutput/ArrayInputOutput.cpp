#include <iostream>
#include<iostream>
using namespace std;
int main()
{
    const int N = 10;

    // Деклариране на масив с N елемента
    int A[N];

    // Въвеждане на числа в определени индекси на масива
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // Извеждане на числа в определени индекси на масива
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}