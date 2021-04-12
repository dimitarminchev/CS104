// Игра "Цък"
#include <iostream>
using namespace std;
int main()
{
    for (int a = 1; a < 100; a++)
    {
        // Числа които се делят на 7
        if (a % 7 == 0) cout << "click ";

        // Числа които съдържат 7
        else if (a / 10 == 7 || a % 10 == 7) cout << "click ";

        // Всички останали числа
        else cout << a << " ";
    }
    return 0;
}