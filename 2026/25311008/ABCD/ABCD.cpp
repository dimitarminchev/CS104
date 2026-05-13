// ABCD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    for (int k = a; k <= b; k++)
    {
        int k1 = (k / 1000) % 10;
        int k2 = (k / 100) % 10;
        int k3 = (k / 10) % 10;
        int k4 = (k / 1) % 10;
        if (k1 + k2 * k2 + k3 * k3 * k3 + k4 * k4 * k4 * k4 == k) count++;
    }
    cout << count << endl;
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
