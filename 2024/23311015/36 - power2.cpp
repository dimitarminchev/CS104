#include<iostream>
using namespace std;
int power(int a, int n)
{   
    if(n==1) return a;
    else return a * power(a, n-1);
}
int main()
{   
    int a;
    int n;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << a << " to the power of " << n << " = " << power(a, n) << endl;

    return 0;
}