﻿#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please, enter 5 digit number:" << endl;
    cin >> n;

    int a = (n / 10000) % 10;
    int b = (n / 100) % 10;
    int c = (n / 1) % 10;


    int S = a + b + c;

    cout << S << endl;

    return 0;
}