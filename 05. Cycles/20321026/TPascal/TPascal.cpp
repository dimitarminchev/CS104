// Tриъгълника на Паскал

#include <iostream>
using namespace std;
int main()
{
    int a = 6, n = 1;

    for (int r = 0; r < a; r++)
    {
        for (int i = 1; i <= a - r; i++) cout << "  ";
        cout << "1   ";

        for (int j = 1; j <= r; j++)
        {
            n = n * (1 + r - j) / j;
            if (n <= 6) cout << n << "   ";
            else if (n >= 6) cout << n << "  ";
        }
        cout << endl;
    }

    return 0;
}