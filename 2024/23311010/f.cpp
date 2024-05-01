#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;

    for (int i = 100; i <= 999; i++)
    {
        int d1 = (i/100)%10;
        int d2 = (i/10)%10;
        int d3 = (i/1)%10;
        if( (i % 7 == 0) &&
            (d1 == a ||
            d1 == b ||
            d1 == c ||
            d1 == d ||
            d1 == e)
            && 
           (d2 == a ||
            d2 == b ||
            d2 == c ||
            d2 == d ||
            d2 == e)
            &&

           (d3 == a ||
            d3 == b ||
            d3 == c ||
            d3 == d ||
            d3 == e))
            {
                cout << i << endl;
                return 0;
            }



    }
    cout << "-1" << endl;
    return 0;
}