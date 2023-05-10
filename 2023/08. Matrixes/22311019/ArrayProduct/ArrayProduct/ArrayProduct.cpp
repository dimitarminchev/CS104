#include <iostream>
using namespace std;

const int X = 3, Y = 3;

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

int main()
{
    int A[X][Y], B[X][Y], C[X][Y], n;

    Input(A);
    Input(B);

    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            C[x][y] = A[x][0] * B[0][y] + A[x][1] * B[1][y] + A[x][2] * B[2][y];
        }
    }

    cout << "The result is amazing:\n";
    Print(C);

    return 0;
}