#include <iostream>
using namespace std;
int main()

{

    int a;
    cout << "Please input a value for a = ";
    cin >> a;

    int a2 = (a / 100) % 10;
    cout << "a3 = " << a2 << endl;
    int a1 = (a / 10) % 10;
    cout << "a3 = " << a1 << endl;
    int a0 = (a / 1) % 10;
    cout << "a3 = " << a0 << endl;

    cout << "a0 * a1 * a2 = " << a0 * a1 * a2 << endl;

    return 0;
}