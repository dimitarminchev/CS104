#include<iostream>
using namespace std;
int step(int n, int a)
{
    if (n > 1) return a * step(n - 1, a);
    else return a;
}

int main()
{
    int n, a;
    cout << "Enter a, n: ";
    cin >> a >> n;
    cout << a<< "^" << n << "=" << step(n,a) << endl;
    return 0;
}