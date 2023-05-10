#include <iostream>

using namespace std;

int main()
{
    int k;

    for (k = 1; k <= 1000; k++)
    {
        int k3 = (k / 100) % 10;
        int k2 = (k / 10) % 10;
        int k1 = (k / 1) % 10;

        if (k1 == 7 || k2 == 7 || k3 == 7 || k % 7 == 0)
        {
            cout << "click ";
        }
        else
        {
            cout << k << " ";
        }
    }

    cout << endl;
    return 0;
}