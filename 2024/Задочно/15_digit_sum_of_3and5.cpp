// 15. Сума на трицифрени кратни на 3 и пет
#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
    int sum = 0;

    for(int k=100; k<=999; k++)
    {
       if(k % 15 == 0)
       {
             sum = sum + k;    
       }
    }

    cout << sum << endl;

    return 0;
}
