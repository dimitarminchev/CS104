#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int count = 0;

    for (int i = m; i <= n; i++) {
        int num = i;

        while (num > 0) {
            if (num < 2) break;

            int d = 2;
            while (d * d <= num) {
                if (num % d == 0) break;
                d++;
            }

            if (d * d <= num) break;

            num /= 10;
        }

        if (num == 0) count++;
    }

    cout << count << endl;
    return 0;
}
