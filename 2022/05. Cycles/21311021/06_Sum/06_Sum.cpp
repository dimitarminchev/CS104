#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;

    cout << "n = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        sum += (i+1);
    }

    cout << "sum = " << sum << endl;

    return 0;
}