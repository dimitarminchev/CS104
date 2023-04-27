#include <iostream>
using namespace std;
int main()
{
    // Game "click"
    int k;

    // Let's play to 1000
    for (k = 1; k <= 1000; k++)
    {
        // Splitting the digits of the number
        int k3 = (k / 100) % 10;
        int k2 = (k / 10) % 10;
        int k1 = (k / 1) % 10;

        // Checking if any of these digits is not 7
        if (k1 == 7 || k2 == 7 || k3 == 7 || k % 7 == 0)
        {
            cout << "click ";
        }
        else
        {
            cout << k << " ";
        }
    }

    return 0;
}