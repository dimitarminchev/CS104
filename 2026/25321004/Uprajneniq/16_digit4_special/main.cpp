#include <iostream>
using namespace std;

int main()
{
    int n;
    int a, b, c, d;

    for (n = 1000; n <= 9999; n++)
    {
        a = n / 1000;          // хиляди
        b = (n / 100) % 10;   // стотици
        c = (n / 10) % 10;    // десетици
        d = n % 10;           // единици

        if ((c + d) == (a + b))
        {
            cout << n << endl;
        }
    }

    cin.get();
    return 0;
}
