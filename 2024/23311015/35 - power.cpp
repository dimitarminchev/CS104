#include<iostream>
#include<cmath>
using namespace std;
int power(int n)
{
    return pow(2,n);
}
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "2 to the power of " << n << " = " << power(n) << endl;

    return 0;
}