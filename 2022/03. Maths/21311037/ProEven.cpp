#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "a=?" << endl;
    cin >> a;

    int a6 = (a / 100000) % 10; // 1
    int a4 = (a / 1000) % 10; // 3
    int a2 = (a / 10) % 10; // 5

    int pro = a6 * a4 * a2;

    cout << pro << endl;

    return 0;
}