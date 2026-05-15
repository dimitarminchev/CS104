#include <iostream>
using namespace std;
int main () 
{
    int n , sum=0;

    cout << "n=";
    cin>> n; //10

    for(int i=1; i<= n; i++)
    {
        sum+=i; // 1+2+3+...+10
    }
    cout << sum << endl; //55

    return 0;
}
    

