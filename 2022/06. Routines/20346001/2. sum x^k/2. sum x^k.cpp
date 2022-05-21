// 2. sum x^k
#include <iostream>
#include<cmath>
using namespace std;

// Функция за намиране на сумата на x^k
int f(int x, int n)
{
    int sum = 0;
    for (int k = 1; k <= n; k++)
    {
        sum += pow(x, k);
    }
    return sum;
}

int main()
{
    // vars
    int x, n;

    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;

    // извеждаме резутлат:
    cout << "Sum x^n = " << f(x, n) << endl;

    return 0;
}
