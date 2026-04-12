#include <iostream>
using namespace std;

long long combination(int n, int k)
{
    long long result = 1;

    for (int i = 1; i <= k; i++)
    {
        result = result * (n - i + 1) / i;
    }

    return result;
}

int main()
{
    cout << "5 from 35: " << combination(35, 5) << endl;
    cout << "6 from 42: " << combination(42, 6) << endl;
    cout << "6 from 49: " << combination(49, 6) << endl;

    return 0;
}