#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;

    int a = 1, b = 2, c = a + b;
    cout << "1 1 2";

    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;
        cout << " ";
    }
    return 0;
}

