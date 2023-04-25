#include <iostream>
using namespace std;
int main()

{

    int x, y;

    cout << "Please input a value for x=";
    cin >> x;
    cout << "Please input a value for y=";
    cin >> y;

    cout << "x + 1 = " << x + 1 << endl;
    cout << "x++ = " << x++ << endl;
    cout << "y++ = "<< y++ << endl;

    cout << "x + 1 = " << x - 1 << endl;
    cout << "x++ = " << x-- << endl;
    cout << "y++ = " << --y << endl;

    return 0;
}