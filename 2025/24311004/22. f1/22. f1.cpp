#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, n, sum = 0;
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        sum += pow(x, i);
    }

    cout << sum;
}