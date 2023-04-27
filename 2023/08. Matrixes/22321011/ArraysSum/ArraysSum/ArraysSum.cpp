#include <iostream>
using namespace std;

// Define dimensions of the array
const int X = 3, Y = 3;

// Input the matrix elements
void Input(int A[X][Y])
{
    cout << "Enter the matrix numbers:\n";
    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            cin >> A[x][y];
        }
    }
}

// Print the array elements
void Print(int A[X][Y])
{
    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            cout << A[x][y] << '\t';
        }
        cout << '\n';
    }
}

// Main function of the program
int main()
{
    // Required variables
    int A[X][Y], B[X][Y], C[X][Y], n;

    // Input
    Input(A);
    Input(B);

    // Matrix sum
    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            C[x][y] = A[x][y] + B[x][y];
        }
    }

    // Print
    cout << "The result is amazing:\n";
    Print(C);

    return 0;
}