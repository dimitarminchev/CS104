#include <iostream>
using namespace std;
int main()
{

    int i, j, a[4][4], c[4], n, m, max, p, d;
    cout << "number of rows: ";
    cin >> n;
    cout << "number of columns: ";
    cin >> m;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << a[i][j] << "  ";
        cout << endl;
    }
    cout << "max elements:" << endl;
    for (j = 0; j < m; j++)
    {
        max = a[0][j];
        for (i = 1; i < n; i++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }

        cout << max << "  " << endl;
    }

    return 0;
}