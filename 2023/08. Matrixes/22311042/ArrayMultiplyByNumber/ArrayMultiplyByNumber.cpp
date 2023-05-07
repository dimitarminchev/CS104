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
    int A[X][Y], n;

    Input(A);
    cout << "n=";
    cin >> n;

    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            A[x][y] *= n;
        }
    }

    cout << "The result is amazing:\n";
    Print(A);

    return 0;
}