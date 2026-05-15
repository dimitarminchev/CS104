// 43_bubblesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int A[3][3];


    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            cin >> A[x][y];


    for (int x1 = 0; x1 < 3 ; x1++)
        for (int x2 = 0; x2 < 3; x2++)
            for (int y1 = 0; y1 < 3; y1++)
                for (int y2 = 0; y2 < 3; y2++)
                    if (A[x1][y1] < A[x2][y2])
                    {
                        int temp = A[x1][y1];
                        A[x1][y1] = A[x2][y2];
                        A[x2][y2] = temp;
                    }
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
            cout << A[x][y] << '\t'; // tab
            cout << '\n'; // new line (endl)
        }
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
