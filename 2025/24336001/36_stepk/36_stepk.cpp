#include <iostream>
using namespace std;
int step2(int x, int n)
{
    if (n == 1) return x;
    else return x * step2(x,n - 1);
}
int main()
{
    int x,n;
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;
    cout << x << "^" << n << "=" << step2(x, n) << endl;
    
    return 0;
}

