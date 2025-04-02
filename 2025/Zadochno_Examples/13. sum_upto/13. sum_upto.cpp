#include <iostream>
using namespace std;
int main()
{
    // създаваме променлива n и четем число от клавиатурата в n
    int n;
    cout << "n=";
    cin >> n;

    // Създаваме променлива за сума, като урвоначално сумата е нула
    int sum = 0;

    // Цикъл който добява числата от 1 до n в сумата
    for (int k = 1; k <= n; k++)
    {
        sum = sum + k;
    }

    // Отпечатваме какво се е събрало в сумата
    cout << "sum=" << sum << endl;

    return 0;
}
