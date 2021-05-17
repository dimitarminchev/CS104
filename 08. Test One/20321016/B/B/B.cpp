// B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int k = a; k <= b; k++)
    {
        int part1 = k / 100;
        int part2 = k % 100;
        if (part1 * part1 == part2)
        {
            cout << k << " ";
        }
    }
    cout << endl;
    return 0;
}