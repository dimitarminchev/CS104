// Сума от цифрите на нечетни позиции на 5 цифрено число
#include <iostream>
using namespace std;
int main()
{
    // Декларираме целочислена променлива
    int n;

    // Извеждаме подканващ текст и въвеждаме числото
    cout << "Please enter 5 digits number:" << endl;
    cin >> n;

    // Отцепваме цифрите на нечетни позиции
    int a = (n / 10000) % 10;
    int b = (n / 100) % 10;
    int c = (n / 1) % 10;

    // Намираме сумата
    int s = a + b + c;

    // Опечатваме сумата
    cout << s << endl;

    return 0;
}