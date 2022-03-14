// 2.Sum x^k.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int f(int x = 1, int n = 1)
{
    int sum = 0;
    for (int k = 1; k <= n; k++)
    {
        sum = sum + pow(x, k);
    }
    return sum;
}

int main()
{
    cout << f(2, 3) << endl;
    return 0;
}