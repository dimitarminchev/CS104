// 11_do_while.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);

    return 0;
}