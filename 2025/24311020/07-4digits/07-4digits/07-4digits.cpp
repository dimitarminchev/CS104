﻿
#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Please, enter 4 digit number:" << endl;
    cin >> n;

    int a = (n / 1000) % 10;
    int b = (n / 100) % 10;
    int c = (n / 10) % 10;
    int d = (n / 1) % 10;

    int S = a + b + c + d;
    int p = a * b * c * d;

    cout << S << " " << p << endl;

    return 0;
}
