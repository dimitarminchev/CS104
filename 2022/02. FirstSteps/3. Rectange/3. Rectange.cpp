#include<iostream>
using namespace std;
int main()
{
    // Четири променливи с плаваща запетая
    float a, b, p, s;

    // Въвеждане на страните на правоъгълника
    cout << "a=?, b=?" << endl;
    cin >> a >> b;

    // Изчисляване на лице и периметър
    p = 2 * (a + b);
    s = a * b;

    // Отпечатваме резултата на екрана
    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    return 0;
}