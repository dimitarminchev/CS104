// Намерете сумата на всички трицифрени кратни на 3 и 5
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 100; i < 1000; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            sum += i;
        }
    }

    cout << "SUM: " << sum << endl;

    return 0;
}