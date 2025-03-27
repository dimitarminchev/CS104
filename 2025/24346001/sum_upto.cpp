#include <iostream>
using namespace std;

// sum_upto.cpp = Сумата на естествените числа до зададено число

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of numbers 1 to " << n << " is: " << sum << endl;

    return 0;
}
