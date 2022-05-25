#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];


    for (int x = 1; x <= 9; x++)
        for (int y = 0; y <= 9; y++)
            for (int z = 0; z <= 9; z++)
            {
                int digit = x * 100 + y * 10 + z;

                if ((x == a[0] || x == a[1] || x == a[2] || x == a[3] || x == a[4]) &&
                    (y == a[0] || y == a[1] || y == a[2] || y == a[3] || y == a[4]) &&
                    (z == a[0] || z == a[1] || z == a[2] || z == a[3] || z == a[4]) &&
                    (digit % 7 == 0))


                {
                    cout << digit << endl;
                    return 0;
                }
            }
   
    cout << -1 << endl;
    return 0;
}