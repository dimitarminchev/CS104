#include <iostream>
using namespace std;
int main()
{
    // Декларираме променливa
    int a;

    // Въвеждаме стойност на променливa
    cin >> a;

    // Отцепване на цифрите на числото
    int a3 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a1 = (a / 1) % 10;

    // Отпечатваме резилтата
    cout << a1 << a2 << a3 << endl;

    return 0;
}