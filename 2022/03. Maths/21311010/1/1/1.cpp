#include <iostream>
using namespace std;
int main()
{
    int a;

    cin >> a; // 245

    int a1 = (a / 1) % 10; // 5
    int a2 = (a / 10) % 10; // 4
    int a3 = (a / 100) % 10; // 2


    cout << a1 << a2 << a3;

    return 0;
}