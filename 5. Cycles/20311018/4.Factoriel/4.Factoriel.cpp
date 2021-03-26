#include <iostream>
using namespace std;
int main()
{
    const int n = 5;

    int fac = 1, index = 1;

    do
    {
        fac = fac * index;
        index = index + 1;
    } while (index <= n);

    cout << n << "!=" << fac << endl;

    return 0;
}