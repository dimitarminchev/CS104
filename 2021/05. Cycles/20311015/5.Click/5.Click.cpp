// Игра "Цък"
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 100; i++)
    {
        // Числа които се делят на 7
        if (i % 7 == 0) cout << "click ";

        // Числа които съдържат 7
        else if (i / 10 == 7 || i % 10 == 7) cout << "click ";

        // Всички останали числа
        else cout << i << " ";
    }
    return 0;
}