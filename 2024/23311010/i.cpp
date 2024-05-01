#include<iostream>
using namespace std;
int main()
{
    int start, end, counter = 0;
    cin >> start >> end;
    for ( int i = start; i < end ; i++)
    {
        int a = (i/10000)%10;
        int b = (i/1000)%10;
        int c = (i/100)%10;
        int d = (i/10)%10;
        int e = (i/1)%10;
        if(a+b==c && c==d+e)
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}