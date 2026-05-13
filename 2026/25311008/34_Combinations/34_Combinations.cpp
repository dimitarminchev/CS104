// 34_Combinations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double fak(int n)
{
    if (n <= 1) return 1;
    else return n * fak(n - 1);
}


int main()
{
    double c_5_35 = fak(35) / (fak(5) * fak(35 - 5));
    double c_6_42 = fak(42) / (fak(6) * fak(42 - 6));
    double c_6_49 = fak(49) / (fak(6) * fak(49 - 6));
    cout << "5 from 35 = " << c_5_35 << endl;
    cout << "6 from 42 = " << c_6_42 << endl;
    cout << "6 from 49 = " << c_6_49 << endl;
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
