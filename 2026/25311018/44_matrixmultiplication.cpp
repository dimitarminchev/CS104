#include <iostream>
using namespace std;
int main ()
{
    //declaration of matrix
    int A[3][3], m;

    for (int x = 0; x<3; x++)
        for (int y = 0; y < 3; y++)
            cin >> A[x][y];

    cout << "Multiplication Factor: ";
    cin >> m;

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++)
            cout << A[x][y] * m << '\t';
        cout << '\n';
    }
    
    return 0;
}