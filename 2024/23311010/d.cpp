#include<iostream>
using namespace std;
int main()
{
    int start, end, counter = 0;
    cin >> start >> end;

    for(int n = start; n <= end; n++)
    {
        int a = (n/1000)%10;
        int b = (n/100)%10;
        int c = (n/10)%10;
        int d = (n/1)%10;

        if( n == a + b*b + c*c*c + d*d*d*d)
        {
            counter++;
        }
    }

cout << counter << endl;
return 0;
}