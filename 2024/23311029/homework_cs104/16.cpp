#include <iostream>
using namespace std;

int main() {
    int num, oddCount = 0;
    cin >> num;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            oddCount++;
        }
        num /= 10;
    }

    cout << oddCount << endl;
    return 0;
}
