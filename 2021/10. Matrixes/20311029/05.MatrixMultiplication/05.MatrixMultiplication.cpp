#include <iostream>

using namespace std;

int main()
{
    int a[3][3], b[3][3], c;

    cout << "Please enter first matrix elements (3x3): \n";

    for (int i = 0; i < 3; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            cin >> a[i][t];
        }
    }

    cout << "\nPlease enter second matrix elements (3x3): \n";

    for (int i = 0; i < 3; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            cin >> b[i][t];
        }
    }

    cout << "\nMatrix Multiplication: \n";

    for (int i = 0; i < 3; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            c = a[i][0] * b[0][t] + a[i][1] * b[1][t] + a[i][2] * b[2][t];

            cout << c << '\t';
        }

        cout << endl;
    }

    return 0;
}