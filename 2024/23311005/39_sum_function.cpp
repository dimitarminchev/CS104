#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n, x;
    int sum = 0;
    int f[100] = {0};
    cout << "Enter x, n: " << endl;
    cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
       f[i] = pow(x, i+1);
       sum = sum + f[i];
    }
    
    cout << sum << endl;
    return 0;
}