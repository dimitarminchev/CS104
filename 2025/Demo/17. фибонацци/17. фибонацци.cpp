#include <iostream>
using namespace std;
int main()
{
    // Цяло число коетo въвеждаме от клавиатурата
    int n;
    cout << "n=";
    cin >> n;

    // Числата от редицата на Фицоначи
    int a = 1, b = 1, c = a+b;
    cout << "1 1 2 ";

    // Изчисляване на редицата на Фицобачи
    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;
        cout << c << " ";
    }
    return 0;
}
