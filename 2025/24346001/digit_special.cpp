#include <iostream>
using namespace std;

// digit4_special.cpp = Отпечатайте четирицифрениte числа,
// за които сбора на цифрите на десетици и единици е равен
// на сбора цифрите на хилядни и стотици

int main() {
    for(int num = 1000; num <= 9999; num++) {
        int thousands = num / 1000;
        int hundreds = (num / 100) % 10;
        int tens = (num / 10) % 10;
        int ones = num % 10;

        if((tens + ones) == (thousands + hundreds)) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
