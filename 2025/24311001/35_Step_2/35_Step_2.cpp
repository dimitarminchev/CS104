#include <iostream>
using namespace std;
int step2(int n)
{
    if (n == 1) return 2;
    else return 2 * step2(n - 1);
}
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    for (int k = 1; k <= n; k++)
    {

        cout << "2^" << k << "=" << step2(k) << endl;

    }


    return 0;
}
