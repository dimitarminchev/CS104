#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a;
    int x;
    const float Pi = 3.14;
    cin >> a >> x;

    switch (x) {
    case 1:
        cout  << 3 * a << endl;
        break;
    case 2:
        cout << a * a << endl;
        break;
    case 3:
        cout << Pi * pow(a, 2) << endl;
        break;
    default:
        break;
    }
    return 0;
}
