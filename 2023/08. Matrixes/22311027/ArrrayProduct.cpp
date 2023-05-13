#include <iostream>

using namespace std;

const int X = 3, Y = 3;

void Input(int a[X][Y])
{
    cout << "Enter the matrix's numbers:\n";

    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            cin >> a[x][y];
        }
    }
}

void Print(int a[X][Y])
{
    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            cout << a[x][y] << '\t';
        }
        cout << '\n';
    }
}

int main()
{
    int a[X][Y], b[X][Y], c[X][Y], n;

    Input(a);
    cout << endl;

    Input(b);
    cout << endl;

    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            c[x][y] = a[x][0] * b[0][y] + a[x][1] * b[1][y] + a[x][2] * b[2][y];
        }
    }

    cout << "The result is:\n";
    Print(c);

    return 0;
}