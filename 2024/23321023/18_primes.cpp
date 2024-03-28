#include <iostream>

using namespace std;

int main()
{
    unsigned int primesUpTo;

    cout << "Up to which numbers we want to print numbers, sir?" << endl;
    cin >> primesUpTo;

    unsigned int x;
    unsigned int y;

    for (x = 2; x < primesUpTo; x++)
    {
        for (y = 2; y < x; y++)
        {
            if (x % y == 0)
            {
                break;
            }
        }

        if (x == y)
        {
            cout << x << " ";
        }
    }

    return 0;
}