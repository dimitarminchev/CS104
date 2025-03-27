// digit3_sum_of_3_and_5.cpp = Намерете сумата на всички трицифрени кратни на 3 и 5

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for(int num = 100; num <= 999; num++) {
        if(num % 3 == 0 && num % 5 == 0) {
            sum += num;
        }
    }
    cout << "Sum of all three-digit numbers divisible by 3 and 5: " << sum << endl;
    return 0;
}
