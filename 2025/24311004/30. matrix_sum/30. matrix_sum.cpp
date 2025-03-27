#include <iostream>
using namespace std;
int main()
{
    int matrixA[3][3] = { {1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9} };

    int matrixB[3][3] = { {9, 8, 7},
                          {6, 5, 4},
                          {3, 2, 1} };
    int matrixC[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }

}