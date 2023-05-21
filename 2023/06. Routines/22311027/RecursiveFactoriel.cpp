#include <iostream>

using namespace std;

double fak(int n)
{
    if (n == 1) return 1;

    return n * fak(n - 1);
}

int main()
{
    int m;

    cin >> m;

    cout << "m!=" << fak(m) << endl;

    return 0;
}