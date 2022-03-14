#include <iostream>

using namespace std;

int main()
{
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            cin >> a[i][t];
        }
    }

    cout << '\n';

    for (int i = 0; i < 3; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            cout << a[i][t] << '\t';
        }
        cout << '\n';
    }

    return 0;
}