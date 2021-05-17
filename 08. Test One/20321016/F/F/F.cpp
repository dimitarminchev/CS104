// F.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int k = a; k <= b; k++)
    {
        if (k % 15 == 0) cout << "fizzbuzz ";
        else if (k % 5 == 0) cout << "buzz ";
        else if (k % 3 == 0) cout << "fizz ";
        else cout << k << " ";
    }
    cout << endl;
    return 0;
}