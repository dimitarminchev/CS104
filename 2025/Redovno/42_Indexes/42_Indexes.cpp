#include <iostream>
using namespace std;
int main()
{
    // Деклариране на масив за цели числа
    int A[10];

    // Въвеждане на елементите на масива
    for (int i=0; i < 10; i++) cin >> A[i];

    // Число което търсим в масива
    int b;
    cout << "Search: ";
    cin >> b;

    // Търсене на числото в масива
    cout << "Indexes: ";
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == b) cout << i << " ";
    }

    return 0;
}
