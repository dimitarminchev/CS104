#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 10; i <= n; i++)
    {
        int a = i / 10;
        int b = i % 10;
        sum = sum + a + b;
    }
    cout << sum << endl;
    return 0;
}
