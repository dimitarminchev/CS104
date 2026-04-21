#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    int a[10][10], b[10][10], c[10][10];

    cout << "Vuvedi broi redove: ";
    cin >> rows;

    cout << "Vuvedi broi koloni: ";
    cin >> cols;

    cout << "Vuvedi purvata matrica:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Vuvedi vtorata matrica:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Suma na matricite:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    cin.get();
    cin.get();
    return 0;
}
