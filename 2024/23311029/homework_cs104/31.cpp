#include <iostream>
using namespace std;

int main() {
    int input, min = 0, max = 0, sum = 0;

    while (true) {
        cin >> input;
        sum += input;
        if (input > 0 && input > max) {
            max = input;
        }
        if (input < 0 && input < min) {
            min = input;
        }
        if (sum == 0) {
            break;
        }
    }
    cout << min << " " << max << endl;
    return 0;
}
