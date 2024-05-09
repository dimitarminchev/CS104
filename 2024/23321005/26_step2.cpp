// Рекурсивна функия за степен на двойката до зададено число
#include <iostream>
using namespace std;

int powerOfTwo(int n) {
    if (n == 0) {
        return 1; // 2^0 = 1
    }
    else {
        return 2 * powerOfTwo(n - 1);
    }
}

int main() {
    int n;
    cout << "Въведете число: ";
    cin >> n;

    cout << "Степен на двойката до " << n << " е: " << powerOfTwo(n) << endl;

    return 0;
}