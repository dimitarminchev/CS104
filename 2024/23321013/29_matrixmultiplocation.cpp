//29.
#include <iostream>
using namespace std;

int main() 
{
    int rows, cols, scalar;
    
    cout << "Въведете брой редове на матрицата: ";
    cin >> rows;
    cout << "Въведете брой колони на матрицата: ";
    cin >> cols;
    cout << "Въведете скаларно число за умножение: ";
    cin >> scalar;

    int matrix[rows][cols];

    cout << "Въведете елементите на матрицата: " << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "Елемент [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Резултат от умножението на матрицата по скалара " << scalar << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
            cout << matrix[i][j] << " ";
        }
        cout << endl;  
    }

    return 0;
}

