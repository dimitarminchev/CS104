#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int n;

    int a[3][3], b[3][3];
    cout << "Enter matrix values:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) 
            cin >> a[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) 
            cin >> b[i][j];
        
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] * b[i][j]<< "\t";
        cout << '\n';
    }
    return 0;
}
