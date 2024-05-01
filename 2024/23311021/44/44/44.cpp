#include <iostream>
using namespace std;
int main()
{
    int n,rows,cols;
    cin >> n;
    int matrix[3][3] = {};
  
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
                cout << matrix[i][j] * n << "\t";
        }
        cout << "\n";
    }
    return 0;
}
