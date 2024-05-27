#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, product = 1;
    cin >> num;
    for (int i = 0; i < num; i++) {
        int number;
        cin >> number;
        sum += number;
        product *= number;
    }
    cout << sum << " " << product;
    return 0;
}
