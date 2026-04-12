#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0, b = 1;

    cout << a << " " << b << " ";

    int next = a + b;

    while (next <= n)
    {
        cout << next << " ";
        a = b;
        b = next;
        next = a + b;
    }

    return 0;
}