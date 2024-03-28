#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;  int pro = 1;
    for (int k = 1; k <= n; k++)
    {
        sum = (sum + k);
        pro = (pro * k);
        
    }
    cout << sum <<  pro << endl;
   
    return 0;
    
        }
    