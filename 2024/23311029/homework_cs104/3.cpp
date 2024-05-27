#include <iostream>
using namespace std;
int main()
{
    int a, stot, des, ed;
    cin >> a;
    ed = a / 100;
    des = (a % 100) / 10;
    stot = a % 10;
    cout << stot << des << ed;
    return 0;
}