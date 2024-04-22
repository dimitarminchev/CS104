#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x, n;
    long sum = 0;
    cout << "Eneter x and n: " << endl;
    cin >> x >> n;

    for (int i = 1; i <= n; i++)
    {
       sum = sum + (pow(-1,i) * pow(x,i));
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}