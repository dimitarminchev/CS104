#include <iostream>
using namespace std;

int count(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 7) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main() {
    int start, end;
    cin >> start >> end;

    int total = 0;
    for (int i = start; i <= end; i++) {
        total += count(i);
    }

    cout << total << endl;
    return 0;
}
