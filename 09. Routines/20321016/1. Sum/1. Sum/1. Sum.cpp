// 1. Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return (a + b);
}

int main()
{
    cout << sum(1, 2) << endl;
    cout << sum(2, 3) << endl;
    cout << sum(4, 4) << endl;
    return 0;
}