#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x, n;
    int sum = 0;
    cout << "Eneter x and n: " << endl;
    cin >> x >> n;

    for (int i = 1; i <= n; i++)
    {
       sum = sum + pow(x,i);
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}