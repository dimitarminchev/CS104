#include<iostream>
using namespace std;
int main()
{
    int a,b;

    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    int p = 2 * (a+b);
    int s = a * b;

    cout << "p=" << p << endl;
    cout << "s=" << s << endl;
    
    return 0;
}