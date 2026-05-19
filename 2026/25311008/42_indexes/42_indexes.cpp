// 42_indexes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int A[10] = { 2,2,-1,-1,-1,3,5,-2,-2,4 };
    for (int k = 0; k < 10; k++) cout << A[k] << " ";


    int x;
    cout << endl << "Enter x: ";
    cin >> x;


    bool found = false;


    cout << "Indexes: ";
    for (int k = 0; k < 10; k++)
    {
        if (A[k] == x)
        {
            cout << k << " ";
            found = true;
        }
    }
    if (found == false) cout << endl << "Not found!" << endl;

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
