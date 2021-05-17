#include <iostream>
using namespace std;

int main()
{
    int A[3][3], B[3][3], N;

    cout << "Matrix multiplication by number\n\nEnter matrix:" << endl;

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    cout << "\nEnter multiplication number: ";
    cin >> N;

    cout << "\nNew matrix:" << endl;

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            B[x][y] = A[x][y] * N;
            cout << B[x][y] << '\t';
        }

        cout << endl;
    }

    return 0;
}