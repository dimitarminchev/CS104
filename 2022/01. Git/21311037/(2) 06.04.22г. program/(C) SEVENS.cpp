#include <iostream>
using namespace std;
int main()
{
    int a, b, br = 1;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int d1 = (i / 100) % 10;
        int d2 = (i / 10) % 10;
        int d3 = (i / 1) % 10;
        if (d1 == 7 || d2 == 7 || d3 == 7)
        {
            br = br + 1;
        }
    }
    cout << br << endl;
    return 0;
}
