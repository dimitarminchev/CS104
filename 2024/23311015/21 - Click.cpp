#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    while (a != 101)
    {
        if(a%7==0 || a%10 == 7 || a/10 == 7)
        {
            cout << "Click ";
        }
        else
        {
        cout << a << " ";
        }
        a++;
    }
    return 0;
}