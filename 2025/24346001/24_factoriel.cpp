
#include <iostream>
using namespace std;

// fatoriel.cpp = Рекурсивна функия за Факториел до зададено число

long long factorial(int n) {
    // Base case
    if(n <= 1) return 1;
    // Recursive step
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    cout << n << "! = " << factorial(n) << endl;
    return 0;
}
