#include <iostream>
using namespace std;
int main()
{
    // Декларираме целочислени променливи
    int m01, m02, m05, m10, m20, m50, m1, m2;

    // Въвеждаме стойности на променливите
    cout << "Enter euro cents: 0.01, 0.02, 0.05, 0.1, 0.2, 0.5, 1 & 2" << endl;
    cin >> m01 >> m02 >> m05 >> m10 >> m20 >> m50 >> m1 >> m2;

    // Изчисляваме сумата
    float sum = m01 * 0.01 + m02 * 0.02 + m05 * 0.05 + m10 * 0.1 + m20 * 0.2 + m50 * 0.5 + m1*1 + m2*2;

    // Отпечатваме резултата
    cout << sum << " euro" << endl;

    return 0;
}