#include <iostream>
using namespace std;
int main()
{
    // Брой елементи
    const int N = 7;

    // Масив
    int Array[N];

    // Въвеждане на елементите на масива
    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++)
    {
        cin >> Array[i];
    }

    // Необходими променливи
    int min = Array[0], max = Array[0];

    // Намиране на минимален и максимален елемент
    for (int i = 1; i < N; i++)
    {
        if (Array[i] < min) min = Array[i];
        if (Array[i] > max) max = Array[i];
    }

    // Отпечатване на резултата
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;

    return 0;
}
