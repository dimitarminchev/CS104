﻿#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Деклариране на необходимите целочислени променливи
    int x, n, A[100], sum = 0;

    // Въвеждане на x и n
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;

    // Намираме елементите на масива
    for (int k = 0; k < n; k++)
    {
        A[k] = pow(x, k);
        sum = sum + A[k];
    }

    // Отпечатваме получения резултат
    cout << "sum=" << sum << endl;

    return 0;
}