#include<iostream>
using namespace std;
int main()
{
    int start, end, counter = 0;
    cin >> start >> end;

    for(int a = start; a <= end; a++)
    {
        int a3 = (a/100)%10;
        int a2 = (a/10)%10;
        int a1 = (a/1)%10;


        if(a3==7) counter++;
        if(a2==7) counter++;
        if(a1==7) counter++;

    }
    cout << counter << endl;
    return 0;

}