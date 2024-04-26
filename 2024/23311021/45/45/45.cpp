#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3] = {};

    int mat[3][3] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for matrix A position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for matrix B position (" << i << ", " << j << "): ";
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] + mat[i][j] << "\t";
        }
    }
    return 0;
}
