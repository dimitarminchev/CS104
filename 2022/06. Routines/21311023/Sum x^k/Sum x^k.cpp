#include <iostream>
#include<cmath>
using namespace std;

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
    int x, n;

    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;

    cout << "Sum x^n = " << f(x, n) << endl;

    return 0;
}