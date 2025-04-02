#include <iostream>
using namespace std;
int main()
{
    // Създаваме променлива за сума
    int sum = 0;

    // Цикъл който да намери сумата
    for (int k = 100; k <= 999; k++)
    {
        // if(k % 3 ==0 && k % 5 == 0)
        if (k % 15 == 0)
        {
            sum = sum + k;
            cout << k << " ";
        }
    }

    // Отпечатваме получената сума
    cout << endl << sum << endl;

    return 0;
}
