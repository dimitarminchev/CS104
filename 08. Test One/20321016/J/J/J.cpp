// J.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // 10
    int a = 1, b = 1, c = a + b;
    int sum = 1 + 1 + 2;
    int pro = 1 * 1 * 2;
    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;
        if (c < n)
        {
            sum = sum + c;
            pro = pro * c;
        }
    }
    cout << (pro - sum) << endl; // 220
    return 0;
}