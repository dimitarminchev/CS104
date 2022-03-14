#include <iostream>
using namespace std;

int main()
{

    int i, j, a[3][3], c[3], n, m, min, p, d;
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
    cout << "minimal elements:" << endl;
    for (j = 0; j < m; j++)
    {
        min = a[0][j];
        for (i = 1; i < n; i++)
        {
            if (a[i][j] < min)
                min = a[i][j];
        }

        cout << min << "  " << endl;
    }

    return 0;
}