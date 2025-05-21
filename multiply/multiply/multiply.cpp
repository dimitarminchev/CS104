#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0;

    while (a > 0) {
        cout << a << " " << b << endl;

        if (a % 2 != 0) {
            sum += b;
        }

        a /= 2;
        b *= 2;
    }

    cout << sum << endl;

    return 0;
}
