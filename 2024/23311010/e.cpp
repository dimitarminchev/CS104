#include<iostream>
using namespace std;
bool prime(int k)
{
    
    for( int j = 2; j < k; j++)
        if(k%j== 0)
         return false;
    return true;
}

int main()
{
    int start, end, counter = 0 ;
    cin >> start >> end;
    for(int i = start; i < end; i++)
    {
       int a = i/10;
       int b = i /100;
       if(prime(i) && prime(a) && prime(b))
       {
         
         counter++;
       }
    }
    cout << counter << endl;
    return 0;
}