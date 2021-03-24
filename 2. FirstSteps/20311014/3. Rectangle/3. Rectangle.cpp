// 03. Периметър и лице на правоъгълник

#include <iostream>
using namespace std;
int main()
{
    // Създаване на променливите
    float a, b, P, S;

    // Въвеждане на страните на правоъгълника
    cout << "a = ?, b = ?" << endl;
    cin >> a >> b;

    // Изчисляване на лице и периметър
    P = 2 * (a + b);
    S = a * b;

    // Отпечатваме резултата на екрана
    cout << "Perimeter = " << P << endl;
    cout << "Area = " << S << endl;

    return 0;
}