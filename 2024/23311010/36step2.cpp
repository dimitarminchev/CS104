#include<iostream>
using namespace std;

int power(int n,int b)
{
 if(n==1) return b;
 return b * power(b, n-1);
}
int main()
{

    int n, b;
    cout << "Enter n and b: " << endl;
    cin >> b >> n;
    cout << b << "^" << n << "=" << power(b,n) << endl;
    return 0;
 }