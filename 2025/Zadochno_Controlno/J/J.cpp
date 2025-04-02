#include <iostream>
using namespace std;
int main()
{
    int n, a = 1, b = 1, c = a + b, sum = 4, pro = 2;
    cin >> n;
    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;
        if (c > n) break;
        sum = sum + c;
        pro = pro * c;
    }
    cout << pro - sum << endl;
    return 0;
}
