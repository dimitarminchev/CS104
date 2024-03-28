// 23-f2.cpp
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x, n, sum = 0;
    cin >> x >> n;
    for (int k = 1; k <= n; k++)
    {
        sum += (pow((-1), k) * pow(x, k));
    }
    cout << sum << endl;
    return 0;
}