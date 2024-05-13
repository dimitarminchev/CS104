#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3] = {0};
    cout << "Enter matrix values: " << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) 
            cin >> a[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) 
            cin >> b[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << c[i][j]<< "\t";
        cout << endl;
    }
    return 0;
}
