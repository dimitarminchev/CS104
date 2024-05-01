#include<iostream>
using namespace std;
int main()
{
    int a ,b, sum = 0; 
    cin >> a >> b;
    if(a%2!=0) sum += b;
    while(a>=1)
    {
        cout << a << " " << b << endl;
        a /= 2;
        b *= 2;
        if(a%2!=0) sum += b;
    }
    cout << sum << endl;
    return 0;
}