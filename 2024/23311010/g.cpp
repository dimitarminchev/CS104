#include<iostream>
using namespace std;
int main()
{
    int start, end, counter =0;
    cin >> start >> end;
    
    for (int i = start; i <= end; i++)
    {
        int a = (i/100)%10;
        int b = (i/10)%10;
        int c = (i/1)%10;
        if(a!=b && a!=c && b!=c && a-b==b-c)
        {
            counter++;
        }
    }
    cout << counter <<endl;
    return 0;

}