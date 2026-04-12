// 12_click.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int x;
    int count = 0;

    do
    {
        cin >> x;

        if (x != 0)
        {
            count++;
        }

    } while (x != 0);

    cout << count;

    return 0;
}