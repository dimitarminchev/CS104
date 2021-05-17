// H.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n; // 21
    for (int k = 10; k <= n; k++)
    {
        sum += (k / 10) + (k % 10);
    }
    cout << sum << endl; // 60
    return 0;
}