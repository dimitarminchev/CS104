#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b; // 131 .. 151

    int count = 0;

    for (int k = a; k <= b; k++)
    {
        int k1 = (k / 100) % 10;
        int k2 = (k / 10) % 10;
        int k3 = (k / 1) % 10;

        if (k1 != k2 && k2 != k3 && k1 != k3)
        {
            count = count + 1;
        }
    }
    cout << count << endl;

    return 0;
}