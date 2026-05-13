// TWOTHREE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    if (n > 2 and n < 33333)
    {
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;

            }
            else if (n % 3 == 0)
            {
                n = n / 3;
            }
            else
            {
                n += 1;
            }
            cout << n << " ";
            sum += 1;
        }
        cout << endl << sum << endl;
    }
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
