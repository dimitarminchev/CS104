#include <iostream>
using namespace std;
int main()
{
    int n, a = 1, b = 1, c = 2;
    cout << "n=";
    cin >> n;
    if (n < 1) {
        return 0;
    }
    cout << "1 1 ";
    if (n <= 2) {
        return 0;
    }
    cout << "2 ";

    while (c < n) {
        a = b;
        b = c;
        c = a + b;
        cout << c << " ";
    }
}