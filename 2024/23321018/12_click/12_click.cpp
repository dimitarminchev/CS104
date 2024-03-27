// game "Click"
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            cout << "Click" << endl;
        }
        else {
            cout << i << endl;
        }
    }
    return 0;
}
