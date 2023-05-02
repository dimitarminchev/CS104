#include <iostream>
using namespace std;

// Determining matrix dimensions
const int X = 3, Y = 3;

// Entering the elements of the matrix
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

// Print the elements of the matrix
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
    int A[X][Y], n;

    // input 
    Input(A);
    cout << "n=";
    cin >> n;

    // Multiplying a matrix by a number
    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            A[x][y] *= n;
        }
    }

    // Printing
    cout << "The result is amazing:\n";
    Print(A);

    return 0;
}