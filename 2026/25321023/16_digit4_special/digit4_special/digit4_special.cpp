#include <iostream>
using namespace std;

int main() {
    for (int i = 1000; i <= 9999; i++) {
        int thousands = i / 1000;
        int hundreds = (i / 100) % 10;
        int tens = (i / 10) % 10;
        int ones = i % 10;

        if (tens + ones == thousands + hundreds) {
            cout << i << endl;
        }
    }

    return 0;
}