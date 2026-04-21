#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 0, b = 1, next;

    cout << "Vuvedi n: ";
    cin >> n;

    cout << "Fibonacci: ";

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";

        next = a + b;
        a = b;
        b = next;
    }

    cout << endl;

    cin.get();
    cin.get();
    return 0;
}

