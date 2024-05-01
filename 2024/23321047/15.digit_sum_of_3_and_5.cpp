#include<iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            sum += i;
        }
    }

    cout << "The sum of numbers from 1 to 100 that are divisible by 3 or 5 is " << sum << endl;
    return 0;
}