
#include<iostream>
using namespace std;
int main() 
{
    int a, b, br = 0;    
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
         int a1 = (i/100)%10;
         int a2 = (i/10)%10;
         int a3 = (i/1)%10;
        
         if((a1 != a2) && (a2 != a3) && (a1 != a3))
         {
            br++;
         }
    }

    cout << br << endl;
    return 0;
}
