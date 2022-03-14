#include <iostream>
using namespace std;
int main()
{
    // Необходими променливи
    int min = 1000, max = -1000, A[1000], n;

    // Въвеждаме горна граница
    cout << "n=";
    cin >> n;

    // Въвеждане на числата в едномерният масив
    for (int i = 0; i < n; i++) cin >> A[i];

    // Намиране на минимално и масимално число
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min) min = A[i];
        if (A[i] > max) max = A[i];
    }

    // Отпечатване на резултата
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;

    return 0;
}
