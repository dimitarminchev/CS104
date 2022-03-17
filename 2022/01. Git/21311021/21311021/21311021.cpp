// 21311021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void hello()
{
    cout << "Hello World!";
}

void sum()
{
    int a, b, c;

    a = 12;
    b = 23;
    c = a + b;

    cout << "Sum: " << c;
}

int main()
{
    hello();
    //sum();

    return 0;
}