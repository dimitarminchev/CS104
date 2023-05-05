#include <iostream>
using namespace std;
int main()
{
    // Игра "Цък"
    int k;

    // Игрем до 1000
    for (k = 1; k <= 1000; k++)
    {
        // Отцеване на цифрите на числото
        int k3 = (k / 100) % 10;
        int k2 = (k / 10) % 10;
        int k1 = (k / 1) % 10;

        // Проверка дали някое от тез цифри не е 7
        if (k1 == 7 || k2 == 7 || k3 == 7 || k % 7 == 0)
        {
            cout << "click ";
        }
        else
        {
            cout << k << " ";
        }
    }

    return 0;
}