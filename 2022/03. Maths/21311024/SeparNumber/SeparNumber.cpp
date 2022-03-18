#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "a=?" << endl;
    cin >> a;

    int a1 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a3 = (a / 1) % 10;

    cout << a1 << " " << a2 << " " << a3;

    return 0;