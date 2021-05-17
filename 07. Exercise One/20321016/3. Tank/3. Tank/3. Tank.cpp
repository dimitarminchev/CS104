// 3. Tank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int v;
    cout << "v=";
    cin >> v;

    int total = v / (2 + 3);
    int remain = v % (2 + 3);

    cout << total << " times";
    switch (remain)
    {
    case 1: cout << " + 1 litre"; break;
    case 2: cout << " + 1 x 2 litres."; break;
    case 3: cout << " + 1 x 3 litres."; break;
    case 4: cout << " + 2 x 2 litres"; break;
    }
    return 0;
}
