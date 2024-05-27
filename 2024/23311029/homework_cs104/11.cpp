#include <iostream>
using namespace std;
int main()
{
    int h, m, m1, sumOfMinutes;
    cin >> h >> m >> m1;
    sumOfMinutes = (h * 60) + m + m1;
    int landingH = (sumOfMinutes / 60) % 24;
    int landingM = sumOfMinutes % 60;
    if(landingH < 10)
    {
        cout << "0" << landingH << "h ";
    }
    if(landingM < 10)
    {
        cout << "0" << landingM << "m";
    }
    return 0;
}