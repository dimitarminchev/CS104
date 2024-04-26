#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if (a[j][k] < a[k][l])
                    {
                        int temp = a[j][k];
                        a[j][k] = a[k][l];
                        a[k][l] = temp;
                    }
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}