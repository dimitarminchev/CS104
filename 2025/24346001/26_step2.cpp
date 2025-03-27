#include <iostream>
using namespace std;

// step2.cpp = Рекурсивна функия за степен на двойката до зададено число
// if n=5, it returns 2^5 = 32.

long long powerOfTwo(int n) {
    if(n == 0) return 1;   // 2^0 = 1
    return 2 * powerOfTwo(n - 1);
}

int main() {
    int n;
    cout << "Enter a non-negative integer n: ";
    cin >> n;

    cout << "2^" << n << " = " << powerOfTwo(n) << endl;
    return 0;
}
