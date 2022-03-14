﻿#include <iostream>
using namespace std;
int main()
{
    // Деклариране на двумерен масив (Матрица)
    int A[3][3];

    // Въвеждане на елементите на матрицата
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    // Детерминанта на матрица
    int detA = A[0][0] * A[1][1] * A[2][2] + 
               A[0][1] * A[1][2] * A[2][0] + 
               A[0][2] * A[1][0] * A[2][1] - 
               A[2][0] * A[1][1] * A[0][2] - 
               A[2][1] * A[1][2] * A[0][0] - 
               A[2][2] * A[1][0] * A[0][1];

    // Резултат
    cout << "det.A = " << detA << endl;

    return 0;
}