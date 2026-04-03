// 13_sum_upto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << sum;

    return 0;
}