#include<iostream>
using namespace std;
int main()
{
    int n, steps = 0;
    cin >> n;

    while(n>1)
    {
        if(n%2==0)n/=2;
        else if (n%3==0) n/=3;
        else n++;
        cout << n << " ";
        steps++;
    }
 cout << endl << steps << endl;
return 0;
}