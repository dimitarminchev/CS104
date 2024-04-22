#include<iostream>
using namespace std;

unsigned long long powerOfTwo(int n) {
    if (n == 0)
        return 1;
    return 2 * powerOfTwo(n - 1);
}

int main() {
    int num;
    cout << "Въведете степен: ";
    cin >> num;

    cout << "2^" << num << " = " << powerOfTwo(num) << endl;

    return 0;
}