#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    if (a != 0) {
        float x = b / a;
        cout << x;
    }
    else if (b == 0) {
        cout << "всяко x е решение";
    }
    else {
        cout << "няма решение";
    }
    return 0;
}
