// Намерете сумата на всички трицифрени кратни на 3 и 5
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;

    // Трицифрени числа
    for (int i = 100; i <= 999; i++)
    {
        // Кратни на 3 и 5
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }

    // Отпечатваме намерената сума
    cout << endl << sum << endl;
    return 0