#include<iostream>
using namespace std;
int main()
{
    int n;

    // input
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl;
    cout << "Please select [1-3]: ";
    cin >> n;

    // 1. Square
    if(n==1)
    {   
        int a;
        cout << "a=";
        cin >> a;
        cout << "p=" << 4*a << endl;
        cout << "s=" << a*a << endl;
    }

    // 2. Rectangle
    if(n==2)
    {   
        int a,b;
        cout << "a=";
        cin >> a;
        cout << "b=";
        cin >> b;
        cout << "p=" << 2*(a+b) << endl;
        cout << "s=" << a*b << endl;
    }

    // 3. Circle
    if(n==3)
    {   
        float r;
        cout << "r=";
        cin >> r;
        cout << "p=" << 4*3.14*r << endl;
        cout << "s=" << 3.14*r*r << endl;
    }
   
    return 0;
}