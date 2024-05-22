
#include<iostream>
using namespace std;
int main() 
{
    int a, b;    
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int m = i / 100;
        int n = i % 100;

        if(m*m == n) cout << i << " ";
        
    }

    cout << endl;
    return 0;
}
