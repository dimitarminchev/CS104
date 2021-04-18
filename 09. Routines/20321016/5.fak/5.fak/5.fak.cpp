// 5.fak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int fak(int n)
{
    if (n <= 1) return 1; // exit 
    else return n * fak(n - 1);
}

int main()
{
    cout << "5!=" << fak(5) << endl;
    return 0;
}