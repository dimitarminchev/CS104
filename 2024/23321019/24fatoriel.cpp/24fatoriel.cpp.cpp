// Рекурсивна функия за Факториел до зададено число
#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "vuvedete 4islo: ";
    cin >> n;

    cout << "faktoriel ot " << n << " е: " << factorial(n) << endl;

    return 0;
}
