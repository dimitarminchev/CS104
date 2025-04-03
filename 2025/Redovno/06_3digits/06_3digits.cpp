#include <iostream>
using namespace std;
int main()
{
    // Деклариране на променлива цяло число
    int n;

    // Извеждаме подканващ надпис и въвеждаме числото
    cout << "Please enter 3 digit number:" << endl;
    cin >> n;

    // Отцепване на цифрите на числото
    int a = (n / 100) % 10;
    int b = (n / 10) % 10;
    int c = (n / 1) % 10;

    // Отпечатваме числото наобратно
    cout << c << b << a << endl;

    return 0;
}