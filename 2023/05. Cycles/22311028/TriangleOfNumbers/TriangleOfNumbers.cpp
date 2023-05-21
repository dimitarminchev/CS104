﻿#include <iostream>
using namespace std;
int main()
{
    // Отпечатване на триъгълник от числа
    const int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
