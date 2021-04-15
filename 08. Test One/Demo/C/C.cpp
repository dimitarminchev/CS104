#include <iostream>
using namespace std;
int main()
{
    int a, b, sum = 0;
    cin >> a >> b;
    for (int k = a; k <= b; k++)
    {
        if (k % 3 == 0 && k % 2 != 0)
        {
            sum = sum + k;
        }
    }
    cout << sum << endl;
    return 0;
}