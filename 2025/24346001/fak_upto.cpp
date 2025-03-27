// fak_upto.cpp = Изчислете Факториел до зададено число

#include <iostream>
using namespace std;

// This program calculates the factorial of numbers up to a given integer n.
// For example, if n=5, it will calculate 1!, 2!, 3!, 4!, and 5!.

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    long long factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
        cout << i << "! = " << factorial << endl;
    }

    return 0;
}
