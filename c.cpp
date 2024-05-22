
#include<iostream>
using namespace std;
int main() 
{
    int a, b, sum = 0;    
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if((i % 2 == 1) && (i % 3 == 0))
        {
           sum += i;
        }
        
    }

    cout << sum << endl;
    return 0;
}
