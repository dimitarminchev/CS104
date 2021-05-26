
#include <iostream>
using namespace std;
int main()
{
    int A[3][3];

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
        cout << '\n';
    }

    return 0;
}