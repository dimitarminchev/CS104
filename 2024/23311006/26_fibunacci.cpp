#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a = 1, b =1, c = a + b;
    cout << a << " " << b << " ";
    while (c<n)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
