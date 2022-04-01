#include <iostream>
#include<cmath>
using namespace std;

/// <summary>
/// Функция за намиране на сумата на x^k
/// </summary>
/// <param name="x">x</param>
/// <param name="n">n</param>
/// <returns></returns>
int f(int x, int n)
{
    int sum = 0;
    for (int k = 1; k <= n; k++) 
    {
        sum += pow(x, k);
    }
    return sum;
}

/// <summary>
/// Главна програма
/// </summary>
int main()
{
    // Необходими променливи
    int x, n;

    // Въвеждане на необходимите променливи
    cout << "x="; 
    cin >> x;
    cout << "n=";
    cin >> n;

    // ИЗвеждаме резутлата
    cout << "Sum x^n = " << f(x, n) << endl;

    return 0;
}
