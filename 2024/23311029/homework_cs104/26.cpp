#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cin >> num;
    for (int i = 0; i < num; i++) {
        int number;
        cin >> number;
        if (number % 7 == 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}
