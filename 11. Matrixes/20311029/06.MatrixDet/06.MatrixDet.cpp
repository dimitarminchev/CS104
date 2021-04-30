#include <iostream>

using namespace std;

int main()
{
    int a[3][3];

    cout << "Please enter matrix elements (3x3): \n";

    for (int i = 0; i < 3; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            cin >> a[i][t];
        }
    }

    int detA = 0
        + a[0][0] * a[1][1] * a[2][2] 
        + a[0][1] * a[1][2] * a[2][0]
        + a[0][2] * a[1][0] * a[2][1]
        - a[2][0] * a[1][1] * a[0][2]
        - a[2][1] * a[1][2] * a[0][0]
        - a[2][2] * a[1][0] * a[0][1];

    cout << "det.A = " << detA << endl;

    return 0;
}