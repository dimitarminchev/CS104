#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "n=?"<<endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = i + sum;
    }
    cout << "sum=" << sum << endl;
    return 0;
}