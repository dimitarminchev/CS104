#include <iostream>

using namespace std;

int step2(int n)
{
    if (n == 1) return 2;

    return 2 * step2(n - 1);
}

int main()
{
    int m;

    cin >> m;

    cout << step2(m) << endl;

    return 0;
}