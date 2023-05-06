#include <iostream>
using namespace std;
int main()
{
    int X = 1, Y = 1;

    // Увеличаване с единица
    cout << X + 1 << endl;
    cout << X++ << endl;
    cout << ++Y << endl;

    // Намаляване с единица
    cout << X - 1 << endl;
    cout << X-- << endl;
    cout << --Y << endl;

    return 0;
}
