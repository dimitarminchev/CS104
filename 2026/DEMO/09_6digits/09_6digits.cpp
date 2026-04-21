#include <iostream>
using namespace std;
int main()
{
    // Декларираме променливa
    int a;

    // Въвеждаме стойност на променливa
    cin >> a;

    // Отцепване на цифрите на числото
    int a6 = (a / 100000) % 10;
    int a5 = (a / 10000) % 10;
    int a4 = (a / 1000) % 10;
    int a3 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a1 = (a / 1) % 10;

    // Отпечатваме резилтата
    cout << a2 * a4 * a6 << endl;

    return 0;
}