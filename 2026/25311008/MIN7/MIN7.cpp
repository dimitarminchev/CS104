// MIN7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    for (int k = 100; k <= 999; k++)
    {
        int k1 = (k / 100) % 10;
        int k2 = (k / 10) % 10;
        int k3 = (k / 1) % 10;
        if ((k1 == a || k1 == b || k1 == c || k1 == d || k1 == e) &&
            (k2 == a || k2 == b || k2 == c || k2 == d || k2 == e) &&
            (k3 == a || k3 == b || k3 == c || k3 == d || k3 == e) &&
            (k % 7 == 0))
        {
            cout << k << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
