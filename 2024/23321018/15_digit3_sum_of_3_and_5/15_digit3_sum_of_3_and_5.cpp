//Find the sum of all three - digit multiples of 3 and 5
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 100; i <= 999; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    cout << "The sum of all three-digit multiples of 3 and 5 is: " << sum << endl;

    return 0;
}
