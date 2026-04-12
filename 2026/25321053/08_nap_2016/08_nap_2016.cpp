// 08_nap_2016.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double income;
    cin >> income;

    double tax = 0;

    if (income > 7920)
    {
        tax = (income - 7920) * 0.10;
    }

    cout << tax;

    return 0;
}

