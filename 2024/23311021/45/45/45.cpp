#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter the number by which we are multiplying\n";
    cin >> n;

    int matrix[2][2] =
    {
        { 1, 3 },
        { 2, 5 }
    };

    int mat[2][2] =
    {
        { 2, 1 },
        { 3, 2 }
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] + mat[i][j] << " ";

        }
    }
    return 0;
}
