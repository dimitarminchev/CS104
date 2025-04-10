#include <iostream>
using namespace std;
int main()
{
    // Деклараме две целочислени променливи
    int n, sum = 0;

    // Въвеждаме стойност за n
    cout << "n=";
    cin >> n;

    // Изчисляваме сума на числата от 1 до n
    for (int  k = 1; k <= n; k++)
    {
        sum = sum + k;
    }

    // Извеждане на получения резултат
    cout << "sum=" << sum << endl;

    return 0;
}
