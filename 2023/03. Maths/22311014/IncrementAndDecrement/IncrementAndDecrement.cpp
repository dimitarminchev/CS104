#include <iostream>
using namespace std;
int main()
{
    int X, Y;
    cin >> X >> Y;

    cout << X + 1 << endl;
    cout << X++ << endl;
    cout << ++Y << endl;

    cout << X - 1 << endl;
    cout << X-- << endl;
    cout << --Y << endl;

    return 0;
}
