#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int a1 = (a / 10000) % 10;
    int a3 = (a / 100) % 10;
    int a5 = (a / 1) % 10;
    cout << a1, a3, a5;

    return 0;
}
