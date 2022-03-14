#include <iostream>

using namespace std;

int main()
{
    int a[3][3], b[3][3];

    cout << "Please enter first matrix elements (3x3): \n";

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> a[x][y];
        }
    }

    cout << "\nPlease enter second matrix elements (3x3): \n";

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> b[x][y];
        }
    }

    cout << "\nMatrix Sum Result: \n";

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << a[x][y] + b[x][y] << '\t';
        }

        cout << endl;
    }

    return 0;
}