#include <iostream>
using namespace std;

int main() {
    int sum;
    cin >> sum;
    bool found = false;
    for (int i = 999; i >= 100; --i) {
        int digitSum = 0;
        int number = i;
        while (number > 0) {
            digitSum += number % 10;
            number /= 10;
        }
        if (digitSum == sum) {
            cout << i << " ";
            found = true;
        }
    }
    return 0;
}
