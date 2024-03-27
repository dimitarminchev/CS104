//Print four-digit numbers for which the sum of the tens and ones digits is equal to the sum of the thousands and hundreds digit
#include <iostream>
using namespace std;

int main() {
    cout << "Four-digit numbers where the sum of tens and ones is equal to the sum of thousands and hundreds digits:" << endl;

    for (int num = 1000; num <= 9999; ++num) {
        int thousands = num / 1000;
        int hundreds = (num / 100) % 10;
        int tens = (num / 10) % 10;
        int ones = num % 10;

        if (tens + ones == thousands + hundreds) {
            cout << num << endl;
        }
    }

    return 0;
}
