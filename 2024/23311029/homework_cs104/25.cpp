#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cin >> num;
    for (int i = 1; i <= num; i += 2) {
        sum += i;
    }
    cout << sum;
    return 0;
}
