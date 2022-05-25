#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int sum = 0;

    for (int k = a; k <= b; k++)
    {
        if (k % 2 != 0 && k % 3 == 0)
        {
            sum = sum + k;
        }
    }
    cout << sum << endl;
    return 0;
}