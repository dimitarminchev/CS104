#include<iostream>
using namespace std;

int main() {
    int sum = 0, number;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; ++i) {
        sum += i;
    }

    cout << "The sum of numbers from 1 to " << number << " is " << sum << endl;
    return 0;
}