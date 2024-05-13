#include <iostream>
using namespace std;
int main()
{
    int n;

    int a[3][3], b[3][3];
    cout << "Enter matrix values: " << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) 
            cin >> a[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) 
            cin >> b[i][j];
        
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] + b[i][j]<< "\t";
        cout << endl;
    }
    return 0;
}
