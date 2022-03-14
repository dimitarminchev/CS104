// 04. Факториел

#include <iostream>
using namespace std;
int main()
{
    int n, f = 1;

    cout << "Factorial calculator (n! = ?)\nn = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }

    cout << "n! = " << f;

    return 0;
}