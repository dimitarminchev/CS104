#include <iostream>
using namespace std;
int main()
{
    int a, hil, stot, des, ed;
    cin >> a;
    ed = a % 10;
    des = (a % 100) / 10;
    stot = (a / 100) % 10;
    hil = a / 1000;
    int sbor = hil + stot + des + ed;
    int proizvedenie = hil * stot * des * ed;
    cout << sbor << " " << proizvedenie;
    return 0;
}
