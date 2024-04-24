#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n: " << endl;
    cin >> n;
    int matrix[3][3];
    cout << "Enter matxi values: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) cin >> matrix[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = matrix[i][j]*n;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}