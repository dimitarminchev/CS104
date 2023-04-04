#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Please input a value a = ";
    cin >> a;

    cout << "Please input a value b = ";
    cin >> b;

    if (a > b)
    {
        cout << "a > b" << endl;
    }
    else if (a == b)
    {
        cout << "b = a" << endl;
    }
    else if (a < b)
    {
        cout << "a < b" << endl;
    }
    return 0;
}