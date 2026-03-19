#include<iostream>
using namespace std;

int main()
{
    int A[3][3], B[3][3], C[3][3];

    cout << "A: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "B: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> B[i][j];
        }
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}