
#include<iostream>
using namespace std;
int main() 
{
    int n;    
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if((i % 15 == 0))
        {
          cout << i << " ";
        }
        
    }

    cout << endl;
    return 0;
}
