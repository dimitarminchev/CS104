// Отпечатайте четирицифрениte числа, за които сбора на цифрите на десетици и единици е равен на сбора цифрите на хилядни и стотици
#include <iostream>
using namespace std;

int main() {
    for (int thousands = 1; thousands <= 9; ++thousands) {
        for (int hundreds = 0; hundreds <= 9; ++hundreds) {
            int sum = thousands + hundreds;
            int digitsSum = sum % 10 + sum / 10;
            if (digitsSum == thousands + hundreds) {
                cout << thousands << hundreds << sum << sum << endl;
            }
        }
    }

    return 0;
}