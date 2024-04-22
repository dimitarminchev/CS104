#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;
    int sum = 0;
    int f[100] = { 0 };
    for (int i = 0; i < n; i++) 
    {
        f[i] = pow(x, i + 1);
        sum = sum + f[i];
    }
    cout << sum << endl;
    return 0;
}