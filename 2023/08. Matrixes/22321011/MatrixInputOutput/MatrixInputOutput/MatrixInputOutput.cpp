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
    // Create a 2D array (Matrix)
    int A[X][Y];

    // Input the matrix elements
    Input(A);

    // Print the array elements
    Print(A);

    return 0;
}