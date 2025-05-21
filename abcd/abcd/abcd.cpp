#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int count = 0;

    for (int num = m; num <= n; num++) {
        int a = (num / 1000) % 10;
        int b = (num / 100) % 10;
        int c = (num / 10) % 10;
        int d = num % 10;

        int sum = a + pow(b, 2) + pow(c, 3) + pow(d, 4);

        if (num == sum) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
