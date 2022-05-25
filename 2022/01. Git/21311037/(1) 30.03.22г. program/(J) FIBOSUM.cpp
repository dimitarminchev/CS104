#include <iostream>
using namespace std;
int main()
{
    int n, a = 1, b = 1, c = a + b;
    cin >> n;

    int sum = 2, pro = 1;

    while (c < n)
    {
        sum = sum + c;
        pro = pro * c;

        a = b;
        b = c;
        c = a + b;
    }

    cout << (pro - sum) << endl; // 220
    return 0;
}