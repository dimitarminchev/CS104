#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int number = gcd(a, b);
        if (number > 1)
        {
            cout << number << " ";
        }
    }
    cout << endl;
    return 0;
}
