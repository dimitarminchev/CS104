// 1. Редица на фибоначи до зададено число.
#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, c = a + b;

    cout << "Upper Limit: ";
    cin >> n;

    cout << a << " " << b << " " << c << " ";

    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;

        if (c < n)
        {
            cout << c << " ";
        }
    }

    return 0;

}