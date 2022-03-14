#include <iostream>
using namespace std;

int main()
{
    int A[3][3];

    cout << "Enter matrix:" << endl;

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << A[x][y] << '\t';
        }

        cout << endl;
    }

    return 0;
}