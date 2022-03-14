#include <iostream>
using namespace std;
int main()
{
    int A[3][3], B[3][3], N;
    cout << "Please enter matrix elements:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }
    cout << "Please enter multiplication number: " << endl;
    cin >> N;
    cout << "Result: " << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            B[x][y] = A[x][y] * N;
            cout << B[x][y] << '\t';
        }
        cout << '\n';
    }
    return 0;
}