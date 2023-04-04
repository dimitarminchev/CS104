#include <iostream>
using namespace std;
int main()

{
    int a, b;

    cout << "Please input a value for a = ";
    cin >> a;

    cout << "Please input a value for b = ";
    cin >> b;
    cout << endl;

    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    return 0;
}