// digit_sum_of_3_and_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int sum = 0;

    for (int k = 100; k <= 999; k++)
    {
        if (k % 15 == 0)
        {
            sum = sum + k;
        }
    }

    cout << sum << endl;

    return 0;
    
}


