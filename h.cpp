
#include<iostream>
using namespace std;
int main() 
{
    int n, sum = 0;    
    cin >> n;

    for (int i = 10; i <= n; i++)
    {
         int a = (i/10)%10;
         int b = (i/1)%10;
        
         sum += a + b;
    }

    cout << sum << endl;
    return 0;
}
