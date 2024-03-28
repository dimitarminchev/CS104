#include <iostream>

using namespace std;

int main()
{
    unsigned int primesUpTo, divider = 2;

    cout << "Up to which numbers we want to print numbers, sir?" << endl;
    cin >> primesUpTo;

    // while (divider <= primesUpTo / 2)
    // {

    //     if (primesUpTo % divider == 0)
    //     {
    //         cout << divider << " ";
    //     }

    //     divider += 1;

    // }

    // for (unsigned int i = 2; i < primesUpTo; i++)
    // {
    //     unsigned int x[i];

    //     for (unsigned int y = 0; y < primesUpTo / 2; i++)
    //     {
    //         if (i % y == 0)
    //         {
    //             cout << i << " ";
    //         }
    //     }

    // }

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