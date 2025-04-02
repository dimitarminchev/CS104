#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int br = 0;
    for (int i = a; i <= b; i++)
    {
        int c1 = (i / 100) % 10;
        int c2 = (i / 10) % 10;
        int c3 = (i / 1) % 10;
        if (c1 != c2 && c2 != c3 && c1 != c3)
        {
            br = br + 1;
        }
    }
    cout << br << endl;
    return 0;
}
