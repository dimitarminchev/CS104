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
    int a[X][Y];

    Input(a);
    cout << endl;

    Print(a);

    return 0;
}