// 32_sum2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;


    double sum = 0;
    for (int k = 1; k <= n; k++)
    {
        double Ak = pow((-1), k) * pow(x, k);
        cout << Ak << endl;
        sum = sum + Ak;
    }


    cout << "Sum=" << sum << endl;
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