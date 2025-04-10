#include <iostream>
using namespace std;
int main()
{
    // Деклараме две целочислени променливи
    int n, p = 1;

    // Въвеждаме стойност за n
    cout << "n=";
    cin >> n;

    // Изчисляваме произведение на числата от 1 до n
    for (int k = 1; k <= n; k++)
    {
        p = p * k;
    }

    // Извеждане на получения резултат
    cout << "n!=" << p << endl;

    return 0;
}