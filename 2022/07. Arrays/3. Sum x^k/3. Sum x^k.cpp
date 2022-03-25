#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    // Нeобходими променливи
    int x, n;
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;

    // Декларираме масив с целочислени елемента
    int F[100];
    int sum = 0;

    // Изчисляваме числата от редицата 
    for (int k = 1; k <= n; k++)
    {
        F[k] = pow(x,k);
        sum = sum + F[k];
    }

    // Отпечатваме получените стойности 
    for (int k = 1; k <= n; k++)
    {
        cout << F[k] << " ";
    }
    cout << endl << "sum=" << sum << endl;

    return 0;
}
